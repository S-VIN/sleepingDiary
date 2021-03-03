#include "database.h"

Database::Database()
{
        Sleep s1 = {{9,10},{12,10}};
        Sleep s2 = {{8,10},{13,10}};
        Sleep s3 = {{7,10},{14,10}};
        Sleep s4 = {{6,10},{15,10}};
        Sleep s5 = {{5,10},{16,10}};
        Sleep s6 = {{4,10},{17,10}};
        Sleep s7 = {{3,10},{18,10}};
        setSleep({1,1,2000},s1);
        setSleep({2,1,2000},s2);
        setSleep({3,1,2000},s3);
        setSleep({4,1,2000},s4);
        setSleep({5,1,2000},s5);
        setSleep({6,1,2000},s6);
        setSleep({7,1,2000},s7);
        settings.sleepNorm = 6;
}

Sleep Database::getSleep(QDate date)
{
    if(data.find(date) == data.end()){
        return Sleep();
    }
    return data[date];
}

void Database::setSleep(QDate date, Sleep sleep)
{
    data[date] = sleep;
}

std::vector<QDate> Database::getDates()
{
    std:: vector<QDate> result;
    for(auto item : data){
        result.push_back(item.first);
    }
    return result;
}


