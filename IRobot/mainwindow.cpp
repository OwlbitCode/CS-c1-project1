#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::adminLogin(){
   ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::customerLogin(){
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::logout(){
    ui->stackedWidget->setCurrentIndex(0);
}
