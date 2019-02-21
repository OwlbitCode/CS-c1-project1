#include "productWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProductWindow w;
    w.show();

    return a.exec();
}
