#include <QString>
#include <QSqlDatabase>
#ifndef DBMANAGER_H
#define DBMANAGER_H


class DbManager
{
public:
    DbManager* getInstance();
private:
    DbManager();
    static DbManager * instance;
    QSqlDatabase database;

public:
    QVector<QString> getCompanys();
    QVector<QString> getAddresses();
    QVector<QString> getInterestLevel();
    QVector<QString> getKey();
    ~DbManager();

};




#endif // DBMANAGER_H
