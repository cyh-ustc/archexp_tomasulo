#ifndef TOMASULO_H
#define TOMASULO_H

#endif // TOMASULO_H
#include <QString>

enum InstrType
{
    nop = 0,
    ldd = 1,
    addd = 2,
    subd = 3,
    muld = 4,
    divd = 5
};

class Instruction
{
public:
    InstrType itype;
    int dest;
    int source1;
    int source2;
    QString addr;
    int issue;
    int executestart;
    int executefinish;
    int writeresult;

    int RSindex;

};
enum Q
{
    none = -1,
    load1 = 0,
    load2 = 1,
    load3 = 2,
    add1 = 3,
    add2 = 4,
    add3 = 5,
    mult1 = 6,
    mult2 = 7
};
class RSitem
{
public:
    int time;
    Q name;
    bool busy;
    InstrType op;
    QString vj;
    QString vk;
    Q qj;
    Q qk;
    QString result;
};
class RegStatusitem
{
public:
    Q qi;
    QString value;
};
class tomasulo
{
public:
    QString PreOp[6] = {"", "M[", "(", "(", "(", "("};
    QString InOp[6] = {"", "]", ")+(", ")-(", ")*(", ")/("};
    QString PostOp[6] = {"", "", ")", ")", ")", ")"};
    int loadtime;
    int addsubtime;
    int multtime;
    int divtime;

    int globalclock;
    Instruction ins[10];

    int instr_num;

    RSitem rs[8];
    RegStatusitem reg_status[16];
    tomasulo(Instruction[10]);

    void step1cycle();

};
