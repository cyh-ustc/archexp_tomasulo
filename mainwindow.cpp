#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    on_InstrcomboBox_0_currentIndexChanged(0);
    on_InstrcomboBox_1_currentIndexChanged(0);
    on_InstrcomboBox_2_currentIndexChanged(0);
    on_InstrcomboBox_3_currentIndexChanged(0);
    on_InstrcomboBox_4_currentIndexChanged(0);
    on_InstrcomboBox_5_currentIndexChanged(0);
    on_InstrcomboBox_6_currentIndexChanged(0);
    on_InstrcomboBox_7_currentIndexChanged(0);
    on_InstrcomboBox_8_currentIndexChanged(0);
    on_InstrcomboBox_9_currentIndexChanged(0);
    it[0] = ui->InstrcomboBox_0;
    it[1] = ui->InstrcomboBox_1;
    it[2] = ui->InstrcomboBox_2;
    it[3] = ui->InstrcomboBox_3;
    it[4] = ui->InstrcomboBox_4;
    it[5] = ui->InstrcomboBox_5;
    it[6] = ui->InstrcomboBox_6;
    it[7] = ui->InstrcomboBox_7;
    it[8] = ui->InstrcomboBox_8;
    it[9] = ui->InstrcomboBox_9;
    dest[0] = ui->destcomboBox_0;
    dest[1] = ui->destcomboBox_1;
    dest[2] = ui->destcomboBox_2;
    dest[3] = ui->destcomboBox_3;
    dest[4] = ui->destcomboBox_4;
    dest[5] = ui->destcomboBox_5;
    dest[6] = ui->destcomboBox_6;
    dest[7] = ui->destcomboBox_7;
    dest[8] = ui->destcomboBox_8;
    dest[9] = ui->destcomboBox_9;
    s1[0] = ui->source1comboBox_0;
    s1[1] = ui->source1comboBox_1;
    s1[2] = ui->source1comboBox_2;
    s1[3] = ui->source1comboBox_3;
    s1[4] = ui->source1comboBox_4;
    s1[5] = ui->source1comboBox_5;
    s1[6] = ui->source1comboBox_6;
    s1[7] = ui->source1comboBox_7;
    s1[8] = ui->source1comboBox_8;
    s1[9] = ui->source1comboBox_9;
    s2[0] = ui->source2comboBox_0;
    s2[1] = ui->source2comboBox_1;
    s2[2] = ui->source2comboBox_2;
    s2[3] = ui->source2comboBox_3;
    s2[4] = ui->source2comboBox_4;
    s2[5] = ui->source2comboBox_5;
    s2[6] = ui->source2comboBox_6;
    s2[7] = ui->source2comboBox_7;
    s2[8] = ui->source2comboBox_8;
    s2[9] = ui->source2comboBox_9;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_InstrcomboBox_0_currentIndexChanged(int index)
{
    if(index)
    {
        ui->destcomboBox_0->clear();
        ui->destcomboBox_0->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        if(index == 1)
        {
            ui->source1comboBox_0->clear();
            ui->source1comboBox_0->addItems({"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"});
            ui->source2comboBox_0->clear();
            ui->source2comboBox_0->addItems({"R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "R8", "R9", "R10", "R11", "R12", "R13", "R14", "R15", "R16", "R17", "R18", "R19", "R20", "R21", "R22", "R23", "R24", "R25", "R26", "R27", "R28", "R29", "R30", "R31"});
        }
        else
        {
            ui->source1comboBox_0->clear();
            ui->source1comboBox_0->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
            ui->source2comboBox_0->clear();
            ui->source2comboBox_0->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        }
    }
    else
    {
        ui->destcomboBox_0->clear();
        ui->destcomboBox_0->addItems({"Null"});
        ui->source1comboBox_0->clear();
        ui->source1comboBox_0->addItems({"Null"});
        ui->source2comboBox_0->clear();
        ui->source2comboBox_0->addItems({"Null"});
    }
}

void MainWindow::on_InstrcomboBox_1_currentIndexChanged(int index)
{
    if(index)
    {
        ui->destcomboBox_1->clear();
        ui->destcomboBox_1->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        if(index == 1)
        {
            ui->source1comboBox_1->clear();
            ui->source1comboBox_1->addItems({"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"});
            ui->source2comboBox_1->clear();
            ui->source2comboBox_1->addItems({"R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "R8", "R9", "R10", "R11", "R12", "R13", "R14", "R15", "R16", "R17", "R18", "R19", "R20", "R21", "R22", "R23", "R24", "R25", "R26", "R27", "R28", "R29", "R30", "R31"});
        }
        else
        {
            ui->source1comboBox_1->clear();
            ui->source1comboBox_1->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
            ui->source2comboBox_1->clear();
            ui->source2comboBox_1->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        }
    }
    else
    {
        ui->destcomboBox_1->clear();
        ui->destcomboBox_1->addItems({"Null"});
        ui->source1comboBox_1->clear();
        ui->source1comboBox_1->addItems({"Null"});
        ui->source2comboBox_1->clear();
        ui->source2comboBox_1->addItems({"Null"});
    }
}

void MainWindow::on_InstrcomboBox_2_currentIndexChanged(int index)
{
    if(index)
    {
        ui->destcomboBox_2->clear();
        ui->destcomboBox_2->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        if(index == 1)
        {
            ui->source1comboBox_2->clear();
            ui->source1comboBox_2->addItems({"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"});
            ui->source2comboBox_2->clear();
            ui->source2comboBox_2->addItems({"R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "R8", "R9", "R10", "R11", "R12", "R13", "R14", "R15", "R16", "R17", "R18", "R19", "R20", "R21", "R22", "R23", "R24", "R25", "R26", "R27", "R28", "R29", "R30", "R31"});
        }
        else
        {
            ui->source1comboBox_2->clear();
            ui->source1comboBox_2->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
            ui->source2comboBox_2->clear();
            ui->source2comboBox_2->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        }
    }
    else
    {
        ui->destcomboBox_2->clear();
        ui->destcomboBox_2->addItems({"Null"});
        ui->source1comboBox_2->clear();
        ui->source1comboBox_2->addItems({"Null"});
        ui->source2comboBox_2->clear();
        ui->source2comboBox_2->addItems({"Null"});
    }
}

void MainWindow::on_InstrcomboBox_3_currentIndexChanged(int index)
{
    if(index)
    {
        ui->destcomboBox_3->clear();
        ui->destcomboBox_3->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        if(index == 1)
        {
            ui->source1comboBox_3->clear();
            ui->source1comboBox_3->addItems({"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"});
            ui->source2comboBox_3->clear();
            ui->source2comboBox_3->addItems({"R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "R8", "R9", "R10", "R11", "R12", "R13", "R14", "R15", "R16", "R17", "R18", "R19", "R20", "R21", "R22", "R23", "R24", "R25", "R26", "R27", "R28", "R29", "R30", "R31"});
        }
        else
        {
            ui->source1comboBox_3->clear();
            ui->source1comboBox_3->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
            ui->source2comboBox_3->clear();
            ui->source2comboBox_3->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        }
    }
    else
    {
        ui->destcomboBox_3->clear();
        ui->destcomboBox_3->addItems({"Null"});
        ui->source1comboBox_3->clear();
        ui->source1comboBox_3->addItems({"Null"});
        ui->source2comboBox_3->clear();
        ui->source2comboBox_3->addItems({"Null"});
    }
}

void MainWindow::on_InstrcomboBox_4_currentIndexChanged(int index)
{
    if(index)
    {
        ui->destcomboBox_4->clear();
        ui->destcomboBox_4->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        if(index == 1)
        {
            ui->source1comboBox_4->clear();
            ui->source1comboBox_4->addItems({"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"});
            ui->source2comboBox_4->clear();
            ui->source2comboBox_4->addItems({"R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "R8", "R9", "R10", "R11", "R12", "R13", "R14", "R15", "R16", "R17", "R18", "R19", "R20", "R21", "R22", "R23", "R24", "R25", "R26", "R27", "R28", "R29", "R30", "R31"});
        }
        else
        {
            ui->source1comboBox_4->clear();
            ui->source1comboBox_4->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
            ui->source2comboBox_4->clear();
            ui->source2comboBox_4->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        }
    }
    else
    {
        ui->destcomboBox_4->clear();
        ui->destcomboBox_4->addItems({"Null"});
        ui->source1comboBox_4->clear();
        ui->source1comboBox_4->addItems({"Null"});
        ui->source2comboBox_4->clear();
        ui->source2comboBox_4->addItems({"Null"});
    }
}

void MainWindow::on_InstrcomboBox_5_currentIndexChanged(int index)
{
    if(index)
    {
        ui->destcomboBox_5->clear();
        ui->destcomboBox_5->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        if(index == 1)
        {
            ui->source1comboBox_5->clear();
            ui->source1comboBox_5->addItems({"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"});
            ui->source2comboBox_5->clear();
            ui->source2comboBox_5->addItems({"R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "R8", "R9", "R10", "R11", "R12", "R13", "R14", "R15", "R16", "R17", "R18", "R19", "R20", "R21", "R22", "R23", "R24", "R25", "R26", "R27", "R28", "R29", "R30", "R31"});
        }
        else
        {
            ui->source1comboBox_5->clear();
            ui->source1comboBox_5->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
            ui->source2comboBox_5->clear();
            ui->source2comboBox_5->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        }
    }
    else
    {
        ui->destcomboBox_5->clear();
        ui->destcomboBox_5->addItems({"Null"});
        ui->source1comboBox_5->clear();
        ui->source1comboBox_5->addItems({"Null"});
        ui->source2comboBox_5->clear();
        ui->source2comboBox_5->addItems({"Null"});
    }
}

void MainWindow::on_InstrcomboBox_6_currentIndexChanged(int index)
{
    if(index)
    {
        ui->destcomboBox_6->clear();
        ui->destcomboBox_6->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        if(index == 1)
        {
            ui->source1comboBox_6->clear();
            ui->source1comboBox_6->addItems({"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"});
            ui->source2comboBox_6->clear();
            ui->source2comboBox_6->addItems({"R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "R8", "R9", "R10", "R11", "R12", "R13", "R14", "R15", "R16", "R17", "R18", "R19", "R20", "R21", "R22", "R23", "R24", "R25", "R26", "R27", "R28", "R29", "R30", "R31"});
        }
        else
        {
            ui->source1comboBox_6->clear();
            ui->source1comboBox_6->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
            ui->source2comboBox_6->clear();
            ui->source2comboBox_6->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        }
    }
    else
    {
        ui->destcomboBox_6->clear();
        ui->destcomboBox_6->addItems({"Null"});
        ui->source1comboBox_6->clear();
        ui->source1comboBox_6->addItems({"Null"});
        ui->source2comboBox_6->clear();
        ui->source2comboBox_6->addItems({"Null"});
    }
}

void MainWindow::on_InstrcomboBox_7_currentIndexChanged(int index)
{
    if(index)
    {
        ui->destcomboBox_7->clear();
        ui->destcomboBox_7->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        if(index == 1)
        {
            ui->source1comboBox_7->clear();
            ui->source1comboBox_7->addItems({"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"});
            ui->source2comboBox_7->clear();
            ui->source2comboBox_7->addItems({"R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "R8", "R9", "R10", "R11", "R12", "R13", "R14", "R15", "R16", "R17", "R18", "R19", "R20", "R21", "R22", "R23", "R24", "R25", "R26", "R27", "R28", "R29", "R30", "R31"});
        }
        else
        {
            ui->source1comboBox_7->clear();
            ui->source1comboBox_7->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
            ui->source2comboBox_7->clear();
            ui->source2comboBox_7->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        }
    }
    else
    {
        ui->destcomboBox_7->clear();
        ui->destcomboBox_7->addItems({"Null"});
        ui->source1comboBox_7->clear();
        ui->source1comboBox_7->addItems({"Null"});
        ui->source2comboBox_7->clear();
        ui->source2comboBox_7->addItems({"Null"});
    }
}

void MainWindow::on_InstrcomboBox_8_currentIndexChanged(int index)
{
    if(index)
    {
        ui->destcomboBox_8->clear();
        ui->destcomboBox_8->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        if(index == 1)
        {
            ui->source1comboBox_8->clear();
            ui->source1comboBox_8->addItems({"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"});
            ui->source2comboBox_8->clear();
            ui->source2comboBox_8->addItems({"R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "R8", "R9", "R10", "R11", "R12", "R13", "R14", "R15", "R16", "R17", "R18", "R19", "R20", "R21", "R22", "R23", "R24", "R25", "R26", "R27", "R28", "R29", "R30", "R31"});
        }
        else
        {
            ui->source1comboBox_8->clear();
            ui->source1comboBox_8->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
            ui->source2comboBox_8->clear();
            ui->source2comboBox_8->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        }
    }
    else
    {
        ui->destcomboBox_8->clear();
        ui->destcomboBox_8->addItems({"Null"});
        ui->source1comboBox_8->clear();
        ui->source1comboBox_8->addItems({"Null"});
        ui->source2comboBox_8->clear();
        ui->source2comboBox_8->addItems({"Null"});
    }
}

void MainWindow::on_InstrcomboBox_9_currentIndexChanged(int index)
{
    if(index)
    {
        ui->destcomboBox_9->clear();
        ui->destcomboBox_9->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        if(index == 1)
        {
            ui->source1comboBox_9->clear();
            ui->source1comboBox_9->addItems({"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"});
            ui->source2comboBox_9->clear();
            ui->source2comboBox_9->addItems({"R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "R8", "R9", "R10", "R11", "R12", "R13", "R14", "R15", "R16", "R17", "R18", "R19", "R20", "R21", "R22", "R23", "R24", "R25", "R26", "R27", "R28", "R29", "R30", "R31"});
        }
        else
        {
            ui->source1comboBox_9->clear();
            ui->source1comboBox_9->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
            ui->source2comboBox_9->clear();
            ui->source2comboBox_9->addItems({"F0", "F2", "F4", "F6", "F8", "F10", "F12", "F14", "F16", "F18", "F20", "F22", "F24", "F26", "F28", "F30"});
        }
    }
    else
    {
        ui->destcomboBox_9->clear();
        ui->destcomboBox_9->addItems({"Null"});
        ui->source1comboBox_9->clear();
        ui->source1comboBox_9->addItems({"Null"});
        ui->source2comboBox_9->clear();
        ui->source2comboBox_9->addItems({"Null"});
    }
}

void MainWindow::on_StartpushButton_clicked()
{

    Instruction ins[10];
    for(int i = 0; i < 10; ++i)
    {
        ins[i].itype = (InstrType) it[i]->currentIndex();
        ins[i].issue = -1;
        ins[i].executestart = -1;
        ins[i].executefinish = -1;
        ins[i].writeresult = -1;
        ins[i].RSindex = -1;
        if(ins[i].itype == InstrType::nop)
        {
            ins[i].dest = -1;
            ins[i].source1 = -1;
            ins[i].source2 = -1;
            ins[i].addr = "";
        }
        else
        {
            ins[i].dest = dest[i]->currentIndex();
            if(ins[i].itype == InstrType::ldd)
            {
                ins[i].addr = QString::asprintf("R[%d],%d", s2[i]->currentIndex(), s1[i]->currentIndex());
                ins[i].source1 = -1;
                ins[i].source2 = -1;
            }
            else
            {
                ins[i].addr = "";
                ins[i].source1 = s1[i]->currentIndex();
                ins[i].source2 = s2[i]->currentIndex();
            }
        }
    }

    tom = new tomasulo(ins);
    tom->loadtime = ui->LoadTimespinBox->value();
    tom->addsubtime = ui->AddSubTimespinBox->value();
    tom->multtime = ui->MultTimespinBox->value();
    tom->divtime = ui->DivTimespinBox->value();
    //showTom();
    if(ui->checkBox->isChecked())
    {
        totalnum = tom->instr_num * ui->TimeslineEdit->text().toInt();
        insnum = tom->instr_num;
        nextins = tom->instr_num;
        for(int i = 0; i < insnum; ++i)
            insarray[i] = tom->ins[i];
        cyclectrl();
    }

    showTom();
}
void MainWindow::cyclectrl()
{
    for(int i = 0; i < tom->instr_num; ++i)
        if(tom->ins[i].writeresult > 0)
        {
            for(int j = i + 1; j < tom->instr_num; ++j)
                tom->ins[j - 1] = tom->ins[j];
            tom->ins[tom->instr_num-1].itype = InstrType::nop;
            tom->ins[tom->instr_num-1].addr = "";
            tom->ins[tom->instr_num-1].dest = -1;
            tom->ins[tom->instr_num-1].executefinish = -1;
            tom->ins[tom->instr_num-1].executestart = -1;
            tom->ins[tom->instr_num-1].issue = -1;
            tom->ins[tom->instr_num-1].RSindex = -1;
            tom->ins[tom->instr_num-1].source1 = -1;
            tom->ins[tom->instr_num-1].source2 = -1;
            tom->ins[tom->instr_num-1].writeresult = -1;
            tom->instr_num--;
        }
    for(int i = tom->instr_num; i < 10; ++i)
    {
        if(nextins < totalnum)
        {
            tom->ins[i] = insarray[nextins % insnum];
            tom->ins[i].executefinish = -1;
            tom->ins[i].executestart = -1;
            tom->ins[i].issue = -1;
            tom->ins[i].RSindex = -1;
            tom->ins[i].writeresult = -1;
            nextins++;
            tom->instr_num++;
        }
        else
            break;
    }
}

void MainWindow::showTom()
{
    QString s = "指令";
    const QString itypes[6] = {"NOP", "LDD.D", "ADD.D", "SUB.D", "MULT.D", "DIV.D"};
    const QString qqq[9] = {"", "Load1", "Load2", "Load3", "Add1", "Add2", "Add3", "Mult1", "Mult2"};
    for(int i = 0; i < tom->instr_num; ++i)
    {
        s = s + "\n" + itypes[tom->ins[i].itype] + "  ";
        if(tom->ins[i].itype == InstrType::ldd)
        {
            s = s + tom->ins[i].addr;
        }
        else
        {
            s = s + QString::asprintf("F%d, F%d,F%d",tom->ins[i].dest, tom->ins[i].source1, tom->ins[i].source2);
        }

    }
    ui->Instrlabel->setText(s);
    s = "流出";
    for(int i = 0; i < tom->instr_num; ++i)
    {
        s = s + "\n" + QString::number(tom->ins[i].issue);
    }
    ui->Issuelabel->setText(s);
    s = "开始执行";
    for(int i = 0; i < tom->instr_num; ++i)
    {
        s = s + "\n" + QString::number(tom->ins[i].executestart);
    }
    ui->ExeSlabel->setText(s);
    s = "执行结束";
    for(int i = 0; i < tom->instr_num; ++i)
    {
        s = s + "\n" + QString::number(tom->ins[i].executefinish);
    }
    ui->ExeFlabel->setText(s);
    s = "写结果";
    for(int i = 0; i < tom->instr_num; ++i)
    {
        s = s + "\n" + QString::number(tom->ins[i].writeresult);
    }
    ui->WresFlabel->setText(s);
    s = "寄存器号";
    for(int i = 0; i < 16; ++i)
    {
        s = s + "\nF" + QString::number(i*2);
    }
    ui->Freglabel->setText(s);
    s = "Qi";
    for(int i = 0; i < 16; ++i)
    {
        s = s + "\n" + qqq[tom->reg_status[i].qi+1];
    }
    ui->FregQilabel->setText(s);
    s = "值";
    for(int i = 0; i < 16; ++i)
    {
        s = s + "\n" + tom->reg_status[i].value;
    }
    ui->FregValuelabel->setText(s);
    ui->FregValuelabel->setToolTip(s);
    s = "Time";
    for(int i = 3; i < 8; ++i)
    {
        s = s + "\n" + QString::number(tom->rs[i].time);
    }
    ui->RSTimelabel->setText(s);
    s = "名称";
    for(int i = 3; i < 8; ++i)
    {
        s = s + "\n" + qqq[i+1];
    }
    ui->RSNamelabel->setText(s);
    s = "Busy";
    for(int i = 3; i < 8; ++i)
    {
        s = s + "\n" + (tom->rs[i].busy?"True":"False");
    }
    ui->RSBusylabel->setText(s);
    s = "Op";
    for(int i = 3; i < 8; ++i)
    {
        s = s + "\n" + itypes[tom->rs[i].op];
    }
    ui->RSOplabel->setText(s);
    s = "Vj";
    for(int i = 3; i < 8; ++i)
    {
        s = s + "\n" + tom->rs[i].vj;
    }
    ui->RSVjlabel->setText(s);
    ui->RSVjlabel->setToolTip(s);
    s = "Vk";
    for(int i = 3; i < 8; ++i)
    {
        s = s + "\n" + tom->rs[i].vk;
    }
    ui->RSVklabel->setText(s);
    ui->RSVklabel->setToolTip(s);

    s = "Qj";
    for(int i = 3; i < 8; ++i)
    {
        s = s + "\n" + qqq[tom->rs[i].qj+1];
    }
    ui->RSQjlabel->setText(s);
    s = "Qk";
    for(int i = 3; i < 8; ++i)
    {
        s = s + "\n" + qqq[tom->rs[i].qk+1];
    }
    ui->RSQklabel->setText(s);
    s = "名称";
    for(int i = 0; i < 3; ++i)
    {
        s = s + "\nLoad" + QString::number(i+1);
    }
    ui->LoadNamelabel->setText(s);
    s = "Busy";
    for(int i = 0; i < 3; ++i)
    {
        s = s + "\n" + (tom->rs[i].busy?"True":"False");
    }
    ui->LoadBusylabel->setText(s);
    s = "Addr";
    for(int i = 0; i < 3; ++i)
    {
        s = s + "\n" + tom->rs[i].vj;
    }
    ui->LoadAddrlabel->setText(s);
    s = "Value";
    for(int i = 0; i < 3; ++i)
    {
        s = s + "\n" + tom->rs[i].result;
    }
    ui->LoadValuelabel->setText(s);
}

void MainWindow::on_SteppushButton_clicked()
{
    tom->step1cycle();
    if(ui->checkBox->isChecked())
        cyclectrl();
    showTom();
}

void MainWindow::on_GopushButton_clicked()
{
    for(int i = 0; i < ui->StepslineEdit->text().toInt();++i)
    {
        tom->step1cycle();
        if(ui->checkBox->isChecked())
            cyclectrl();
    }
    showTom();
}
