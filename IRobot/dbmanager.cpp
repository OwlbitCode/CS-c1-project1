#include "dbmanager.h"

DbManager::DbManager()
{
    database = QSqlDatabase::addDatabase("SQLITE");
    database.setDatabaseName("I_dont_know_what_our_database_is_called.db");

    If(!database.open()){
        qDebug() << ("panic");
    }
    else{
        qDebug() << ("Don't panic");
    }
}



DbManager* DbManager::getInstance(){

    if( instance == nullptr)
    {
        instance = new DbManager();
    }

    return instance;
}

DbManager::~DbManager(){
   database.close();
   database.removeDatabase(QSqlDatabase::defaultConnection);
}





