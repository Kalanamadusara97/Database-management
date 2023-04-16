#include "mainwindow.h"

#include <QApplication>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "QLineEdit"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
       db.setHostName("bigblue");
       db.setDatabaseName("flightdb");
       db.setUserName("acarlson");
       db.setPassword("1uTbSbAs");
       bool ok = db.open();

    if (!db.open()) {
        qDebug() << "Could not open connection to database";
    }

    QSqlQuery query;
    query.exec("CREATE TABLE employeedetails (EmployeeID VARCHAR(10), EmployeeNAme VARCHAR(50),Age int(5), Qualifications VARCHAR(1000,ContactNo int(11)))");


    return a.exec();
}
