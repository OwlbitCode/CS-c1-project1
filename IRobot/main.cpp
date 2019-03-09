#include "mainwindow.h"
#include "tableeditor.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //TableEditor editor("person");
    //editor.show();


    return a.exec();
}
