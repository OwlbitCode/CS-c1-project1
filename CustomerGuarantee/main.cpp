//#include "mainwindow.h"
#include <QApplication>
#include "custguarantee.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    custGuarantee c;
    c.show();
    //MainWindow w;
    //w.show();

    return a.exec();
}
