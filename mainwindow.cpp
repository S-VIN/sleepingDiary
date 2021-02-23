#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    QtCharts::QChartView *chartView = new  QtCharts::QChartView(sleepChart->createChart());
    chartView->setRenderHint(QPainter::Antialiasing);

    ui->verticalLayout_2->addWidget(chartView);



}

MainWindow::~MainWindow()
{
    delete ui;
    delete sleepChart;
}

