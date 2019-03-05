#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contactus.h"
#include "custguarantee.h"
#include "productWindow.h"
#include <QWidget>
#include <QDebug>
#include <QSql>

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
    ui->helpLabel6->hide();
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
        ui->helpLabel6->show();
        ui->pitchWindow->hide();
        helpVisable = true;
    }else{
        ui->helpLabel1->hide();
        ui->helpLabel2->hide();
        ui->helpLabel3->hide();
        ui->helpLabel4->hide();
        ui->helpLabel5->hide();
        ui->helpLabel6->hide();
        ui->pitchWindow->show();
        helpVisable = false;
    }
}

void MainWindow::request(){
    ui->stackedWidget->setCurrentIndex(4);
}

// Added Main Window Button for Concept of Operations - js
/****************************************************************************
 * METHOD - on_opButton_clicked
 * --------------------------------------------------------------------------
 * This method opens the operations (Concept of Operations) page from
 * the "Operations" button on the customer page.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 *      ==> Makes the operations window active.
 ***************************************************************************/
void MainWindow::on_opButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

// Added Return to Main Window Button on Concept of Operations Windows - js
/****************************************************************************
 * METHOD - on_opReturnMainButton_clicked
 * --------------------------------------------------------------------------
 * This method opens the customer page from the operations (Concept of
 * Operations) page "Return to Main Window" button.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 *      ==> Makes the customer window active.
 ***************************************************************************/
void MainWindow::on_opReturnMainButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
