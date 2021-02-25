#ifndef DATABASE_H
#define DATABASE_H

#include <QDate>
#include <QTime>
#include <map>

struct Sleep{
    QTime start = QTime(0,0);
    QTime end = QTime(0,0);
};


class Database
{
public:
    Database();
    Sleep getSleep(QDate date);
    void setSleep(QDate date, Sleep sleep);
    std:: vector<QDate> getDates();
private:
    std::map<QDate, Sleep> data;
};
#endif // DATABASE_H
