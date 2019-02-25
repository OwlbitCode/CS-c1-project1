

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "contactus.h"
#include "custguarantee.h"
#include <QMainWindow>
#include "orderWindow.h"
#include "productWindow.h"



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
    bool helpVisable;
    
public slots:
    void adminLogin();
    
    void customerLogin();

    void logout();

    void viewProducts();

    void contacts();

    void viewGuarantee();

    void help();

};

#endif // MAINWINDOW_H
