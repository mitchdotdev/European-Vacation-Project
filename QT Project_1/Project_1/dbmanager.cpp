#include "dbmanager.h"

dbmanager::dbmanager()
{
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("D:/Project 1/Project_1/TheDB.db");
    if(!database.open())
    {
         qDebug() << "WE ARE NOT CONNECTED!";
    }
    else
    {

        qDebug() << "WE ARE CONNECTED!";
    }
}


QSqlQueryModel* dbmanager::DisplayInfo()
{
    QSqlQueryModel* model = new QSqlQueryModel;
        model->setQuery("Select *  FROM Menu");
        return model;
}
