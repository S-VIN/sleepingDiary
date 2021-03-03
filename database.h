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


struct Settings{
    double sleepNorm;
    int age;
    bool gender;
};

class Database
{
public:
    Database();
    struct Sleep getSleep(QDate date);
    void setSleep(QDate date, struct Sleep sleep);
    std:: vector<QDate> getDates();
    Settings settings;
private:
    std::map<QDate, struct Sleep> data;
};


#endif // DATABASE_H
