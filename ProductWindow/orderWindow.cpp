/****************************************************************************
 * Project #1  : iRobotstoDetectBombs
 * Description : The orderWindow.cpp for the iRbobot order dialog window.
 * Programmer  : Juli and Camille
 ***************************************************************************/

#include "orderWindow.h"
#include "ui_orderWindow.h"
#include "productWindow.h"

/****************************************************************************
 * METHOD - OrderWindow
 * --------------------------------------------------------------------------
 * This method is the CONSTRUCTOR used to display and set default values for
 * the OrderWindow dialog object.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
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
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 *      ==> Create an instance of the class object with default values.
 ***************************************************************************/
OrderWindow::OrderWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OrderWindow)
{
    ui->setupUi(this);

    /************************************************************
     * SET ROBOT A VARIABLES & DISPLAY
     ************************************************************/
    // Set robot A default values for variables
    robotAQty = 0;
    robotAPlan = 0;
    robotASubtotal = 0.0;

    ui->robotANameLabel->setText(ROBOT_A_NAME);

    // Create QPixmap object and link to labelBox
    QPixmap robotAJpg(":/images/robotA.jpg");
    ui->robotAPicLabel->setPixmap(robotAJpg.scaled(50,50));

    ui->robotAPriceLabel->setText("$ " +
                                  QString::number(ROBOT_A_PRICE, 'f', 2));

    // Set mainenance display for comboBox
    ui->robotAComboBox->addItem(PLAN_A_NAME + " (+$" +
                                QString::number(PLAN_A_PRICE, 'f', 2) + ")");
    ui->robotAComboBox->addItem(PLAN_B_NAME + " (+$" +
                                QString::number(PLAN_B_PRICE, 'f', 2) + ")");
    ui->robotAComboBox->addItem(PLAN_C_NAME + " (+$" +
                                QString::number(PLAN_C_PRICE, 'f', 2) + ")");

    ui->robotASubtotalBox->setText("0.00");

    /************************************************************
     * SET ROBOT B VARIABLES & DISPLAY
     ************************************************************/
    // Set robot B default values for variables
    robotBQty = 0;
    robotBPlan = 0;
    robotBSubtotal = 0.0;

    ui->robotBNameLabel->setText(ROBOT_B_NAME);

    // Create QPixmap object and link to labelBox
    QPixmap robotBJpg(":/images/robotB.jpg");
    ui->robotBPicLabel->setPixmap(robotBJpg.scaled(50,50));

    ui->robotBPriceLabel->setText("$ " +
                                  QString::number(ROBOT_B_PRICE, 'f', 2));

    // Set mainenance display for comboBox
    ui->robotBComboBox->addItem(PLAN_A_NAME + " (+$" +
                                QString::number(PLAN_A_PRICE, 'f', 2) + ")");
    ui->robotBComboBox->addItem(PLAN_B_NAME + " (+$" +
                                QString::number(PLAN_B_PRICE, 'f', 2) + ")");
    ui->robotBComboBox->addItem(PLAN_C_NAME + " (+$" +
                                QString::number(PLAN_C_PRICE, 'f', 2) + ")");

    ui->robotBSubtotalBox->setText("0.00");

    /************************************************************
     * SET ROBOT C VARIABLES & DISPLAY
     ************************************************************/
    // Set robot C default values for variables
    robotCQty = 0;
    robotCPlan = 0;
    robotCSubtotal = 0.0;

    ui->robotCNameLabel->setText(ROBOT_C_NAME);

    // Create QPixmap object and link to labelBox
    QPixmap robotCJpg(":/images/robotC.jpg");
    ui->robotCPicLabel->setPixmap(robotCJpg.scaled(50,50));

    ui->robotCPriceLabel->setText("$ " +
                                  QString::number(ROBOT_C_PRICE, 'f', 2));

    // Set mainenance display for comboBox
    ui->robotCComboBox->addItem(PLAN_A_NAME + " (+$" +
                                QString::number(PLAN_A_PRICE, 'f', 2) + ")");
    ui->robotCComboBox->addItem(PLAN_B_NAME + " (+$" +
                                QString::number(PLAN_B_PRICE, 'f', 2) + ")");
    ui->robotCComboBox->addItem(PLAN_C_NAME + " (+$" +
                                QString::number(PLAN_C_PRICE, 'f', 2) + ")");

    ui->robotCSubtotalBox->setText("0.00");

    /************************************************************
     * SET ORDER CALCULATION SECTION
     ************************************************************/
    ui->subtotalLine->setText("");
    ui->shippingLine->setText("");
    ui->taxLabel->setText("Sales Tax (" +
                          QString::number(TAX_RATE*100, 'f', 2) + "%) : ");
    ui->taxLine->setText("");
    ui->totalPriceLine->setText("");

    /************************************************************
     * SET BILLING AND ADDRESS SECTION
     ************************************************************/
    // Set default shipping address labels to uneditable because
    // yesCheckBox is default enabled
    if(ui->yesCheckBox->checkState() == Qt::Checked)
    {
        ui->shippingAddressLineOne->setEnabled(false);
        ui->shippingAddressLineTwo->setEnabled(false);
    }

    /************************************************************
     * SET CREDIT CARD SECTION
     ************************************************************/
    ui->dateMonthLine->setText("");
    ui->dateYearLine->setText("");
    /************************************************************
     * SET BUTTON DEFAULT
     ************************************************************/
    ui->placeOrderButton->setEnabled(false);
}

/****************************************************************************
 * METHOD - ~OrderWindow
 * --------------------------------------------------------------------------
 * This method is the DESTRUCTOR for the OrderWindow dialog object.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 *      ==> Deletes an instance of the class object.
 ***************************************************************************/
OrderWindow::~OrderWindow()
{
    delete ui;
}

/****************************************************************************
 * METHOD - setRobotASubtotal
 * --------------------------------------------------------------------------
 * This method calculates and updates the subtotal for robot A in the dialog
 * window.  It also updates the order subtotal and toggles if the
 * "Place Order" button is enabled or disabled.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 *      ==> Updates display for robot A subtotal.
 ***************************************************************************/
void OrderWindow::setRobotASubtotal()
{
    /************************************************************
     * PROCESSING - Update subtotal if robot A quantity > 0
     ************************************************************/
    if(robotAQty > 0)
    {
        // Get robotAPlan from ComboBox's selected plan's index
        robotAPlan = ui->robotAComboBox->currentIndex();

        // Calculate robotASubtotal depending on the plan selected
        switch(robotAPlan)
        {
        case 0 : robotASubtotal = robotAQty * (ROBOT_A_PRICE + PLAN_A_PRICE);
                 break;
        case 1 : robotASubtotal = robotAQty * (ROBOT_A_PRICE + PLAN_B_PRICE);
                 break;
        case 2 : robotASubtotal = robotAQty * (ROBOT_A_PRICE + PLAN_C_PRICE);
                 break;
        }

        // Set Purchase Button Enabled
        ui->placeOrderButton->setEnabled(true);
    }
    /************************************************************
     * PROCESSING - Update subtotal if robot A quantity is 0
     ************************************************************/
    else
    {
        robotASubtotal = 0.00;
    }

    /************************************************************
     * PROCESSING - Disable "Place Order" button if all three
     *              robot quantities are 0
     ************************************************************/
    if(robotAQty == 0 && robotBQty == 0 && robotCQty == 0)
    {
        // Set Purchase Button Disabled
        ui->placeOrderButton->setEnabled(false);
    }

    // Display updated subtotal on screen for changes made
    ui->robotASubtotalBox->setText(QString::number(robotASubtotal, 'f', 2));

    setOrderSubtotal();
}

/****************************************************************************
 * METHOD - setRobotBSubtotal
 * --------------------------------------------------------------------------
 * This method calculates and updates the subtotal for robot B in the dialog
 * window.  It also updates the order subtotal and toggles if the
 * "Place Order" button is enabled or disabled.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 *      ==> Updates display for robot B subtotal.
 ***************************************************************************/
void OrderWindow::setRobotBSubtotal()
{
    /************************************************************
     * PROCESSING - Update subtotal if robot B quantity > 0
     ************************************************************/
    if(robotBQty > 0)
    {
        // Get robotBPlan from ComboBox's selected plan's index
        robotBPlan = ui->robotBComboBox->currentIndex();

        // Calculate robotBSubtotal depending on the plan selected
        switch(robotBPlan)
        {
        case 0 : robotBSubtotal = robotBQty * (ROBOT_B_PRICE + PLAN_A_PRICE);
                 break;
        case 1 : robotBSubtotal = robotBQty * (ROBOT_B_PRICE + PLAN_B_PRICE);
                 break;
        case 2 : robotBSubtotal = robotBQty * (ROBOT_B_PRICE + PLAN_C_PRICE);
                 break;
        }

        // Set Purchase Button Enabled
        ui->placeOrderButton->setEnabled(true);
    }
    /************************************************************
     * PROCESSING - Update subtotal if robot B quantity is 0
     ************************************************************/
    else
    {
        robotBSubtotal = 0.00;
    }

    /************************************************************
     * PROCESSING - Disable "Place Order" button if all three
     *              robot quantities are 0
     ************************************************************/
    if(robotAQty == 0 && robotBQty == 0 && robotCQty == 0)
    {
        // Set Purchase Button Disbaled
        ui->placeOrderButton->setEnabled(false);
    }

    // Display updated subtotal on screen for changes made
    ui->robotBSubtotalBox->setText(QString::number(robotBSubtotal, 'f', 2));

    // Update order subtotal
    setOrderSubtotal();
}

/****************************************************************************
 * METHOD - setRobotCSubtotal
 * --------------------------------------------------------------------------
 * This method calculates and updates the subtotal for robot C in the dialog
 * window.  It also updates the order subtotal and toggles if the
 * "Place Order" button is enabled or disabled.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 *      ==> Updates display for robot C subtotal.
 ***************************************************************************/
void OrderWindow::setRobotCSubtotal()
{
    /************************************************************
     * PROCESSING - Update subtotal if robot C quantity > 0
     ************************************************************/
    if(robotCQty > 0)
    {
        // Get robotCPlan from ComboBox's selected plan's index
        robotCPlan = ui->robotCComboBox->currentIndex();

        // Calculate robotCSubtotal depending on the plan selected
        switch(robotCPlan)
        {
        case 0 : robotCSubtotal = robotCQty * (ROBOT_C_PRICE + PLAN_A_PRICE);
                 break;
        case 1 : robotCSubtotal = robotCQty * (ROBOT_C_PRICE + PLAN_B_PRICE);
                 break;
        case 2 : robotCSubtotal = robotCQty * (ROBOT_C_PRICE + PLAN_C_PRICE);
                 break;
        }

        // Set Purchase Button Enabled
        ui->placeOrderButton->setEnabled(true);
    }
    /************************************************************
     * PROCESSING - Update subtotal if robot C quantity is 0
     ************************************************************/
    else
    {
        robotCSubtotal = 0.00;
    }

    /************************************************************
     * PROCESSING - Disable "Place Order" button if all three
     *              robot quantities are 0
     ************************************************************/
    if(robotAQty == 0 && robotBQty == 0 && robotCQty == 0)
    {
        // Set Purchase Button Disbaled
        ui->placeOrderButton->setEnabled(false);
    }

    // Display updated subtotal on screen for changes made
    ui->robotCSubtotalBox->setText(QString::number(robotCSubtotal, 'f', 2));

    // Update order subtotal
    setOrderSubtotal();
}

/****************************************************************************
 * METHOD - setOrderSubtotal
 * --------------------------------------------------------------------------
 * This method calculates and updates the order subtotal in the dialog
 * window.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 *      ==> Updates display for order subtotal.
 ***************************************************************************/
void OrderWindow::setOrderSubtotal()
{
    // Calculate order subtotal
    subtotal = robotASubtotal + robotBSubtotal + robotCSubtotal;

    /************************************************************
     * PROCESSING - Update subtotal if > 0 to subtotal value
     ************************************************************/
    if(subtotal > 0.0)
    {
        ui->subtotalLine->setText(QString::number(subtotal, 'f', 2));
    }
    /************************************************************
     * PROCESSING - Update subtotal if <= 0 to blank
     ************************************************************/
    else
    {
        ui->subtotalLine->setText("");
    }

    // Update order shipping & handling rate display
    setOrderShipping();
    // Update order sales tax amount display
    setOrderSalesTax();
    // Update total order price display
    setOrderTotalPrice();
}

void OrderWindow::setOrderShipping()
{
    /************************************************************
     * PROCESSING - Update shipping cost if subtotal > 0
     ************************************************************/
    if(subtotal > 0.00)
    {
        ui->shippingLine->setText(QString::number(SHIPPING, 'f', 2));
    }
    /************************************************************
     * PROCESSING - Update shipping cost to blank if
     *              subtotal <= 0
     ************************************************************/
    else
    {
        ui->shippingLine->setText("");
    }
}

void OrderWindow::setOrderSalesTax()
{
    /************************************************************
     * PROCESSING - Update sales tax amount if subtotal > 0
     ************************************************************/
    if(subtotal > 0.00)
    {
        salesTax = ((subtotal + SHIPPING)*TAX_RATE);
        ui->taxLine->setText(QString::number(salesTax, 'f', 2));
    }
    /************************************************************
     * PROCESSING - Update sales tax amount to blank if
     *              subtotal <= 0
     ************************************************************/
    else
    {
        ui->taxLine->setText("");
    }
}

void OrderWindow::setOrderTotalPrice()
{
    /************************************************************
     * PROCESSING - Update total order price if subtotal > 0
     ************************************************************/
    if(subtotal > 0.00)
    {
        totalPrice = subtotal + SHIPPING + salesTax;
        ui->totalPriceLine->setText(QString::number(totalPrice, 'f', 2));
    }
    /************************************************************
     * PROCESSING - Update total order price to blank if
     *              subtotal <= 0
     ************************************************************/
    else
    {
        ui->totalPriceLine->setText("");
    }
}

/****************************************************************************
 * METHOD - on_placeOrderButton_clicked
 * --------------------------------------------------------------------------
 * This method is activated when the "Place Order" button is clicked.  It
 * opens a QMessageBox confirming the order.  When the message box is
 * closed, the orderWindow dialog is closed and the productWindow is active.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 *      ==> Opens confirmation message box.
 ***************************************************************************/
void OrderWindow::on_placeOrderButton_clicked()
{
    // Open and display order confirmation message box
    QMessageBox::information(this, "Order Confirmation",
                             "Thank you for your order.",QMessageBox::Ok);

    // Shows value of variables that need to be saved to file eventually
    qDebug() << "Number of Robot A: " << robotAQty;
    qDebug() << "Robot A plan index #: " << robotAPlan;
    qDebug() << "Number of Robot B: " << robotBQty;
    qDebug() << "Robot B plan index #: " << robotBPlan;
    qDebug() << "Number of Robot C: " << robotCQty;
    qDebug() << "Robot C plan index #: " << robotCPlan;
    qDebug() << "Total Order Price: $ " << totalPrice;

    // Accept the dialog
    accept();
}

/****************************************************************************
 * METHOD - on_cancelButton_clicked
 * --------------------------------------------------------------------------
 * This method is activated when the "Cancel" button is clicked.  It
 * closes the orderWindow and makes the productWindow active.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 *      ==> Closes orderWindow and makes productWindow active.
 ***************************************************************************/
void OrderWindow::on_cancelButton_clicked()
{
    reject();
}

/****************************************************************************
 * METHOD - on_robotASpinBox_valueChanged
 * --------------------------------------------------------------------------
 * This method is activated when the value in the robot A quantity spinbox
 * is changed.  The robot quantity and subtotal is updated.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *          qty : quantity of robots from spinbox
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void OrderWindow::on_robotASpinBox_valueChanged(int qty)
{
    // Update robot quantity
    robotAQty = qty;

    // Update robot subtotal
    setRobotASubtotal();
}

/****************************************************************************
 * METHOD - on_robotAComboBox_currentIndexChanged
 * --------------------------------------------------------------------------
 * This method is activated when the value in the robot A's maintenance
 * plan combobox value is changed.  The robot plan index and subtotal are
 * updated.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *          index : the robot plan combo box index selected
 *
 * POST-CONDITIhONS
 *      ==> Returns nothing
 ***************************************************************************/
void OrderWindow::on_robotAComboBox_currentIndexChanged(int index /* IN */)
{
    // Update robotAPlan index value
    robotAPlan = index;

    // Display the robot's subtotal changes to screen.
    setRobotASubtotal();
}

/****************************************************************************
 * METHOD - on_robotBSpinBox_valueChanged
 * --------------------------------------------------------------------------
 * This method is activated when the value in the robot B quantity spinbox
 * is changed.  The robot quantity and subtotal is updated.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *          qty : quantity of robots from spinbox
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void OrderWindow::on_robotBSpinBox_valueChanged(int qty)
{
    // Update robot quantity
    robotBQty = qty;

    // Update robot subtotal
    setRobotBSubtotal();
}

/****************************************************************************
 * METHOD - on_robotBComboBox_currentIndexChanged
 * --------------------------------------------------------------------------
 * This method is activated when the value in the robot B's maintenance
 * plan combobox value is changed.  The robot plan index and subtotal are
 * updated.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *          index : the robot plan combo box index selected
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void OrderWindow::on_robotBComboBox_currentIndexChanged(int index)
{
    // Update robotBPlan index value
    robotBPlan = index;

    // Display the robot's subtotal changes to screen.
    setRobotBSubtotal();
}

/****************************************************************************
 * METHOD - on_robotCSpinBox_valueChanged
 * --------------------------------------------------------------------------
 * This method is activated when the value in the robot C quantity spinbox
 * is changed.  The robot quantity and subtotal is updated.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *          qty : quantity of robots from spinbox
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void OrderWindow::on_robotCSpinBox_valueChanged(int qty)
{
    // Update robot quantity
    robotCQty = qty;

    // Update robot subtotal
    setRobotCSubtotal();
}

/****************************************************************************
 * METHOD - on_robotCComboBox_currentIndexChanged
 * --------------------------------------------------------------------------
 * This method is activated when the value in the robot C's maintenance
 * plan combobox value is changed.  The robot plan index and subtotal are
 * updated.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *          index : the robot plan combo box index selected
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void OrderWindow::on_robotCComboBox_currentIndexChanged(int index)
{
    // Update robotCPlan index value
    robotCPlan = index;

    // Display the robot's subtotal changes to screen.
    setRobotCSubtotal();
}

/****************************************************************************
 * METHOD - on_billingAddressLineOne_editingFinished
 * --------------------------------------------------------------------------
 * This method is activated when another element on the screen is selected.
 * This method saves the billing address line entered to a variable.  It
 * also updates the shipping address if the yesCheckBox is clicked.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void OrderWindow::on_billingAddressLineOne_editingFinished()
{
    // Save the entered billing address line into a variable
    billingAddressOne = ui->billingAddressLineOne->text();

    // If the "Yes" check box is clicked that the shipping address is the
    // same as the billing address, update shipping address information on
    // the screen.
    if(ui->yesCheckBox->checkState() == Qt::Checked)
    {
        ui->shippingAddressLineOne->
                setText(ui->billingAddressLineOne->text());
    }
}

/****************************************************************************
 * METHOD - on_billingAddressLineTwo_editingFinished
 * --------------------------------------------------------------------------
 * This method is activated when another element on the screen is selected.
 * This method saves the billing address line entered to a variable.  It
 * also updates the shipping address if the yesCheckBox is clicked.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void OrderWindow::on_billingAddressLineTwo_editingFinished()
{
    // Save the entered billing address line into a variable
    billingAddressTwo = ui->billingAddressLineTwo->text();

    // If the "Yes" check box is clicked that the shipping address is the
    // same as the billing address, update shipping address information on
    // the screen.
    if(ui->yesCheckBox->checkState() == Qt::Checked)
    {
        ui->shippingAddressLineTwo->
                setText(ui->billingAddressLineTwo->text());
    }
}

/****************************************************************************
 * METHOD - on_yesCheckBox_toggled
 * --------------------------------------------------------------------------
 * This method is determines the shipping address display on screen using
 * the yesCheckBox toggled value.  If the "Yes" box is clicked, the
 * shipping address line edit boxes are updated with the billing address
 * information and disables the ability to edit it.  If the "Yes" box is not
 * clicked (the "No" box is clicked), then the shipping address information
 * is cleared and it is editable.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void OrderWindow::on_yesCheckBox_toggled(bool checked)
{
    // If "Yes".  Shipping address is same as billing address
    // Copy billing address to shipping address lines
    // Disable shipping address lines to no editing.
    if(checked == true)
    {
        ui->shippingAddressLineOne->setEnabled(false);
        ui->shippingAddressLineOne->setText(ui->billingAddressLineOne->text());
        ui->shippingAddressLineTwo->setEnabled(false);
        ui->shippingAddressLineTwo->setText(ui->billingAddressLineTwo->text());
    }
    // If "No".  Shipping address is not same as billing address
    // Empty shipping address lines so information can be entered
    // Enable shipping address lines so can be edited
    else
    {
        ui->shippingAddressLineOne->setEnabled(true);
        ui->shippingAddressLineOne->setText("");
        ui->shippingAddressLineTwo->setEnabled(true);
        ui->shippingAddressLineTwo->setText("");
    }
}

/****************************************************************************
 * METHOD - on_creditCardTypeBox_currentIndexChanged
 * --------------------------------------------------------------------------
 * This method saves the value of the credit card drop down option in the
 * comboBox when changed.  Default is VISA.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *          index : the credit card type combo box index selected
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void OrderWindow::on_creditCardTypeBox_currentIndexChanged(int index)
{
    ccType = index;
}

/****************************************************************************
 * METHOD - on_creditCardNumberLine_editingFinished
 * --------------------------------------------------------------------------
 * This method is activated when another element on the screen is selected.
 * This method saves the credit card number line entered to a variable.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void OrderWindow::on_creditCardNumberLine_editingFinished()
{
    ccNumber = ui->creditCardNumberLine->text();
}

/****************************************************************************
 * METHOD - on_creditCardNameLine_editingFinished
 * --------------------------------------------------------------------------
 * This method is activated when another element on the screen is selected.
 * This method saves the credit card name line entered to a variable.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void OrderWindow::on_creditCardNameLine_editingFinished()
{
    ccName = ui->creditCardNameLine->text();
}

/****************************************************************************
 * METHOD - on_dateMonthLine_editingFinished
 * --------------------------------------------------------------------------
 * This method is activated when another element on the screen is selected.
 * This method saves the credit card expire month date line entered to a
 * variable.  It only saves the value if the month integer entered is
 * more than 0 and less than or equal to 12.  If the value entered is not
 * valid, the box clears when another element on the screen is selected.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void OrderWindow::on_dateMonthLine_editingFinished()
{
    QString temp; // CALC - used to hold month QString value temporarily

    // Store QString value to temporary variable so it can be converted
    // to an integer value.
    temp = ui->dateMonthLine->text();

    // Store the converted QString to integer into a variable
    // A non-integer value is stored as a 0.
    ccMonth = temp.toInt();

    // If the converted int month value is not between 1-12, clear the
    // month box so it can be re-entered.
    if(ccMonth > 12 || ccMonth <= 0)
    {
        ui->dateMonthLine->setText("");
    }
}

/****************************************************************************
 * METHOD - on_dateYearLine_editingFinished
 * --------------------------------------------------------------------------
 * This method is activated when another element on the screen is selected.
 * This method saves the credit card expire year date line entered to a
 * variable.  It only saves the value if the year integer entered is
 * between 19 to 99.  If the value entered is not within this valid range,
 * the box clears when another element on the screen is selected.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void OrderWindow::on_dateYearLine_editingFinished()
{
    QString temp; // CALC - used to hold year QString value temporarily

    // Store QString value to temporary variable so it can be converted
    // to an integer value.
    temp = ui->dateYearLine->text();

    // Store the converted QString to integer into a variable
    // A non-integer value is stored as a 0.
    ccYear = temp.toInt();

    // If the converted int year value is not between 19-99, clear the
    // year box so it can be re-entered.
    if(ccYear >= 99 || ccYear < 19)
    {
        ui->dateYearLine->setText("");
    }
}

/****************************************************************************
 * METHOD - on_cvvLine_editingFinished
 * --------------------------------------------------------------------------
 * This method is activated when another element on the screen is selected.
 * This method saves the credit card CVV line entered to a variable.
 * It only saves the value if it is between 1 to 9999.  If the value
 * entered is not within this valid range, the box clears when another
 * element on the screen is selected.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
void OrderWindow::on_cvvLine_editingFinished()
{
    QString temp; // CALC - used to hold CVV QString value temporarily

    // Store QString value to temporary variable so it can be converted
    // to an integer value.
    temp = ui->cvvLine->text();

    // Store the converted QString to integer into a variable
    // A non-integer value is stored as a 0.
    ccCvv = temp.toInt();

    // If the converted int CVV value is not between 1 to 9999, clear the
    // CVV box so it can be re-entered.
    if(ccCvv >= 10000 || ccCvv <= 0)
    {
        ui->cvvLine->setText("");
    }
}
