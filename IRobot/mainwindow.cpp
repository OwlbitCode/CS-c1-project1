#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contactus.h"
#include "custguarantee.h"
#include "productWindow.h"
#include <QWidget>
#include <QDebug>
#include <Qsql>

using namespace std;

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

//Added line edits to store company name, address line1, address line2, and level of interest.


void MainWindow::on_RPreturnMainButton_clicked()
{
       ui->stackedWidget->setCurrentIndex(0);

}

void MainWindow::on_MainRequestPamphletButton_clicked()
{
    ui->RPCompanyNamelineEdit->clear();
    ui->RPAddressOneLineEdit->clear();
    ui->RPAddressTwoLineEdit->clear();
    ui->RPInterestcomboBox->clear();

    //clear variables here too

    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_RPSubmitButton_clicked()
{


    companyNameVar= ui->RPCompanyNamelineEdit->text();
    qDebug() << "Testing companyNameVar value" << companyNameVar;

    address1Var= ui->RPAddressOneLineEdit->text();
    qDebug() << "Testing address1Var value" << address1Var;

    address2Var = ui->RPAddressTwoLineEdit->text();
    qDebug() << "Testing address2Var value" << address2Var;

    PRreasonVar = ui->RPInterestcomboBox->currentIndex();

    switch(PRreasonVar)
    {

        case 0: PRreasonVar2 = "";
        break;
        case 1: PRreasonVar2 = "very interested";
        break;
        case 2: PRreasonVar2 = "somewhat interested";
        break;
        case 3: PRreasonVar2 =  "not interested";
        break;
        case 4: PRreasonVar2 = "never call again";
        break;

    }

        qDebug() << "Testing customer interest choice" << PRreasonVar2;


    if (companyNameVar == "" || address1Var == "" || address2Var == "" || PRreasonVar2 == "")
    {
        QMessageBox::information(this, "Empty Fields","Please enter all fields!",QMessageBox::Ok);
    }

    else
    {

       //need to store into the data base

       ui->RPCompanyNamelineEdit->clear();
       ui->RPAddressOneLineEdit->clear();
       ui->RPAddressTwoLineEdit->clear();
       ui->RPInterestcomboBox->clear();

       //clear variables before exiting

       ui->stackedWidget->setCurrentIndex(0);
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
