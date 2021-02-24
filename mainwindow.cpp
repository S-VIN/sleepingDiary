#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtWidgets/QApplication>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
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


void MainWindow::on_buttonAddSleep_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
