#include "productWindow.h"
#include "ui_productWindow.h"
#include "orderWindow.h"
#include <QDebug>

ProductWindow::ProductWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    /************************************************************
     * SET ROBOT A DISPLAY
     ************************************************************/
    // Set robot A name in label
    ui->robotATextLabel->setText(robotAName);

    // Create QPixmap object for robot A
    QPixmap robotAJpg(":/images/robotA.jpg");

    // Link object robotAJpg to the robotAImage labelBox
    ui->robotAImage->setPixmap(robotAJpg.scaled(150,175));

    ui->robotAPriceLabel->setText("$ " +
                                  QString::number(robotAPrice, 'f', 2));

    /************************************************************
     * SET ROBOT B DISPLAY
     ************************************************************/
    // Set robot B name in label
    ui->robotBTextLabel->setText(robotBName);

    // Create QPixmap object for robot B
    QPixmap robotBJpg(":/images/robotB.jpg");

    // Link object robotBJpg to the robotBImage labelBox
    ui->robotBImage->setPixmap(robotBJpg.scaled(150,175));

    ui->robotBPriceLabel->setText("$ " + QString::number(robotBPrice, 'f', 2));

    /************************************************************
     * SET ROBOT C DISPLAY
     ************************************************************/
    // Set robot C name in label
    ui->robotCTextLabel->setText(robotCName);

    // Create QPixmap object for robot C
    QPixmap robotCJpg(":/images/robotC.jpg");
    // Link object robotCJpg to the robotCImage labelBox
    ui->robotCImage->setPixmap(robotCJpg.scaled(150,175));

    ui->robotCPriceLabel->setText("$ " +
                                  QString::number(robotCPrice, 'f', 2));

    /************************************************************
     * SET MAINTENANCE PLAN DISPLAY
     ************************************************************/
    ui->planALabel->setText(planAName);
    ui->planAPriceLabel->setText("$ " +
                                 QString::number(planAPrice, 'f', 2));

    ui->planBLabel->setText(planBName);
    ui->planBPriceLabel->setText("$ " +
                                 QString::number(planBPrice, 'f', 2));

    ui->planCLabel->setText(planCName);
    ui->planCPriceLabel->setText("$ " +
                                 QString::number(planCPrice, 'f', 2));

}

ProductWindow::~ProductWindow()
{
    delete ui;
}

double ProductWindow::getRobotAPrice() const
{
    return robotAPrice;
}

double ProductWindow::getPlanAPrice() const
{
    return planAPrice;
}

double ProductWindow::getRobotBPrice() const
{
    return robotBPrice;
}

double ProductWindow::getPlanBPrice() const
{
    return planBPrice;
}

double ProductWindow::getRobotCPrice() const
{
    return robotCPrice;
}

double ProductWindow::getPlanCPrice() const
{
    return planCPrice;
}

void ProductWindow::on_robotAPushButton_clicked()
{
    qDebug() << "The Robot A Purchase Button has been clicked.";

    OrderWindow * orderWindow = new OrderWindow;
    orderWindow->exec();
}

void ProductWindow::on_robotBPushButton_clicked()
{
    qDebug() << "The Robot B Purchase Button has been clicked.";

    OrderWindow * orderWindow = new OrderWindow;
    orderWindow->exec();
}

void ProductWindow::on_robotCPushButton_clicked()
{
    qDebug() << "The Robot C Purchase Button has been clicked.";

    OrderWindow * orderWindow = new OrderWindow;
    orderWindow->exec();
}
