/****************************************************************************
 * Project #1  : iRobotstoDetectBombs
 * Description : The orderWindow.cpp for the iRbobot order dialog window.
 * Programmer  : Juli and Camille
 ***************************************************************************/

#include "orderWindow.h"
#include "ui_orderWindow.h"
#include "productWindow.h"
#include "customer.h"
#include "mainwindow.h"

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
 *          SHIPPING      : shipping and handling amount
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

/****************************************************************************
 * METHOD - setOrderShipping
 * --------------------------------------------------------------------------
 * This method updates the order shipping in the dialog window.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following constant variables must be declared and initialized
 *      in the productWindow.h.
 *          SHIPPING : constant value for shipping & handling charges
 *                     used for calculating total price
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 *      ==> Updates display for shipping price.
 ***************************************************************************/
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

/****************************************************************************
 * METHOD - setOrderSalesTax
 * --------------------------------------------------------------------------
 * This method calculates and updates the order's sales tax in the dialog
 * window.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 *      ==> Updates display for order sales tax.
 ***************************************************************************/
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

/****************************************************************************
 * METHOD - setOrderTotalPrice
 * --------------------------------------------------------------------------
 * This method calculates and updates the order's total price in the dialog
 * window.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 *      ==> Updates display for order's total price.
 ***************************************************************************/
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
 * first checks to make sure the ccName matches the Company field in the
 * customers database table.  If there is no match, then the process for
 * saving the order stops.  If there is a match, then the member variables
 * that require conversion are done.  After conversions are made, the
 * input values from the form are stored into the 'orders' database table.
 * The QMessageBox opens to confirm the order was saved.  When the message
 * box is closed, the orderWindow dialog is closed and the productWindow is
 * active.
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
    int index = 0; // CALC - used to store the index of last value in
                   //        orders database table so the order id
                   //        can be created

    QString IDPreFix; // CALC&OUT - created OrderID with Os and formatting.

    // Connect to sqlite database CustomerList.db
    connectToCustomerList();

    /************************************************************
     * PROCESSING - If database fails to open, display message
     *              box to customer to contact us for help.
     *              Else, continue with the process of preparing
     *              to store entered data into database.
     ************************************************************/
    // Database fails to open
    if(!database.open())
    {
        QMessageBox::information(this, "Error",
            "Unable to take order at this time, please contact us!",
            QMessageBox::Ok);

        reject();
    }
    // Database opens successfully
    else
    {
        bool isFound = false; // CALC - if ccName (in 'orders' database)
                              //        matches a Company (in 'customers'
                              //        database)

        QString robotAPlanStr,robotBPlanStr,robotCPlanStr;
                // CALC&OUT - Converted string value for robot plans

        // Create queryName object for query on company names in the
        // 'customer' database table
        QSqlQuery queryName;

        // Prepare query by selecting the company names from the 'customers'
        // database table
        queryName.prepare("SELECT Company FROM customers");

        /************************************************************
         * PROCESSING - Check each record in customers database
         *              for Company == ccName (which is in orders
         *              database)
         *              If ccName does not match a Company name then
         *              the order can't be accepted.  A customer's
         *              Company must exist in the customers database
         *              to be able to place an Order.
         ************************************************************/
        if(queryName.exec())
        {
            qDebug() << "Inside queryName.exec";

            // Go through entire database looking for the ccName match
            while(queryName.next())
            {
                // Check if there is a match
                if(queryName.value(0) == ccName)
                {
                    qDebug() << "Name found!";
                    isFound = true;
                }
            }
         }

        /************************************************************
         * PROCESSING - If the ccName match is found in the customers
         *              database, then continue with the saving order
         *              process.
         ************************************************************/
        if(isFound)
        {
            // If no robotA is ordered, display blank string for the
            // selected plan.
            if(robotAQty<1)
            {
                robotAPlanStr = "";
            }
            // If at least one is being ordered, then use the robotAPlan
            // value to convert to a string to be displayed.
            else
            {
                // Select proper string
                switch(robotAPlan)
                {
                    case 0: robotAPlanStr = "Basic Plan";
                    break;

                    case 1: robotAPlanStr = "Basic Plus Plan";
                    break;

                    case 2: robotAPlanStr = "Premium Plan";
                    break;
                 }
             }

            // If no robotB is ordered, display blank string for the
            // selected plan.
            if(robotBQty<1)
            {
                robotBPlanStr = "";
            }
            // If at least one is being ordered, then use the robotBPlan
            // value to convert to a string to be displayed.
            else
            {
                // Select proper string
                switch(robotBPlan)
                {
                    case 0: robotBPlanStr = "Basic Plan";
                    break;

                    case 1: robotBPlanStr = "Basic Plus Plan";
                    break;

                    case 2: robotBPlanStr = "Premium Plan";
                    break;
                }
            }

            // If no robotC is ordered, display blank string for the
            // selected plan.
            if(robotCQty<1)
            {
                robotCPlanStr = "";
            }
            // If at least one is being ordered, then use the robotCPlan
            // value to convert to a string to be displayed.
            else
            {
                // Select proper string
                switch(robotCPlan)
                {
                case 0: robotCPlanStr = "Basic Plan";
                break;

                case 1: robotCPlanStr = "Basic Plus Plan";
                break;

                case 2: robotCPlanStr = "Premium Plan";
                break;
                }
            }

            // Create queryIndex object for query on order id in the
            // 'orders' database table to find the last entry index
            // so we can determine the order id for the new order.
            QSqlQuery queryIndex;

            // Query the orderID from the 'orders' database table
            queryIndex.exec("SELECT orderID FROM orders");

            // Locate last index in orders database table
            while (queryIndex.next())
            {
                index++;
                qDebug() << "index: " << index;
            }

            qDebug() << "index TESTING: " << index;

            // Create queryIndex object for query on order id in the
            // 'orders' database table to find the last entry index
            // so we can determine the order id for the new order.
            QSqlQuery query;
            query.prepare("INSERT INTO orders(orderID, companyName,"
                          "robotAQty, robotBQty, robotCQty,"
                          "robotAPlan, robotBPlan, robotCPlan,"
                          "robotASub, robotBSub, robotCSub,"
                          "subtotal, shipping, salesTax, totalPrice) "
                          "VALUES (:orderID, :ccName,"
                          ":robotAQty,:robotBQty, :robotCQty,"
                          ":robotAPlanStr,:robotBPlanStr,:robotCPlanStr,"
                          ":robotASubtotal,:robotBSubtotal,:robotCSubtotal,"
                          ":subtotal,:shipping,:salesTax,:totalPrice)");

            // Format the orderID with padded 0s as needed
            if (index<=10)
            {
                IDPreFix = "0-000";
            }
            else if(index<=100)
            {
                IDPreFix = "0-00";
            }
            else if (index<=1000)
            {
                IDPreFix = "0-0";
            }
            else
            {
                IDPreFix = "0-";
            }

            // Store the new formatted orderID value as a string
            orderID = IDPreFix + (QString::number(++index));

            // Save input values from the form into the orders database
            // Convert int and doubles into strings to be saved up to
            // two decimal places
            query.bindValue(0,orderID);
            query.bindValue(1,ccName);
            query.bindValue(2,QString::number(robotAQty));
            query.bindValue(3,QString::number(robotBQty));
            query.bindValue(4,QString::number(robotCQty));
            query.bindValue(5,robotAPlanStr);
            query.bindValue(6,robotBPlanStr);
            query.bindValue(7,robotCPlanStr);
            query.bindValue(8,QString::number(robotASubtotal, 'f', 2));
            query.bindValue(9,QString::number(robotBSubtotal, 'f', 2));
            query.bindValue(10,QString::number(robotCSubtotal, 'f', 2));
            query.bindValue(11,QString::number(subtotal, 'f', 2));
            query.bindValue(12,QString::number(SHIPPING, 'f', 2));
            query.bindValue(13,QString::number(salesTax, 'f', 2));
            query.bindValue(14,QString::number(totalPrice, 'f', 2));

            // qDebug to for programmer to verify values were saved
            if(query.exec())
            {
                qDebug() << ("added");
            }
            else
            {
                qDebug() << ("add failed");
            }

            // Shows value of variables that were saved
            qDebug() << "Number of Robot A: "    << robotAQty;
            qDebug() << "Robot A plan index #: " << robotAPlan;
            qDebug() << "Number of Robot B: "    << robotBQty;
            qDebug() << "Robot B plan index #: " << robotBPlan;
            qDebug() << "Number of Robot C: "    << robotCQty;
            qDebug() << "Robot C plan index #: " << robotCPlan;
            qDebug() << "Total Order Price: $ "  << totalPrice;

            // Open and display order confirmation message box
            QMessageBox::information(this, "Order Confirmation",
                "Thank you for your order.", QMessageBox::Ok);

            // Accept the dialog
            accept();
        }
        // Message box if ccName does not match a Company in the 'customers'
        // database table
        else
        {
            QMessageBox::information(this, "Error",
                "Company Name not found!", QMessageBox::Ok);
        }

        // Close database file
        closeDatabase();
    }
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

/****************************************************************************
 * METHOD - connectToCustomerList
 * --------------------------------------------------------------------------
 * This method connects to the CustomerList.db (an sqlite database that has
 * two tables: customers and orders).
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 ***************************************************************************/
bool OrderWindow::connectToCustomerList()
{
    // Create database object and connect to file
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("customerList.db");

    // Check if file opens correctly
    if(!database.open())
    {
        qDebug() << ("Database did not open");
        return false;
    }

    qDebug() << ("Database opened");

    return true;
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
void OrderWindow::closeDatabase()
{
    database.close();
    database.removeDatabase(QSqlDatabase::defaultConnection);
    qDebug() << ("Closed");
}

