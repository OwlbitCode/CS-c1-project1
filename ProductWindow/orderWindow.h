#ifndef ORDERWINDOW_H
#define ORDERWINDOW_H

#include <QDialog>

namespace Ui {
class OrderWindow;
}

class OrderWindow : public QDialog
{
    Q_OBJECT

public:
    explicit OrderWindow(QWidget *parent = nullptr);
    ~OrderWindow();

    void setRobotASubtotal();
    void setRobotBSubtotal();
    void setRobotCSubtotal();

    void setOrderSubtotal();
    void setOrderSalesTax();
    void setOrderTotalPrice();

private slots:

    void on_placeOrderButton_clicked();
    void on_cancelButton_clicked();

    void on_robotASpinBox_valueChanged(int aQty);
    void on_robotAComboBox_currentIndexChanged(int index);

private:
    int    robotAQty;
    int    robotAPlan;
    double robotASubtotal;

    int    robotBQty;
    int    robotBPlan;
    double robotBSubtotal;

    int    robotCQty;
    int    robotCPlan;
    double robotCSubtotal;

    double subtotal;
    double salesTax;
    double totalPrice;

    Ui::OrderWindow *ui;
};

#endif // ORDERWINDOW_H
