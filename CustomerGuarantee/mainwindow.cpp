#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contactus.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    qDebug() << "Return to Home clicked";
}

void MainWindow::on_pushButton_clicked()
{
    qDebug() << "Contact us button clicked";
    ContactUs * contact = new ContactUs; //allocate memory on the heap
    contact->show();
    //contact->raise();
    //contact->activateWindow();

}
