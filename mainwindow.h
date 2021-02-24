#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "sleepchart.h"
#include "addsleepwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_buttonAddSleep_clicked();

private:
    Ui::MainWindow *ui;
    SleepChart *sleepChart = new SleepChart;
    AddSleepWindow *addSleepWindow;

};
#endif // MAINWINDOW_H
