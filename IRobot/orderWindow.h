/****************************************************************************
 * Project #1  : iRobotstoDetectBombs
 * Description : The orderWindow.h for the iRbobot order dialog window.
 * Programmer  : Juli and Camille
 ***************************************************************************/

#ifndef ORDERWINDOW_H
#define ORDERWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <QDebug>

namespace Ui {
class OrderWindow;
}

/****************************************************************************
 * OrderWindow Class
 *      A QDialog type class used to create the OrderWindow.  The order
 *      window has 4 sections of display:
 *      1. The three iRobot pictures, names, prices, comboboxes for plan
 *         option prices, quantity spinboxes, and subtotal for each iRobot.
 *      2. The price breakdown including subtotal, shipping & handling
 *         charges, tax amount, and total price for the order.
 *      3. Billing and shipping address
 *      4. Credit card information
 *
 *      A purchase button becomes active when at least one iRobot is ordered.
 *      When the purchase button is clicked, a confirmation messagebox is
 *      opened.  Closing the confirmation box also closes the OrderWindow
 *      and returns active control to the ProductWindow.  When the cancel
 *      button is clicked, active control is returned to the ProductWindow.
 *
 *      PRE-CONDITONS
 *      The following constant variables must be declared and initialized
 *      in the productWindow.h.
 *          ROBOT_A_NAME  : name of robot A
 *          ROBOT_A_PRICE : price of robot A
 *          ROBOT_B_NAME  : name of robot B
 *          ROBOT_B_PRICE : price of robot B
 *          ROBOT_C_NAME  : name of robot C
 *          ROBOT_C_PRICE : price of robot C
 *          PLAN_A_NAME   : name of maintenance plan A
 *          PLAN_A_PRICE  : price of maintenance plan A
 *          PLAN_B_NAME   : name of maintenance plan B
 *          PLAN_B_PRICE  : price of maintenance plan B
 *          PLAN_C_NAME   : name of maintenance plan C
 *          PLAN_C_PRICE  : price of maintenance plan C
 *          TAX_RATE      : sales tax rate (example: 0.075)
 ***************************************************************************/
class OrderWindow : public QDialog
{
    Q_OBJECT

public:
    //! Constructor
    explicit OrderWindow(QWidget *parent = nullptr);
    //! Destructor
    ~OrderWindow();

    //! Sets and displays the subtotal for Robot A
    /*! robotASubtotal = robotAQty * (ROBOT_A_PRICE + (plan price)); */
    /*! Purchase button enabled if any robot qty > 0 */
    void setRobotASubtotal();
    //! Sets and displays the subtotal for Robot B
    /*! robotBSubtotal = robotBQty * (ROBOT_B_PRICE + (plan price)); */
    /*! Purchase button enabled if any robot qty > 0 */
    void setRobotBSubtotal();
    //! Sets and displays the subtotal for Robot C
    /*! robotCSubtotal = robotCQty * (ROBOT_C_PRICE + (plan price)); */
    /*! Purchase button enabled if any robot qty > 0 */
    void setRobotCSubtotal();

    //! Sets and displays updated subtotal
    /*! subtotal = robotASubtotal + robotBSubtotal + robotCSubtotal; */
    void setOrderSubtotal();
    //! Sets the order shipping & handling charge displayed or hidden
    /*! If subtotal > 0, display shipping & handling flat rate charge */
    /*! else, hide shipping & handling flat rate charge */
    void setOrderShipping();
    //! Sets and displays updated sales tax amount
    /*! salesTax = ((subtotal + SHIPPING)*TAX_RATE); */
    void setOrderSalesTax();
    //! Sets and displays updated total price for order
    /*! totalPrice = subtotal + SHIPPING + salesTax; */
    void setOrderTotalPrice();

private slots:
    //! Opens order confirmation messagebox
    void on_placeOrderButton_clicked();
    //! Closes OrderWindow and returns control to ProductWindow
    void on_cancelButton_clicked();

    //! Update robot A's qty and subtotal when value changes
    /*! POST: robotAQty = qty; */
    /*! POST: setRobotASubtotal(); */
    void on_robotASpinBox_valueChanged(int qty);
    //! Update robot A's plan index value and subtotal when value changes
    /*! POST: robotAPlan = index; */
    /*! POST: setRobotASubtotal(); */
    void on_robotAComboBox_currentIndexChanged(int index);

    //! Update robot B's qty and subtotal when value changes
    /*! POST: robotBQty = qty; */
    /*! POST: setRobotBSubtotal(); */
    void on_robotBSpinBox_valueChanged(int qty);
    //! Update robot B's plan index value and subtotal when value changes
    /*! POST: robotBPlan = index; */
    /*! POST: setRobotBSubtotal(); */
    void on_robotBComboBox_currentIndexChanged(int index);

    //! Update robot C's qty and subtotal when value changes
    /*! POST: robotCQty = qty; */
    /*! POST: setRobotCSubtotal(); */
    void on_robotCSpinBox_valueChanged(int qty);
    //! Update robot C's plan index value and subtotal when value changes
    /*! POST: robotCPlan = index; */
    /*! POST: setRobotCSubtotal(); */
    void on_robotCComboBox_currentIndexChanged(int index);

    //! Update billing address line one (and shipping address if same)
    /*! POST: billingAddressOne = ui->billingAddressLineOne->text(); */
    void on_billingAddressLineOne_editingFinished();
    //! Update billing address line two (and shipping address if same)
    /*! POST: billingAddressTwo = ui->billingAddressLineTwo->text(); */
    void on_billingAddressLineTwo_editingFinished();

    //! Updates the shipping address labels whether the "Yes" or "No"
    //! checkBox is clicked.
    void on_yesCheckBox_toggled(bool checked);

    //! Saves index of credit card type
    /*! POST: ccType = index; */
    void on_creditCardTypeBox_currentIndexChanged(int index);
    //! Saves credit card number
    /*! POST: ccNumber = ui->creditCardNumberLine->text(); */
    void on_creditCardNumberLine_editingFinished();
    //! Saves credit card name
    /*! POST: ccName = ui->creditCardNameLine->text(); */
    void on_creditCardNameLine_editingFinished();
    //! Saves credit card expiration date month in mm format
    /*! POST: ccMonth from converted ui->dateMonthLine->text() */
    void on_dateMonthLine_editingFinished();
    //! Saves credit card expiration date year in yy format
    /*! POST: ccYear from converted ui->dateYearLine->text() */
    void on_dateYearLine_editingFinished();
    //! Saves credit card CVV
    /*! POST: ccCvv from converted cvvLine->text() */
    void on_cvvLine_editingFinished();

private:
    int    robotAQty;      // CALC&OUT - quantity of robot A
    int    robotAPlan;     // CALC&OUT - robot A's selected maintenance plan
    double robotASubtotal; // CALC&OUT - robot A's subtotal

    int    robotBQty;      // CALC&OUT - quantity of robot B
    int    robotBPlan;     // CALC&OUT - robot B's selected maintenance plan
    double robotBSubtotal; // CALC&OUT - robot B's subtotal

    int    robotCQty;      // CALC&OUT - quantity of robot C
    int    robotCPlan;     // CALC&OUT - robot C's selected maintenance plan
    double robotCSubtotal; // CALC&OUT - robot C's subtotal

    double subtotal;       // CALC&OUT - subtotal of all robots (A, B, and C)
    double salesTax;       // CALC&OUT - sales tax amount for order
    double totalPrice;     // CALC&OUT - total price for order

    QString billingAddressOne;  // IN&OUT - the billing address line one
    QString billingAddressTwo;  // IN&OUT - the billing address line two
    QString shippingAddressOne; // IN&OUT - the shipping address line one
    QString shippingAddressTwo; // IN&OUT - the shipping address line two
    int     ccType;             // IN&OUT - the credit card type
                                //          ("VISA" or "Mastercard")
    QString ccNumber;           // IN&OUT - the credit card number
    QString ccName;             // IN&OUT - the credit card name
    int     ccMonth;            // IN&OUT - the credit card expire month
    int     ccYear;             // IN&OUT - the credit card expire year
    int     ccCvv;              // IN&OUT - the credit card CVV number

    Ui::OrderWindow *ui;
};

#endif // ORDERWINDOW_H
