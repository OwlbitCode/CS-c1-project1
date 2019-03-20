/****************************************************************************
 * Project #1  : iRobotstoDetectBombs
 * Description : The productWindow.h for the iRbobot product widget window.
 * Programmer  : Juli
 ***************************************************************************/

#ifndef PRODUCTWINDOW_H
#define PRODUCTWINDOW_H

#include <QWidget>
#include <QString>
#include <QDebug>

namespace Ui {
class Widget;
}

// CONSTANTS FOR ROBOT NAMES AND PRICES
const QString ROBOT_A_NAME  = "GO-4";
const double  ROBOT_A_PRICE = 999.99;
const QString ROBOT_B_NAME  = "Wall-E";
const double  ROBOT_B_PRICE = 1499.99;
const QString ROBOT_C_NAME  = "Eve";
const double  ROBOT_C_PRICE = 1999.99;

// CONSTANTS FOR MAINTENANCE PLAN NAMES AND PRICES
const QString PLAN_A_NAME  = "Basic Plan";
const double  PLAN_A_PRICE = 0.00;
const QString PLAN_B_NAME  = "Basic Plus Plan";
const double  PLAN_B_PRICE = 150.00;
const QString PLAN_C_NAME  = "Premium Plan";
const double  PLAN_C_PRICE = 250.00;

// CONSTANT FOR SHIPPING & HANDLING CHARGES used for calculating total price
const double SHIPPING = 100.00;

// CONSTANT FOR SALES TAX RATE used for calculating total price
const double TAX_RATE = 0.075;

/****************************************************************************
 * ProductWindow Class
 *      A QWidget type class used to create the ProductWindow.  The product
 *      window displays the three iRobot bomb detecting and disposal robot
 *      options and the three maintenance plans available.  The purchase
 *      button is used to open the OrderWindow.
 *
 *      PRE-CONDITONS
 *      The following constant variables must be declared and initialized
 *      in this header file.
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
 ***************************************************************************/
class ProductWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ProductWindow(QWidget *parent = nullptr);
    //!< Constructor

    ~ProductWindow();
    //!< Destructor

    double getRobotAPrice() const;
    //!< Gets the price for Robot A
    /*!< POST: return robotAPrice; */

    double getPlanAPrice() const;
    //!< Gets the price for Robot B
    /*!< POST: return robotBPrice; */

    double getRobotBPrice() const;
    //!< Gets the price for Robot C
    /*!< POST: return robotCPrice; */

    double getPlanBPrice() const;
    //!< Gets the price for Plan A
    /*!< POST: return planAPrice; */

    double getRobotCPrice() const;
    //!< Gets the price for Plan B
    /*!< POST: return planBPrice; */

    double getPlanCPrice() const;
    //!< Gets the price for Plan C
    /*!< POST: return planCPrice; */

private slots:

    void on_robotAPushButton_clicked();
    //!< Creates and opens a new OrderWindow dialog when button is clicked

    void on_robotBPushButton_clicked();
    //!< Creates and opens a new OrderWindow dialog when button is clicked

    void on_robotCPushButton_clicked();
    //!< Creates and opens a new OrderWindow dialog when button is clicked

    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
};

#endif // PRODUCTWINDOW_H
