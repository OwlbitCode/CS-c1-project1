

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
    bool keySelected;

    bool helpVisable;
    bool connectToCustomerList();
    void closeDatabase();

public slots:

    void adminLogin();
    
    void customerLogin();

    void logout();

    void viewProducts();
    //!< Customer Window button to view Products Window
    /*!< Opens the Products Window (popup) */

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

    void alphaSort();

    void key();

    void breakEverything();

    void on_RPMainRequestPamphletButton_clicked();
    //!< Customer Window button to view Request Pamphlet Form
    /*!< Opens the Request Pamplet Form Window */

    void on_RPSubmitButton_clicked();
    //!< Request Pamphlet Form submit button action
    /*!< Saves request pamphlet inputs to variable members */

private slots:

    void on_opButton_clicked();
    //!< Customer Window button to view Concept of Operations Window
    /*!< Opens the Operations Window */

    void on_opReturnMainButton_clicked();
    //!< Concept of Operations Window button to Return to Customer Window
    /*!< Closes Concept of Operations and returns to Customer Window */

    void on_viewOrdersAdminButton_clicked();
    //!< Admin Window button to view Order Viewer Window
    /*!< Opens the Order Viewer Window */

    void on_ovCompanyNameCombo_currentIndexChanged();
    //!< Order Viewer Window Company Name combo box action
    /*!< Updates order information into text boxes ordered by company name */

    void on_ovSortByOrderIDButton_clicked();
    //!< Order Viewer Window sort by order id button action
    /*!< Sorts query table by order id (ascending order) */

    void on_ovSortByNameButton_clicked();
    //!< Order Viewer Window sort by name button action
    /*!< Sorts query table by name (ascending order) */

    void on_ovReturnButton_clicked();
    //!< Order Viewer Window button to Return to Admin Window
    /*!< Closes Order Viewer Window and returns to Admin Window */

    void on_ovOrderIDCombo_currentIndexChanged();
    //!< Order Viewer Window Order ID combo box action
    /*!< Updates order information into text boxes ordered by orderID */

};

#endif // MAINWINDOW_H
