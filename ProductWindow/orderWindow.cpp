#include "orderWindow.h"
#include "ui_orderWindow.h"
#include "productWindow.h"

#include <QMessageBox>
#include <QString>
#include <QDebug>

OrderWindow::OrderWindow(QWidget *parent) :
    QDialog(parent, Qt::WindowSystemMenuHint | Qt::WindowTitleHint),
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

    ui->robotANameLabel->setText(robotAName);

    // Create QPixmap object for robot A
    QPixmap robotAJpg(":/images/robotA.jpg");
    // Link object robotAJpg to the robotAImage labelBox
    ui->robotAPicLabel->setPixmap(robotAJpg.scaled(50,50));

    ui->robotAPriceLabel->setText("$ " +
                                  QString::number(robotAPrice, 'f', 2));

    ui->robotAComboBox->addItem(planAName + " (+$" +
                                QString::number(planAPrice, 'f', 2) + ")");
    ui->robotAComboBox->addItem(planBName + " (+$" +
                                QString::number(planBPrice, 'f', 2) + ")");
    ui->robotAComboBox->addItem(planCName + " (+$" +
                                QString::number(planCPrice, 'f', 2) + ")");

    ui->robotASubtotalBox->setText("0.00");

    /************************************************************
     * SET ROBOT B VARIABLES & DISPLAY
     ************************************************************/
    // Set robot B default values for variables
    robotBQty = 0;
    robotBPlan = 0;
    robotBSubtotal = 0.0;

    ui->robotBNameLabel->setText(robotBName);

    // Create QPixmap object for robot B
    QPixmap robotBJpg(":/images/robotB.jpg");
    // Link object robotBJpg to the robotBImage labelBox
    ui->robotBPicLabel->setPixmap(robotBJpg.scaled(50,50));

    ui->robotBPriceLabel->setText("$ " +
                                  QString::number(robotBPrice, 'f', 2));

    ui->robotBComboBox->addItem(planAName + " (+$" +
                                QString::number(planAPrice, 'f', 2) + ")");
    ui->robotBComboBox->addItem(planBName + " (+$" +
                                QString::number(planBPrice, 'f', 2) + ")");
    ui->robotBComboBox->addItem(planCName + " (+$" +
                                QString::number(planCPrice, 'f', 2) + ")");

    ui->robotBSubtotalBox->setText("0.00");

    /************************************************************
     * SET ROBOT C VARIABLES & DISPLAY
     ************************************************************/
    // Set robot C default values for variables
    robotCQty = 0;
    robotCPlan = 0;
    robotCSubtotal = 0.0;

    ui->robotCNameLabel->setText(robotCName);

    // Create QPixmap object for robot C
    QPixmap robotCJpg(":/images/robotC.jpg");
    // Link object robotCJpg to the robotCImage labelBox
    ui->robotCPicLabel->setPixmap(robotCJpg.scaled(50,50));

    ui->robotCPriceLabel->setText("$ " +
                                  QString::number(robotCPrice, 'f', 2));

    ui->robotCComboBox->addItem(planAName + " (+$" +
                                QString::number(planAPrice, 'f', 2) + ")");
    ui->robotCComboBox->addItem(planBName + " (+$" +
                                QString::number(planBPrice, 'f', 2) + ")");
    ui->robotCComboBox->addItem(planCName + " (+$" +
                                QString::number(planCPrice, 'f', 2) + ")");

    ui->robotCSubtotalBox->setText("0.00");

    /************************************************************
     * SET ORDER CALCULATION SECTION
     ************************************************************/
    ui->taxLabel->setText("Sales Tax (" +
                          QString::number(taxRate*100, 'f', 2) + "%) : ");
}

OrderWindow::~OrderWindow()
{
    delete ui;
}

void OrderWindow::on_placeOrderButton_clicked()
{
    // Display QDebug Info to show variables were saved.
    qDebug() << "Robot A Qty" << robotAQty;
    qDebug() << "Robot A Plan" << robotAPlan;
    qDebug() << "Robot B Qty" << robotBQty;
    qDebug() << "Robot B Plan" << robotBPlan;
    qDebug() << "Robot C Qty" << robotCQty;
    qDebug() << "Robot C Plan" << robotCPlan;

    QMessageBox::information(this, "Order Confirmation",
                             "Thank you for your order.",QMessageBox::Ok);

    // Accept the dialog
    accept();
}

void OrderWindow::on_cancelButton_clicked()
{
    reject();
}

void OrderWindow::setRobotASubtotal()
{
    if(robotAQty > 0)
    {
        // Get robotAPlan from ComboBox's selected plan's index
        robotAPlan = ui->robotAComboBox->currentIndex();

        // Calculate robotASubtotal depending on the plan selected
        switch(robotAPlan)
        {
        case 0 : robotASubtotal = robotAQty * (robotAPrice + planAPrice);
                 break;
        case 1 : robotASubtotal = robotAQty * (robotAPrice + planBPrice);
                 break;
        case 2 : robotASubtotal = robotAQty * (robotAPrice + planCPrice);
                 break;
        }
    }
    else
    {
        robotASubtotal = 0.00;
    }
    // Display updated subtotal on screen for changes made
    ui->robotASubtotalBox->setText(QString::number(robotASubtotal, 'f', 2));
}

void OrderWindow::on_robotASpinBox_valueChanged(int aQty)
{
    robotAQty = aQty;

    setRobotASubtotal();
}

void OrderWindow::on_robotAComboBox_currentIndexChanged(int index)
{
    // Update robotAPlan index value
    robotAPlan = index;

    // Display the robot's subtotal changes to screen.
    setRobotASubtotal();
}
