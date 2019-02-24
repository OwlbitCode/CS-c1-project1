/******************************************************************************************************
 * Project #1 : iRobotstoDetectBombs
 * Description: The mainwindow.h for the iRobot customer guarantee widget.
 * Programmer: Camille
 * ****************************************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include <QString>
#include <iostream>
#include <iomanip>
using namespace std;




namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_contactUs_clicked();

    void on_main_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
