#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contactus.h"
#include "custguarantee.h"
#include "productWindow.h"
#include <QWidget>
#include <QDebug>
//#include <Qsql>

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
   if(database.open()){
       closeDatabase();
   }
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

void MainWindow::requestPamphlet(){
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::populate(){
    QString name = ui->comboBox->currentText();
    QString Company, address, key, interestLevel;

    QSqlQuery qry;

    qry.prepare("select * from customers where company='"+ name + "'");

    if(qry.exec())
    {
        while(qry.next())
        {
            ui->companyEdit->setText(qry.value(0).toString());
            ui->addressEdit->setText(qry.value(1).toString());
            ui->InterestEdit->setText(qry.value(2).toString());
            ui->keyEdit->setText(qry.value(3).toString());
        }
    }else{
        qDebug() << ("dun broke");
    }

}

void MainWindow::viewCustomerList(){
    ui->stackedWidget->setCurrentIndex(5);
    connectToCustomerList();

    if(!database.open())
    {
        ui->stackedWidget->setCurrentIndex(2);
        closeDatabase();

    }else{

        QSqlQueryModel * modal = new QSqlQueryModel();

        QSqlQuery * qry = new QSqlQuery(database);

        qry->prepare("select * from customers");

        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);

        qDebug() << (modal->rowCount());

        QSqlQueryModel * combo = new QSqlQueryModel();

        qry->prepare("select Company from customers");
        qry->exec();

        combo->setQuery(*qry);

        ui->comboBox->setModel(combo);

    }
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


// Added Return to Main Window Button on Request Pamphlet Window - cl
/****************************************************************************
 * METHOD - on_RPMainRequestPamphletButton_clicked
 * --------------------------------------------------------------------------
 * This method clears all customer input and opens the log in screen from
 * the Request Pamphlet page "Return to Main Window" button.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 *      ==> Makes the log in screen active.
 ***************************************************************************/


void MainWindow::on_RPMainRequestPamphletButton_clicked()

{
    ui->RPCompanyNamelineEdit->clear();
    ui->RPAddressOneLineEdit->clear();
    ui->RPAddressTwoLineEdit->clear();
    ui->RPInterestcomboBox->clear();

    ui->stackedWidget->setCurrentIndex(0);
}

// Added Submit Button on Request Pamphlet Window - cl
/****************************************************************************
 * METHOD - on_RPSubmitButton_clicked
 * --------------------------------------------------------------------------
 * This method stores customer input into variables to enter into database.
 * It then clears all customer input from line edits and opens the log in screen from
 * the Request Pamphlet page "Return to Main Window" button.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Stores customer input for company name, address1, address2 & interest level
 *          in variables to be used in the database.
 *      ==> Makes the log in screen active.
 ***************************************************************************/


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

       QMessageBox::information(this, "Thank you","Thanks for submitting. A representative will get back to you shortly!",QMessageBox::Ok);

       //clear variables before exiting

       ui->stackedWidget->setCurrentIndex(0);
    }
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

bool MainWindow::connectToCustomerList(){
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("customerList.db");

    if(!database.open()){
        qDebug() << ("panic");
        return false;
    }

    qDebug() << ("Don't panic");
    return true;
}

void MainWindow::closeDatabase(){
    database.close();
    database.removeDatabase(QSqlDatabase::defaultConnection);
    qDebug() << ("Closed");

}



