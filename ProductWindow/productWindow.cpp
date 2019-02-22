/****************************************************************************
 * Project #1  : iRobotstoDetectBombs
 * Description : The productWindow.cpp for the iRbobot product widget window.
 * Programmer  : Juli
 ***************************************************************************/

#include "productWindow.h"
#include "ui_productWindow.h"
#include "orderWindow.h"
#include <QDebug>

/****************************************************************************
 * METHOD - ProductWindow
 * --------------------------------------------------------------------------
 * This method is the CONSTRUCTOR used to display and set default values for
 * the ProductWindow widget object.
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
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 *      ==> Create an instance of the class object with default values.
 ***************************************************************************/
ProductWindow::ProductWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    /************************************************************
     * SET ROBOT A DISPLAY -  name, image, and price
     ************************************************************/
    ui->robotATextLabel->setText(ROBOT_A_NAME);

    // Create QPixmap object and link to labelBox
    QPixmap robotAJpg(":/images/robotA.jpg");
    ui->robotAImage->setPixmap(robotAJpg.scaled(150,175));

    ui->robotAPriceLabel->setText("$ " +
                                  QString::number(ROBOT_A_PRICE, 'f', 2));

    /************************************************************
     * SET ROBOT B DISPLAY - name, image, and price
     ************************************************************/
    ui->robotBTextLabel->setText(ROBOT_B_NAME);

    // Create QPixmap object and link to labelBox
    QPixmap robotBJpg(":/images/robotB.jpg");
    ui->robotBImage->setPixmap(robotBJpg.scaled(150,175));

    ui->robotBPriceLabel->setText("$ " +
                                  QString::number(ROBOT_B_PRICE, 'f', 2));

    /************************************************************
     * SET ROBOT C DISPLAY - name, image, and price
     ************************************************************/
    ui->robotCTextLabel->setText(ROBOT_C_NAME);

    // Create QPixmap object and link to labelBox
    QPixmap robotCJpg(":/images/robotC.jpg");
    ui->robotCImage->setPixmap(robotCJpg.scaled(150,175));

    ui->robotCPriceLabel->setText("$ " +
                                  QString::number(ROBOT_C_PRICE, 'f', 2));

    /************************************************************
     * SET MAINTENANCE PLAN DISPLAY - name and price
     ************************************************************/
    ui->planALabel->setText(PLAN_A_NAME);
    ui->planAPriceLabel->setText("$ " +
                                 QString::number(PLAN_A_PRICE, 'f', 2));

    ui->planBLabel->setText(PLAN_B_NAME);
    ui->planBPriceLabel->setText("$ " +
                                 QString::number(PLAN_B_PRICE, 'f', 2));

    ui->planCLabel->setText(PLAN_C_NAME);
    ui->planCPriceLabel->setText("$ " +
                                 QString::number(PLAN_C_PRICE, 'f', 2));
}

/****************************************************************************
 * METHOD - ~ProductWindow
 * --------------------------------------------------------------------------
 * This method is the DESTRUCTOR for the ProductWindow widget object.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 *      ==> Deletes an instance of the class object.
 ***************************************************************************/
ProductWindow::~ProductWindow()
{
    delete ui;
}

/****************************************************************************
 * METHOD - getRobotAPrice
 * --------------------------------------------------------------------------
 * This method returns the robot price.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns the robot A price.
 ***************************************************************************/
double ProductWindow::getRobotAPrice() const
{
    return ROBOT_B_PRICE;
}

/****************************************************************************
 * METHOD - getPlanAPrice
 * --------------------------------------------------------------------------
 * This method returns the maintenance plan price.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns the maintenance plan A price.
 ***************************************************************************/
double ProductWindow::getPlanAPrice() const
{
    return PLAN_A_PRICE;
}

/****************************************************************************
 * METHOD - getRobotBPrice
 * --------------------------------------------------------------------------
 * This method returns the robot price.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns the robot B price.
 ***************************************************************************/
double ProductWindow::getRobotBPrice() const
{
    return ROBOT_B_PRICE;
}

/****************************************************************************
 * METHOD - getPlanBPrice
 * --------------------------------------------------------------------------
 * This method returns the maintenance plan price.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns the maintenance plan B price.
 ***************************************************************************/
double ProductWindow::getPlanBPrice() const
{
    return PLAN_B_PRICE;
}

/****************************************************************************
 * METHOD - getRobotCPrice
 * --------------------------------------------------------------------------
 * This method returns the robot price.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns the robot C price.
 ***************************************************************************/
double ProductWindow::getRobotCPrice() const
{
    return ROBOT_C_PRICE;
}

/****************************************************************************
 * METHOD - getPlanCPrice
 * --------------------------------------------------------------------------
 * This method returns the maintenance plan price.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns the maintenance plan C price.
 ***************************************************************************/
double ProductWindow::getPlanCPrice() const
{
    return PLAN_C_PRICE;
}

/****************************************************************************
 * METHOD - on_robotAPushButton_clicked
 * --------------------------------------------------------------------------
 * This method is activated when the "Purchase iRobot" button is clicked.
 * A new orderWindow widget object is opened.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 *      ==> Opens new orderWindow widget object.
 ***************************************************************************/
void ProductWindow::on_robotAPushButton_clicked()
{
    OrderWindow * orderWindow = new OrderWindow;
    orderWindow->exec();
}

/****************************************************************************
 * METHOD - on_robotBPushButton_clicked
 * --------------------------------------------------------------------------
 * This method is activated when the "Purchase iRobot" button is clicked.
 * A new orderWindow widget object is opened.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 *      ==> Opens new orderWindow widget object.
 ***************************************************************************/
void ProductWindow::on_robotBPushButton_clicked()
{
    OrderWindow * orderWindow = new OrderWindow;
    orderWindow->exec();
}

/****************************************************************************
 * METHOD - on_robotCPushButton_clicked
 * --------------------------------------------------------------------------
 * This method is activated when the "Purchase iRobot" button is clicked.
 * A new orderWindow widget object is opened.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing
 *      ==> Opens new orderWindow widget object.
 ***************************************************************************/
void ProductWindow::on_robotCPushButton_clicked()
{
    OrderWindow * orderWindow = new OrderWindow;
    orderWindow->exec();
}
