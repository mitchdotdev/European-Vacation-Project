#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDriver>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QVector>
#include <iostream>
#include <iomanip>

class dbmanager
{
public:
    dbmanager();

    QSqlQueryModel* DisplayInfo();

private:
    static dbmanager* db;
    QSqlDatabase database;
};

#endif // DBMANAGER_H
