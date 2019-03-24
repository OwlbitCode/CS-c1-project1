#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contactus.h"
#include "custguarantee.h"
#include "productWindow.h"
#include <QWidget>
#include <QDebug>
//#include<QString>
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
    QString Company = ui->CompanyNameLine->text();
    connectToCustomerList();

    QSqlQuery * qry = new QSqlQuery(database);

    qry->prepare("select * from customers WHERE Company = '" + Company + "'" );
    qry->exec();
    if(!qry->first()){
        QMessageBox::information(this, "Error",
            "We cannot find your Company in List. Please request a Pamphlet",
            QMessageBox::Ok);
        closeDatabase();
        return;
    }
    cust = Company;
    ui->stackedWidget->setCurrentIndex(1);
    ui->helpLabel1->hide();
    ui->helpLabel2->hide();
    ui->helpLabel3->hide();
    ui->helpLabel4->hide();
    ui->helpLabel5->hide();
    ui->helpLabel6->hide();
    ui->helpLabel7->hide();
    helpVisable = false;
    qry->prepare("update customers set Recieved = 'yes' where Company = '" + Company+"'");
    closeDatabase();
}

void MainWindow::logout(){
    ui->stackedWidget->setCurrentIndex(0);
}

/****************************************************************************
 * METHOD - viewProducts
 * --------------------------------------------------------------------------
 * When the Products Window button is clicked from the customer window,
 * it opens the products window (a popup).
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
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
    keySelected=false;
    ui->keyButton->setText("Show Key");

    if(!database.open())
    {
        ui->stackedWidget->setCurrentIndex(2);
        closeDatabase();

    }else{

        alphaSort();

        QSqlQuery * qry = new QSqlQuery(database);

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
        ui->helpLabel7->show();
        ui->pitchWindow->hide();
        helpVisable = true;
    }else{
        ui->helpLabel1->hide();
        ui->helpLabel2->hide();
        ui->helpLabel3->hide();
        ui->helpLabel4->hide();
        ui->helpLabel5->hide();
        ui->helpLabel6->hide();
        ui->helpLabel7->hide();
        ui->pitchWindow->show();
        helpVisable = false;
    }
}

void MainWindow::editCustomer(){
    QString company, address, interest, key;
    company = ui->companyEdit->text();
    address = ui->addressEdit->text();
    interest = ui->InterestEdit->text();
    key = ui->keyEdit->text();

    QSqlQuery query;
    query.prepare("update customers set Company ='" + company +"', Address='"+address+
                "', Interest='" +interest+ "', Value='"+key+"' where Company = '" + company+"'");

    if(query.exec())
        qDebug()<<("updated");
    else
        qDebug()<<("Update failed check DB");

    alphaSort();

    QSqlQuery * qry = new QSqlQuery(database);

    QSqlQueryModel * combo = new QSqlQueryModel();

    qry->prepare("select Company from customers");
    qry->exec();

    combo->setQuery(*qry);

    ui->comboBox->setModel(combo);
}

void MainWindow::addCustomer(){
    QString company, address, interest, key;
    company = ui->companyEdit->text();
    address = ui->addressEdit->text();
    interest = ui->InterestEdit->text();
    key = ui->keyEdit->text();

    QSqlQuery query;
    query.prepare("insert into customers (Company,Address,Interest,Value) values ('"+company+"','"+address+"','"+interest+"','"+key+"')");
    if(query.exec())
        qDebug()<<("added");
    else
        qDebug()<<("add failed");

    alphaSort();

    QSqlQuery * qry = new QSqlQuery(database);

    QSqlQueryModel * combo = new QSqlQueryModel();

    qry->prepare("select Company from customers");
    qry->exec();

    combo->setQuery(*qry);

    ui->comboBox->setModel(combo);
}
void MainWindow::deleteCustomer(){
    QString company, address, interest, key;
    company = ui->companyEdit->text();
    address = ui->addressEdit->text();
    interest = ui->InterestEdit->text();
    key = ui->keyEdit->text();

    QSqlQuery query;
    query.prepare("Delete from customers where Company='"+company+"'");
    if(query.exec())
        qDebug()<<("delete");
    else
        qDebug()<<("delete failed");

    alphaSort();

    QSqlQuery * qry = new QSqlQuery(database);

    QSqlQueryModel * combo = new QSqlQueryModel();

    qry->prepare("select Company from customers");
    qry->exec();

    combo->setQuery(*qry);

    ui->comboBox->setModel(combo);
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
    //ui->RPInterestcomboBox->clear();
    ui->RPInterestcomboBox->setCurrentText(0);

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
    companyNameVar = ui->RPCompanyNamelineEdit->text();
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

    connectToCustomerList();
    QSqlQuery * qry = new QSqlQuery();
    qry->prepare("select * from customers WHERE Company = '" + companyNameVar + "'" );
    qry->exec();

    if(qry->first()){
        QMessageBox::information(this, "Error",
            "An account with that company name already exists",
            QMessageBox::Ok);
        closeDatabase();
        return;
    }
    QString address = address1Var + ", " + address2Var;

        qDebug() << "Testing customer interest choice" << PRreasonVar2;

    if (companyNameVar == "" || address1Var == "" || address2Var == "" || PRreasonVar2 == "")
    {
        QMessageBox::information(this, "Empty Fields","Please enter all fields!",QMessageBox::Ok);
    }

    else
    {
       //need to store into the data base
       qry->prepare("insert into customers (Company,Address,Interest) values ('"+companyNameVar+"','" + address + "' , '"+PRreasonVar2+"')");
       if(qry->exec())
            qDebug()<<("added");
       else
            qDebug()<<("add failed");
       qDebug()<< address;

       ui->RPCompanyNamelineEdit->clear();
       ui->RPAddressOneLineEdit->clear();
       ui->RPAddressTwoLineEdit->clear();
       //ui->RPInterestcomboBox->clear();
       ui->RPInterestcomboBox->setCurrentIndex(0);

       QMessageBox::information(this, "Thank you","Thanks for submitting. A representative will get back to you shortly!",QMessageBox::Ok);

       //clear variables before exiting

       ui->stackedWidget->setCurrentIndex(0);
    }
    closeDatabase();
}

void MainWindow::viewReviews(){
    ui->stackedWidget->setCurrentIndex(7);
}

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

/****************************************************************************
 * METHOD - on_viewOrdersAdminButton_clicked
 * --------------------------------------------------------------------------
 * When the view order button is clicked from the admin window, the table
 * showing the order id, company name, and total price of orders listed
 * in the sqlite database.  The right column shows more detailed information
 * about the order.  Admin can select a company name and then select an
 * order that the company placed for more detailed information on that order.
 * Admin can also sort table list by company name or order id.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void MainWindow::on_viewOrdersAdminButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    connectToCustomerList();

    if(!database.open())
    {
        ui->stackedWidget->setCurrentIndex(2);
        closeDatabase();
    }
    else
    {
        QSqlQueryModel * modal = new QSqlQueryModel();

        QSqlQuery * qry = new QSqlQuery(database);

        qry->prepare("SELECT orderID, companyName, totalPrice "
                     "FROM orders");

        qry->exec();
        modal->setQuery(*qry);
        ui->ovTable->setModel(modal);

        qDebug() << (modal->rowCount());

        // Set Table Column Width
        ui->ovTable->setColumnWidth(0,100);
        ui->ovTable->setColumnWidth(1,300);
        ui->ovTable->setColumnWidth(2,150);

        // Set Table Column Header Text
        modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Order ID"));
        modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Company Name"));
        modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Total Price"));

        QSqlQueryModel * combo = new QSqlQueryModel();

        qry->prepare("SELECT DISTINCT companyName "
                     "FROM orders ORDER BY companyName COLLATE NOCASE ASC");

        qry->exec();

        combo->setQuery(*qry);

        ui->ovCompanyNameCombo->setModel(combo);

        /************************************************************
         * PROCESSING - Update IDCombo box with orders for selected
         *              Company name
         ************************************************************/
        // Create new model for order ID Combo Box
        QSqlQueryModel * IDCombo = new QSqlQueryModel();

        // Get current company name selected in Company combo box
        QString name = (ui->ovCompanyNameCombo->currentText());
        qDebug() << "Name is: " << name;

        // Create new query for order ID Combo Box
        QSqlQuery IDQry;
        // Select all orderID for the Company name selected in the
        // Company combo box and put in ascending order
        IDQry.prepare("SELECT orderID "
                      "FROM orders "
                      "WHERE companyName='"+name+"' "
                      "ORDER BY orderID COLLATE NOCASE DESC");
        IDQry.exec();
        IDCombo->setQuery(IDQry);

        // Display all orders for Company name selected
        ui->ovOrderIDCombo->setModel(IDCombo);
    }
}

/****************************************************************************
 * METHOD - on_ovCompanyNameCombo_currentIndexChanged
 * --------------------------------------------------------------------------
 * This method updates order id information in a combo box below the
 * company name combo box when the index is changed (company name selection
 * changes).  Order id is listed in decending order showing newest orders
 * first.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void MainWindow::on_ovCompanyNameCombo_currentIndexChanged()
{
    QString name = ui->ovCompanyNameCombo->currentText();

    qDebug() << name;

    QString orderID, companyName, robotAQty, robotBQty,
            robotCQty, robotAPlan, robotBPlan, robotCPlan,
            robotASub, robotBSub, robotCSub, subtotal,
            shipping, salesTax, totalPrice;

    QSqlQuery qry;

    qry.prepare("select * from orders where companyName='"+ name + "'");

    if(qry.exec())
    {
        while(qry.next())
        {
            double salesTax, totalPrice;

            /************************************************************
             * PROCESSING - Update IDCombo box with orders for selected
             *              Company name
             ************************************************************/
            // Create new model for order ID Combo Box
            QSqlQueryModel * IDCombo = new QSqlQueryModel();

            // Get current company name selected in Company combo box
            QString name = (ui->ovCompanyNameCombo->currentText());
            qDebug() << "Name is: " << name;

            // Create new query for order ID Combo Box
            QSqlQuery IDQry;
            // Select all orderID for the Company name selected in the
            // Company combo box and put in ascending order
            IDQry.prepare("SELECT orderID "
                          "FROM orders "
                          "WHERE companyName='"+name+"' "
                          "ORDER BY orderID COLLATE NOCASE DESC");
            IDQry.exec();
            IDCombo->setQuery(IDQry);

            // Display all orders for Company name selected
            ui->ovOrderIDCombo->setModel(IDCombo);

            /************************************************************
             * PROCESSING - Update all text boxes with data from
             *              the order database for selected orderID
             ************************************************************/
            salesTax = qry.value(13).toDouble();
            totalPrice = qry.value(14).toDouble();

            ui->ovRobotAQty->setText(qry.value(2).toString());
            ui->ovRobotBQty->setText(qry.value(3).toString());
            ui->ovRobotCQty->setText(qry.value(4).toString());
            ui->ovRobotAPlan->setText(qry.value(5).toString());
            ui->ovRobotBPlan->setText(qry.value(6).toString());
            ui->ovRobotCPlan->setText(qry.value(7).toString());
            ui->ovRobotASub->setText(qry.value(8).toString());
            ui->ovRobotBSub->setText(qry.value(9).toString());
            ui->ovRobotCSub->setText(qry.value(10).toString());
            ui->ovSubtotal->setText(qry.value(11).toString());
            ui->ovShipping->setText(qry.value(12).toString());
           // ui->ovSalesTax->setText(qry.value(13).toString());
           // ui->ovTotalPrice->setText(qry.value(14).toString());
            ui->ovSalesTax->setText(QString::number(salesTax,'f',2));
            ui->ovTotalPrice->setText(QString::number(totalPrice,'f',2));
        }
    }else
    {
        qDebug() << ("dun broke");
    }
}

/****************************************************************************
 * METHOD - on_ovSortByOrderIDButton_clicked
 * --------------------------------------------------------------------------
 * This method sorts the table by order id in acscending order.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void MainWindow::on_ovSortByOrderIDButton_clicked()
{
    qDebug() << "Testing sort  by ID";

    QSqlQueryModel * modal = new QSqlQueryModel();

    QSqlQuery * qry = new QSqlQuery(database);

    qry->prepare("SELECT orderID, companyName, totalPrice "
                 "FROM orders ORDER BY orderID COLLATE NOCASE ASC");

    qry->exec();
    modal->setQuery(*qry);
    ui->ovTable->setModel(modal);

    qDebug() << (modal->rowCount());

    // Set Table Column Width
    ui->ovTable->setColumnWidth(0,100);
    ui->ovTable->setColumnWidth(1,300);
    ui->ovTable->setColumnWidth(2,150);

    // Set Table Column Header Text
    modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Order ID"));
    modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Company Name"));
    modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Total Price"));
}

/****************************************************************************
 * METHOD - on_ovSortByNameButton_clicked
 * --------------------------------------------------------------------------
 * This method sorts the table by company name in ascending order.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void MainWindow::on_ovSortByNameButton_clicked()
{
    qDebug() << "Testing sort";
    QSqlQueryModel * modal = new QSqlQueryModel();

    QSqlQuery * qry = new QSqlQuery(database);

    qry->prepare("SELECT orderID, companyName, totalPrice "
                 "FROM orders ORDER BY companyName COLLATE NOCASE ASC");

    qry->exec();
    modal->setQuery(*qry);
    ui->ovTable->setModel(modal);

    qDebug() << (modal->rowCount());

    // Set Table Column Width
    ui->ovTable->setColumnWidth(0,100);
    ui->ovTable->setColumnWidth(1,300);
    ui->ovTable->setColumnWidth(2,150);

    // Set Table Column Header Text
    modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Order ID"));
    modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Company Name"));
    modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Total Price"));
}

/****************************************************************************
 * METHOD - on_ovReturnButton_clicked
 * --------------------------------------------------------------------------
 * This method closes the order viewer window and takes admin back to the
 * admin window.  It closes the database.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void MainWindow::on_ovReturnButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

    if(database.open())
    {
        closeDatabase();
    }
}

/****************************************************************************
 * METHOD - on_ovOrderIDCombo_currentIndexChanged
 * --------------------------------------------------------------------------
 * This method updates the order detailed information on the right column
 * when the admin selects an order id.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void MainWindow::on_ovOrderIDCombo_currentIndexChanged()
{

    QString id = ui->ovOrderIDCombo->currentText();

    qDebug() << id;

    QString orderID, companyName, robotAQty, robotBQty,
            robotCQty, robotAPlan, robotBPlan, robotCPlan,
            robotASub, robotBSub, robotCSub, subtotal,
            shipping, salesTax, totalPrice;

    QSqlQuery qry;

    qry.prepare("select * from orders where orderID='"+ id + "'");

    if(qry.exec())
    {
        while(qry.next())
        {
            double salesTax, totalPrice;

            /************************************************************
             * PROCESSING - Update all text boxes with data from
             *              the order database for selected orderID
             ************************************************************/
            salesTax = qry.value(13).toDouble();
            totalPrice = qry.value(14).toDouble();

            ui->ovRobotAQty->setText(qry.value(2).toString());
            ui->ovRobotBQty->setText(qry.value(3).toString());
            ui->ovRobotCQty->setText(qry.value(4).toString());
            ui->ovRobotAPlan->setText(qry.value(5).toString());
            ui->ovRobotBPlan->setText(qry.value(6).toString());
            ui->ovRobotCPlan->setText(qry.value(7).toString());
            ui->ovRobotASub->setText(qry.value(8).toString());
            ui->ovRobotBSub->setText(qry.value(9).toString());
            ui->ovRobotCSub->setText(qry.value(10).toString());
            ui->ovSubtotal->setText(qry.value(11).toString());
            ui->ovShipping->setText(qry.value(12).toString());
           // ui->ovSalesTax->setText(qry.value(13).toString());
           // ui->ovTotalPrice->setText(qry.value(14).toString());
            ui->ovSalesTax->setText(QString::number(salesTax,'f',2));
            ui->ovTotalPrice->setText(QString::number(totalPrice,'f',2));
        }
    }
    else
    {
        qDebug() << ("dun broke");
    }

}

void MainWindow::alphaSort()
{

    QSqlQueryModel * modal = new QSqlQueryModel();

    QSqlQuery * qry = new QSqlQuery(database);

    if(!keySelected){
        qry->prepare("select * from customers ORDER BY Company ASC");
    }else{
        qry->prepare("select * from customers where Value = 'key' ORDER BY Company ASC");
    }
;
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    qDebug() << (modal->rowCount());
    ui->tableView->setColumnWidth(0,142);
    ui->tableView->setColumnWidth(1,267);
    ui->tableView->setColumnWidth(2,125);
    ui->tableView->setColumnWidth(3,65);
    ui->tableView->setColumnWidth(4, 65);

}

void MainWindow::key(){

    if(keySelected){
        keySelected=false;
        ui->keyButton->setText("Show Key");
    }else{
        keySelected=true;
        ui->keyButton->setText("Show All");
    }

    alphaSort();
}

void MainWindow::breakEverything(){
    this->close();
}
