

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

private slots:

    void on_RPreturnMainButton_clicked();
    void on_MainRequestPamphletButton_clicked();
    void on_RPSubmitButton_clicked();
};

#endif // MAINWINDOW_H
