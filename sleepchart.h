#ifndef SLEEPCHART_H
#define SLEEPCHART_H

#include <QWidget>

#include <QtCharts>


#include "database.h"

class SleepChart {
public:
    explicit SleepChart(QWidget *parent = nullptr);
     QtCharts:: QChart* createChart();
     void addDataToWeekSet(QBarSet *set, double data);
     QStringList createDaysOfWeekCategories();
private:
     QtCharts:: QChart* chart = new QtCharts:: QChart;

signals:

};

#endif // SLEEPCHART_H
