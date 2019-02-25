#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contactus.h"
#include "custguarantee.h"
#include "productWindow.h"
#include <QWidget>
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


void MainWindow::adminLogin(){
   ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::customerLogin(){
    ui->stackedWidget->setCurrentIndex(1);
    ui->helpLabel1->hide();
    ui->helpLabel2->hide();
    ui->helpLabel3->hide();
    ui->helpLabel4->hide();
    ui->helpLabel5->hide();
    helpVisable = false;
}

void MainWindow::logout(){
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::viewProducts(){
    qDebug() << "view pressed";
    products = new ProductWindow;
    products->show();
}

void MainWindow::contacts(){
    contact = new ContactUs;
    contact->show();
}

void MainWindow::viewGuarantee(){
    guaran = new custGuarantee;
    guaran->show();

}

void MainWindow::help(){
    if(!helpVisable){
        ui->helpLabel1->show();
        ui->helpLabel2->show();
        ui->helpLabel3->show();
        ui->helpLabel4->show();
        ui->helpLabel5->show();
        helpVisable = true;
    }else{
        ui->helpLabel1->hide();
        ui->helpLabel2->hide();
        ui->helpLabel3->hide();
        ui->helpLabel4->hide();
        ui->helpLabel5->hide();
        helpVisable = false;
    }
}

