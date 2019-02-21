#ifndef PRODUCTWINDOW_H
#define PRODUCTWINDOW_H

#include <QWidget>
#include <QString>

namespace Ui {
class Widget;
}

// Constant Variables
const QString robotAName = "GO-4";
const double robotAPrice = 999.99;
const QString robotBName = "Wall-E";
const double robotBPrice = 1499.99;
const QString robotCName = "Eve";
const double robotCPrice = 1999.99;

const QString planAName  = "Basic Plan";
const double planAPrice  = 0.00;
const QString planBName  = "Basic Plus Plan";
const double planBPrice  = 100.00;
const QString planCName  = "Premium Plan";
const double planCPrice  = 150.00;

const double taxRate = 0.075;

class ProductWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ProductWindow(QWidget *parent = nullptr);
    ~ProductWindow();

    double getRobotAPrice() const;
    double getPlanAPrice() const;
    double getRobotBPrice() const;
    double getPlanBPrice() const;
    double getRobotCPrice() const;
    double getPlanCPrice() const;

private slots:
    void on_robotAPushButton_clicked();

    void on_robotBPushButton_clicked();

    void on_robotCPushButton_clicked();

private:    
    Ui::Widget *ui;
};

#endif // PRODUCTWINDOW_H
