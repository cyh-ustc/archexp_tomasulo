#include "tomasulo.h"
tomasulo::tomasulo(Instruction instr[10])
{
    int c = 0;
    for(int i = 0; i < 10; ++i)
        if(instr[i].itype != InstrType::nop)
            ins[c++] = instr[i];
    globalclock = 0;
    globalclock = 0;
    loadtime = 2;
    addsubtime = 2;
    multtime = 10;
    divtime = 40;
    instr_num = c;

    for(int i = 0; i < 8; ++i)
    {
        rs[i].time = -1;
        rs[i].name = Q::none;
        rs[i].op = InstrType::nop;
        rs[i].vj = "";
        rs[i].vk = "";
        rs[i].qj = Q::none;
        rs[i].qk = Q::none;
        rs[i].result = "";
        rs[i].busy = false;
    }
    for(int i = 0; i < 16; ++i)
    {
        reg_status[i].qi = Q::none;
    }
}

void tomasulo::step1cycle()
{
    globalclock++;
    //issue
    for(int i = 0; i < instr_num; ++i)
    {
        if(ins[i].issue == -1)
        {
            if(ins[i].itype == InstrType::ldd)
            {
                for(int j = 0; j < 3; ++j)
                    if(rs[j].busy == false)
                    {
                        rs[j].busy = true;
                        rs[j].op = InstrType::ldd;
                        rs[j].time = -loadtime + 1;
                        rs[j].vj = ins[i].addr;
                        rs[j].vk = "";
                        rs[j].qj = Q::none;
                        rs[j].qk = Q::none;
                        reg_status[ins[i].dest].qi = (Q)j;
                        ins[i].issue = globalclock;
                        ins[i].RSindex = j;
                        break;
                    }
            }
            else if(ins[i].itype != InstrType::nop)
            {
                int startpos, finishpos, costtime;
                switch(ins[i].itype)
                {
                    case InstrType::addd: case InstrType::subd:
                        startpos = 3;
                        finishpos = 6;
                        costtime = addsubtime - 1;
                        break;
                    case InstrType::muld:
                        startpos = 6;
                        finishpos = 8;
                        costtime = multtime - 1;
                        break;
                    case InstrType::divd:
                        startpos = 6;
                        finishpos = 8;
                        costtime = divtime - 1;
                        break;
                    default:
                        break;
                }
                for(int j = startpos; j < finishpos; ++j)
                    if(rs[j].busy == false)
                    {
                        rs[j].busy = true;
                        rs[j].time = -costtime;
                        rs[j].op = ins[i].itype;
                        if(reg_status[ins[i].source1].qi == Q::none)
                        {
                            rs[j].vj = "R[F" + QString::number(ins[i].source1 * 2) + "]";
                            rs[j].qj = Q::none;
                        }
                        else
                            rs[j].qj = reg_status[ins[i].source1].qi;
                        if(reg_status[ins[i].source2].qi == Q::none)
                        {
                            rs[j].vk = "R[F" + QString::number(ins[i].source2 * 2) + "]";
                            rs[j].qk = Q::none;
                        }
                        else
                            rs[j].qk = reg_status[ins[i].source2].qi;

                        reg_status[ins[i].dest].qi = (Q)j;
                        ins[i].issue = globalclock;
                        ins[i].RSindex = j;
                        break;
                    }
            }
            break;
        }
    } // issue


    //execute
    for(int i = 0; i < instr_num; ++i)
    {
        if(ins[i].RSindex != -1 && ins[i].issue != globalclock)
        {
            int id = ins[i].RSindex;
            if(rs[id].time > 0)
            {
                rs[id].time--;
                if(rs[id].time == 0)
                {
                    rs[id].result = PreOp[rs[id].op] + rs[id].vj + InOp[rs[id].op] + rs[id].vk + PostOp[rs[id].op];
                    ins[i].executefinish = globalclock;
                }
            }
            else if(rs[id].qj == Q::none && rs[id].qk == Q::none && rs[id].time < 0)
            {
                rs[id].time = - rs[id].time;
                ins[i].executestart = globalclock;
            }
        }
    }//execute

    //write result
    for(int i = 0; i < instr_num; ++i)
    {
        if(ins[i].RSindex != -1 && rs[ins[i].RSindex].busy && ins[i].executefinish != globalclock)
        {
            int id = ins[i].RSindex;
            if(rs[id].time == 0)
            {
                for(int j = 0; j < 16; ++j)
                    if(reg_status[j].qi == id)
                    {
                        reg_status[j].value = rs[id].result;
                        reg_status[j].qi = Q::none;
                        break;
                    }
                for(int j = 0; j < 8; ++j)
                {
                    if(rs[j].qj == id)
                    {
                        rs[j].vj = rs[id].result;
                        rs[j].qj = Q::none;
                    }
                    if(rs[j].qk == id)
                    {
                        rs[j].vk = rs[id].result;
                        rs[j].qk = Q::none;
                    }
                }
                ins[i].writeresult = globalclock;
                ins[i].RSindex = -1;
                rs[id].busy = false;
                rs[id].time = -1;
                rs[id].name = Q::none;
                rs[id].op = InstrType::nop;
                rs[id].vj = "";
                rs[id].vk = "";
                rs[id].qj = Q::none;
                rs[id].qk = Q::none;
                rs[id].result = "";
            }
        }
    }//write result
}
