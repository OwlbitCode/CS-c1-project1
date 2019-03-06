

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "contactus.h"
#include "custguarantee.h"
#include <QMainWindow>
#include "orderWindow.h"
#include "productWindow.h"
#include <QString>



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

    bool helpVisable;
    
public slots:
    void adminLogin();
    
    void customerLogin();

    void logout();

    void viewProducts();

    void contacts();

    void viewGuarantee();

    void help();

    void requestPamphlet();

    //void on_RPreturnMainButton_clicked();
    //void on_MainRequestPamphletButton_clicked();
    //void on_RPSubmitButton_clicked();

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
    //void on_MainRequestPamphletButton_clicked();
    void on_RPMainRequestPamphletButton_clicked();
    void on_RPSubmitButton_clicked();
};

#endif // MAINWINDOW_H
