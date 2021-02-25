#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

#include "ui_mainwindow.h"

#include <QtWidgets/QApplication>

#include "sleepchart.h"

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

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    SleepChart *sleepChart = new SleepChart;

};
#endif // MAINWINDOW_H
