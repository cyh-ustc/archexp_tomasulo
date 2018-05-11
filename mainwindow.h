#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include "tomasulo.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_InstrcomboBox_0_currentIndexChanged(int index);

    void on_InstrcomboBox_1_currentIndexChanged(int index);

    void on_InstrcomboBox_2_currentIndexChanged(int index);

    void on_InstrcomboBox_3_currentIndexChanged(int index);

    void on_InstrcomboBox_4_currentIndexChanged(int index);

    void on_InstrcomboBox_5_currentIndexChanged(int index);

    void on_InstrcomboBox_6_currentIndexChanged(int index);

    void on_InstrcomboBox_7_currentIndexChanged(int index);

    void on_InstrcomboBox_8_currentIndexChanged(int index);

    void on_InstrcomboBox_9_currentIndexChanged(int index);

    void on_StartpushButton_clicked();

    void on_SteppushButton_clicked();

    void on_GopushButton_clicked();

private:
    Ui::MainWindow *ui;
    tomasulo *tom;
    QComboBox *it[10];
    QComboBox *dest[10];
    QComboBox *s1[10];
    QComboBox *s2[10];

    unsigned int totalnum;
    unsigned int insnum;
    unsigned int nextins;

    Instruction insarray[10];

    void cyclectrl();

    void showTom();
};

#endif // MAINWINDOW_H
