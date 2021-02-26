#include "sleepchart.h"
#include <iostream>

QT_CHARTS_USE_NAMESPACE

SleepChart::SleepChart(QWidget *parent){
    Database database;

    Sleep a;
    a.start = QTime(0,0);
    a.end = QTime(1, 1);
    database.setSleep({1, 1, 2000}, a);
    database.setSleep({2, 1, 2000}, a);
    database.setSleep({3, 1, 2000}, a);
    database.setSleep({4, 1, 2000}, a);
    database.setSleep({5, 1, 2000}, a);
    database.setSleep({6, 1, 2000}, a);


    QBarSet *sleepDataArray = new QBarSet("");
    QStringList daysOfWeek;
    QBarSeries *series = new QBarSeries();
    QChart *chart = new QChart();
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    QValueAxis *axisY = new QValueAxis();
    QChartView *chartView = new QChartView(chart);

    series->append(sleepDataArray);

    *sleepDataArray << 1 << 2 << 3 << 4 << 5 << 6 << 1;
    daysOfWeek << "mon" << "tue" << "wen" << "thu" << "fri" << "sat" << "sun";


    QXYSeries *normalLine = new QXYSeries();



    //chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);



    chart->addSeries(normalLine);

    axisX->append(daysOfWeek);
    chart->addAxis(axisX, Qt::AlignBottom);



    axisY->setRange(0, 15);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);



    chart->legend()->hide();
    chartView->setRenderHint(QPainter::Antialiasing);
}

QChart* SleepChart::createChart(){
    return chart;
}
