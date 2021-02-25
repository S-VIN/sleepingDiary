#include "database.h"

Database::Database()
{

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
