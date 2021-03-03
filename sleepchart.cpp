#include "sleepchart.h"
#include <iostream>

SleepChart::SleepChart(QWidget *parent){
    Database database;

    QBarSet *sleepSet = new QBarSet("");

    addDataToWeekSet(sleepSet, 6);
    addDataToWeekSet(sleepSet, 7);
    addDataToWeekSet(sleepSet, 2);
    addDataToWeekSet(sleepSet, 1);
    addDataToWeekSet(sleepSet, 8);
    addDataToWeekSet(sleepSet, 9);
    addDataToWeekSet(sleepSet, 12);

    QBarSeries *series = new QBarSeries();
    series->append(sleepSet);

    chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    categories << "mon" << "tue" << "wen" << "thu" << "fri" << "sat" << "sun";
    QBarCategoryAxis *axisX = new QBarCategoryAxis();


    QLineSeries *lineSeries = new QLineSeries();
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

QChart *SleepChart::createChart()
{
    return chart;
}

void SleepChart::addDataToWeekSet(QBarSet *set, double data)
{
    *set << data;
}

QStringList SleepChart::createDaysOfWeekCategories() {}
