/****************************************************************************
 * Project #1  : iRobotstoDetectBombs
 * Description : The main.cpp for the iRbobot product widget window,
 *               ordering dialog window, and confirmation message box.
 * Programmer  : Juli
 ***************************************************************************/

#include "productWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProductWindow w;
    w.show();

    return a.exec();
}
