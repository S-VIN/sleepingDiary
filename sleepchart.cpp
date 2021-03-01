#include "sleepchart.h"
#include <iostream>

SleepChart::SleepChart(QWidget *parent){
    Database database;



    QBarSet *set0 = new QBarSet("");
    *set0 << 6 << 2 << 3 << 4 << 5 << 6 << 1;

    QBarSeries *series = new QBarSeries();
    series->append(set0);



    chart->addSeries(series);
    chart->setTitle("Simple barchart example");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    //![3]

    //![4]
    QStringList categories;
    categories << "mon" << "tue" << "wen" << "thu" << "fri" << "sat" << "sun";
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0,15);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);



    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);
}



QChart* SleepChart::createChart(){
    return chart;
}
