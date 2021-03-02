#include "sleepchart.h"
#include <iostream>

SleepChart::SleepChart(QWidget *parent){
    Database database;

    QBarSet *set0 = new QBarSet("");
    *set0 << 6 << 2 << 3 << 4 << 5 << 6 << 1;

    QBarSeries *series = new QBarSeries();
    series->append(set0);

    chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    categories << "mon" << "tue" << "wen" << "thu" << "fri" << "sat" << "sun";

    QBarCategoryAxis *axisX = new QBarCategoryAxis();

    QLineSeries *lineSeries = new QLineSeries();
    lineSeries->setName("trend");
    lineSeries->append(QPoint(0, 8));
    lineSeries->append(QPoint(7, 8));

    chart->addSeries(lineSeries);

    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, 12);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    lineSeries->attachAxis(axisY);

    chart->legend()->setVisible(false);
    chart->legend()->setAlignment(Qt::AlignBottom);
}



QChart* SleepChart::createChart(){
    return chart;
}
