

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "contactus.h"
#include "custguarantee.h"
#include <QMainWindow>
#include "orderWindow.h"
#include "productWindow.h"
#include <QString>
#include <QtSql>

/*
*  INPUT:
*
*   companyNameVar: Qstring variable used to store company name ->input by customer
*   address1Var: Qstring variable used to store company address (line1) -> input by customer
*   address2Var: Qstring variable used to store company address (line2) -> input by customer
*   PRreasonVar2: Qstring variable used to store customer interest level -> input by customer
*   PRreasonVar: int variable used to store the index of customer's choice -> input from user's selection in combo box.
*********************************************************************************/



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    ContactUs * contact;
    custGuarantee * guaran;
    ProductWindow * products;
    QString companyNameVar;
    QString address1Var;
    QString address2Var;
    QString interestVar;
    int PRreasonVar;
    QString PRreasonVar2;
    QSqlDatabase database;

    bool helpVisable;
    bool connectToCustomerList();
    void closeDatabase();

public slots:
    void adminLogin();
    
    void customerLogin();

    void logout();

    void viewProducts();

    void contacts();

    void viewGuarantee();

    void help();

    void requestPamphlet();

    void viewCustomerList();

    void populate();

    void addCustomer();

    void editCustomer();

    void deleteCustomer();

    void viewReviews();


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


    void on_RPMainRequestPamphletButton_clicked();

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

    void on_RPSubmitButton_clicked();


private slots:
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

    void on_opButton_clicked();

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

     void on_opReturnMainButton_clicked();
     void on_viewOrdersAdminButton_clicked();
     void on_ovCompanyNameCombo_currentIndexChanged();
     void on_ovReturnButton_clicked();
};

#endif // MAINWINDOW_H
