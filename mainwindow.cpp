#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    std:: cout  << "setup";
    addSleepWindow = new AddSleepWindow;

    connect(addSleepWindow, &AddSleepWindow::sleepWindow, this, &MainWindow::show);


    QtCharts::QChartView *chartView = new  QtCharts::QChartView(sleepChart->createChart());
    chartView->setRenderHint(QPainter::Antialiasing);

    ui->verticalLayout_2->addWidget(chartView);



}

MainWindow::~MainWindow()
{
    delete ui;
    delete sleepChart;
    delete addSleepWindow;
}


void MainWindow::on_buttonAddSleep_clicked()
{
    addSleepWindow->show();
    this->close();      // Закрываем окно
}
