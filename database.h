#ifndef DATABASE_H
#define DATABASE_H

#include <QDate>
#include <QTime>
#include <map>

struct Sleep{
public:
    QTime start;
    QTime end;
};


class Database
{
public:
    Database();
    struct Sleep getSleep(QDate date);
    void setSleep(QDate date, struct Sleep sleep);
    std:: vector<QDate> getDates();
private:
    std::map<QDate, struct Sleep> data;
};
#endif // DATABASE_H
