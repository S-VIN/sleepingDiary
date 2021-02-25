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


    QBarSet *set = new QBarSet("");
    QBarSeries *series = new QBarSeries();
    series->append(set);
    chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);
    *set << 1 << 2 << 3 << 4 << 5 << 6;


    QStringList categories;
    auto temp = database.getDates();
    for(QDate date : temp){
        std:: cout << date.toString().toStdString() << ' ';
        categories << date.toString();
    }




    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);


    chart->legend()->hide();

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0,15);

    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
}

QChart* SleepChart::createChart(){
    return chart;
}
