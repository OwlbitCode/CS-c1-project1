/********************************************************************************
** Form generated from reading UI file 'orderWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERWINDOW_H
#define UI_ORDERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_OrderWindow
{
public:
    QLabel *iRobotLabel;
    QGroupBox *robotAGroupBox;
    QLabel *robotANameLabel;
    QSpinBox *robotASpinBox;
    QComboBox *robotAComboBox;
    QLabel *robotAPicLabel;
    QLabel *robotAPriceLabel;
    QLineEdit *robotASubtotalBox;
    QFrame *HLineTwo;
    QGroupBox *addressGroup;
    QCheckBox *yesCheckBox;
    QLabel *sameAsLabel;
    QCheckBox *noCheckBox;
    QLineEdit *shippingAddressLineOne;
    QLineEdit *shippingAddressLineTwo;
    QLabel *shippingAddressLabel;
    QLabel *billingAddressLabel;
    QLineEdit *billingAddressLineOne;
    QLineEdit *billingAddressLineTwo;
    QFrame *addressVLine;
    QGroupBox *creditCardGroup;
    QLabel *creditCardTypeLabel;
    QComboBox *creditCardTypeBox;
    QLabel *creditCardNumberLabel;
    QLineEdit *creditCardNumberLine;
    QLabel *creditCardNameLabel;
    QLineEdit *creditCardNameLine;
    QLabel *creditCardExpireLabel;
    QLineEdit *dateMonthLine;
    QLabel *dateSlash;
    QLineEdit *dateYearLine;
    QLabel *creditCardCvvLabel;
    QLineEdit *cvvLine;
    QFrame *HLineOne;
    QPushButton *cancelButton;
    QPushButton *placeOrderButton;
    QLineEdit *subtotalLine;
    QLineEdit *shippingLine;
    QLabel *subtotalLabel;
    QLabel *taxLabel;
    QLabel *ShippingLabel;
    QLabel *totalPriceLabel;
    QLineEdit *taxLine;
    QLineEdit *totalPriceLine;
    QGroupBox *robotBGroupBox;
    QLabel *robotBNameLabel;
    QSpinBox *robotBSpinBox;
    QComboBox *robotBComboBox;
    QLabel *robotBPicLabel;
    QLabel *robotBPriceLabel;
    QLineEdit *robotBSubtotalBox;
    QGroupBox *robotCGroupBox;
    QLabel *robotCNameLabel;
    QSpinBox *robotCSpinBox;
    QComboBox *robotCComboBox;
    QLabel *robotCPicLabel;
    QLabel *robotCPriceLabel;
    QLineEdit *robotCSubtotalBox;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *OrderWindow)
    {
        if (OrderWindow->objectName().isEmpty())
            OrderWindow->setObjectName(QString::fromUtf8("OrderWindow"));
        OrderWindow->resize(620, 680);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OrderWindow->sizePolicy().hasHeightForWidth());
        OrderWindow->setSizePolicy(sizePolicy);
        OrderWindow->setMinimumSize(QSize(620, 680));
        OrderWindow->setMaximumSize(QSize(620, 680));
        iRobotLabel = new QLabel(OrderWindow);
        iRobotLabel->setObjectName(QString::fromUtf8("iRobotLabel"));
        iRobotLabel->setGeometry(QRect(10, 10, 600, 40));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        iRobotLabel->setFont(font);
        iRobotLabel->setAlignment(Qt::AlignCenter);
        robotAGroupBox = new QGroupBox(OrderWindow);
        robotAGroupBox->setObjectName(QString::fromUtf8("robotAGroupBox"));
        robotAGroupBox->setGeometry(QRect(10, 50, 600, 70));
        robotANameLabel = new QLabel(robotAGroupBox);
        robotANameLabel->setObjectName(QString::fromUtf8("robotANameLabel"));
        robotANameLabel->setGeometry(QRect(80, 25, 80, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        robotANameLabel->setFont(font1);
        robotASpinBox = new QSpinBox(robotAGroupBox);
        robotASpinBox->setObjectName(QString::fromUtf8("robotASpinBox"));
        robotASpinBox->setGeometry(QRect(450, 25, 42, 22));
        robotAComboBox = new QComboBox(robotAGroupBox);
        robotAComboBox->setObjectName(QString::fromUtf8("robotAComboBox"));
        robotAComboBox->setGeometry(QRect(225, 25, 210, 22));
        robotAPicLabel = new QLabel(robotAGroupBox);
        robotAPicLabel->setObjectName(QString::fromUtf8("robotAPicLabel"));
        robotAPicLabel->setGeometry(QRect(10, 10, 50, 50));
        robotAPriceLabel = new QLabel(robotAGroupBox);
        robotAPriceLabel->setObjectName(QString::fromUtf8("robotAPriceLabel"));
        robotAPriceLabel->setGeometry(QRect(150, 25, 65, 22));
        QFont font2;
        font2.setPointSize(8);
        robotAPriceLabel->setFont(font2);
        robotAPriceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        robotASubtotalBox = new QLineEdit(robotAGroupBox);
        robotASubtotalBox->setObjectName(QString::fromUtf8("robotASubtotalBox"));
        robotASubtotalBox->setGeometry(QRect(505, 25, 85, 22));
        robotASubtotalBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        robotASubtotalBox->setReadOnly(true);
        HLineTwo = new QFrame(OrderWindow);
        HLineTwo->setObjectName(QString::fromUtf8("HLineTwo"));
        HLineTwo->setGeometry(QRect(10, 515, 600, 20));
        HLineTwo->setFrameShape(QFrame::HLine);
        HLineTwo->setFrameShadow(QFrame::Sunken);
        addressGroup = new QGroupBox(OrderWindow);
        addressGroup->setObjectName(QString::fromUtf8("addressGroup"));
        addressGroup->setGeometry(QRect(10, 400, 600, 120));
        yesCheckBox = new QCheckBox(addressGroup);
        buttonGroup = new QButtonGroup(OrderWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(yesCheckBox);
        yesCheckBox->setObjectName(QString::fromUtf8("yesCheckBox"));
        yesCheckBox->setGeometry(QRect(470, 33, 45, 20));
        yesCheckBox->setChecked(true);
        yesCheckBox->setAutoExclusive(true);
        sameAsLabel = new QLabel(addressGroup);
        sameAsLabel->setObjectName(QString::fromUtf8("sameAsLabel"));
        sameAsLabel->setGeometry(QRect(320, 35, 140, 16));
        noCheckBox = new QCheckBox(addressGroup);
        buttonGroup->addButton(noCheckBox);
        noCheckBox->setObjectName(QString::fromUtf8("noCheckBox"));
        noCheckBox->setGeometry(QRect(520, 33, 45, 20));
        noCheckBox->setAutoExclusive(true);
        shippingAddressLineOne = new QLineEdit(addressGroup);
        shippingAddressLineOne->setObjectName(QString::fromUtf8("shippingAddressLineOne"));
        shippingAddressLineOne->setGeometry(QRect(320, 60, 270, 22));
        shippingAddressLineTwo = new QLineEdit(addressGroup);
        shippingAddressLineTwo->setObjectName(QString::fromUtf8("shippingAddressLineTwo"));
        shippingAddressLineTwo->setGeometry(QRect(320, 90, 270, 22));
        shippingAddressLabel = new QLabel(addressGroup);
        shippingAddressLabel->setObjectName(QString::fromUtf8("shippingAddressLabel"));
        shippingAddressLabel->setGeometry(QRect(320, 10, 250, 22));
        shippingAddressLabel->setFont(font1);
        billingAddressLabel = new QLabel(addressGroup);
        billingAddressLabel->setObjectName(QString::fromUtf8("billingAddressLabel"));
        billingAddressLabel->setGeometry(QRect(10, 10, 250, 22));
        billingAddressLabel->setFont(font1);
        billingAddressLineOne = new QLineEdit(addressGroup);
        billingAddressLineOne->setObjectName(QString::fromUtf8("billingAddressLineOne"));
        billingAddressLineOne->setGeometry(QRect(10, 60, 270, 22));
        billingAddressLineTwo = new QLineEdit(addressGroup);
        billingAddressLineTwo->setObjectName(QString::fromUtf8("billingAddressLineTwo"));
        billingAddressLineTwo->setGeometry(QRect(10, 90, 270, 22));
        addressVLine = new QFrame(addressGroup);
        addressVLine->setObjectName(QString::fromUtf8("addressVLine"));
        addressVLine->setGeometry(QRect(300, 10, 3, 100));
        addressVLine->setFrameShape(QFrame::VLine);
        addressVLine->setFrameShadow(QFrame::Sunken);
        creditCardGroup = new QGroupBox(OrderWindow);
        creditCardGroup->setObjectName(QString::fromUtf8("creditCardGroup"));
        creditCardGroup->setGeometry(QRect(10, 530, 600, 100));
        creditCardTypeLabel = new QLabel(creditCardGroup);
        creditCardTypeLabel->setObjectName(QString::fromUtf8("creditCardTypeLabel"));
        creditCardTypeLabel->setGeometry(QRect(10, 10, 120, 22));
        QFont font3;
        font3.setPointSize(10);
        creditCardTypeLabel->setFont(font3);
        creditCardTypeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        creditCardTypeBox = new QComboBox(creditCardGroup);
        creditCardTypeBox->addItem(QString());
        creditCardTypeBox->addItem(QString());
        creditCardTypeBox->setObjectName(QString::fromUtf8("creditCardTypeBox"));
        creditCardTypeBox->setGeometry(QRect(140, 10, 95, 22));
        creditCardNumberLabel = new QLabel(creditCardGroup);
        creditCardNumberLabel->setObjectName(QString::fromUtf8("creditCardNumberLabel"));
        creditCardNumberLabel->setGeometry(QRect(10, 40, 120, 22));
        creditCardNumberLabel->setFont(font3);
        creditCardNumberLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        creditCardNumberLine = new QLineEdit(creditCardGroup);
        creditCardNumberLine->setObjectName(QString::fromUtf8("creditCardNumberLine"));
        creditCardNumberLine->setGeometry(QRect(140, 40, 225, 22));
        creditCardNameLabel = new QLabel(creditCardGroup);
        creditCardNameLabel->setObjectName(QString::fromUtf8("creditCardNameLabel"));
        creditCardNameLabel->setGeometry(QRect(10, 70, 120, 22));
        creditCardNameLabel->setFont(font3);
        creditCardNameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        creditCardNameLine = new QLineEdit(creditCardGroup);
        creditCardNameLine->setObjectName(QString::fromUtf8("creditCardNameLine"));
        creditCardNameLine->setGeometry(QRect(140, 70, 225, 22));
        creditCardExpireLabel = new QLabel(creditCardGroup);
        creditCardExpireLabel->setObjectName(QString::fromUtf8("creditCardExpireLabel"));
        creditCardExpireLabel->setGeometry(QRect(375, 40, 120, 22));
        creditCardExpireLabel->setFont(font3);
        creditCardExpireLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dateMonthLine = new QLineEdit(creditCardGroup);
        dateMonthLine->setObjectName(QString::fromUtf8("dateMonthLine"));
        dateMonthLine->setGeometry(QRect(500, 40, 30, 22));
        dateMonthLine->setAlignment(Qt::AlignCenter);
        dateSlash = new QLabel(creditCardGroup);
        dateSlash->setObjectName(QString::fromUtf8("dateSlash"));
        dateSlash->setGeometry(QRect(535, 40, 16, 22));
        dateSlash->setFont(font3);
        dateYearLine = new QLineEdit(creditCardGroup);
        dateYearLine->setObjectName(QString::fromUtf8("dateYearLine"));
        dateYearLine->setGeometry(QRect(545, 40, 30, 22));
        dateYearLine->setAlignment(Qt::AlignCenter);
        creditCardCvvLabel = new QLabel(creditCardGroup);
        creditCardCvvLabel->setObjectName(QString::fromUtf8("creditCardCvvLabel"));
        creditCardCvvLabel->setGeometry(QRect(375, 70, 120, 22));
        creditCardCvvLabel->setFont(font3);
        creditCardCvvLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cvvLine = new QLineEdit(creditCardGroup);
        cvvLine->setObjectName(QString::fromUtf8("cvvLine"));
        cvvLine->setGeometry(QRect(500, 70, 40, 22));
        cvvLine->setAlignment(Qt::AlignCenter);
        HLineOne = new QFrame(OrderWindow);
        HLineOne->setObjectName(QString::fromUtf8("HLineOne"));
        HLineOne->setGeometry(QRect(10, 385, 600, 20));
        HLineOne->setFrameShape(QFrame::HLine);
        HLineOne->setFrameShadow(QFrame::Sunken);
        cancelButton = new QPushButton(OrderWindow);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(520, 640, 90, 28));
        cancelButton->setAutoDefault(false);
        placeOrderButton = new QPushButton(OrderWindow);
        placeOrderButton->setObjectName(QString::fromUtf8("placeOrderButton"));
        placeOrderButton->setGeometry(QRect(265, 640, 90, 28));
        placeOrderButton->setAutoDefault(false);
        subtotalLine = new QLineEdit(OrderWindow);
        subtotalLine->setObjectName(QString::fromUtf8("subtotalLine"));
        subtotalLine->setGeometry(QRect(515, 290, 85, 22));
        subtotalLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        subtotalLine->setReadOnly(true);
        shippingLine = new QLineEdit(OrderWindow);
        shippingLine->setObjectName(QString::fromUtf8("shippingLine"));
        shippingLine->setGeometry(QRect(515, 315, 85, 22));
        shippingLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        shippingLine->setReadOnly(true);
        subtotalLabel = new QLabel(OrderWindow);
        subtotalLabel->setObjectName(QString::fromUtf8("subtotalLabel"));
        subtotalLabel->setGeometry(QRect(340, 290, 170, 22));
        subtotalLabel->setFont(font3);
        subtotalLabel->setCursor(QCursor(Qt::ArrowCursor));
        subtotalLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        taxLabel = new QLabel(OrderWindow);
        taxLabel->setObjectName(QString::fromUtf8("taxLabel"));
        taxLabel->setGeometry(QRect(340, 340, 170, 22));
        taxLabel->setFont(font3);
        taxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ShippingLabel = new QLabel(OrderWindow);
        ShippingLabel->setObjectName(QString::fromUtf8("ShippingLabel"));
        ShippingLabel->setGeometry(QRect(340, 315, 170, 22));
        ShippingLabel->setFont(font3);
        ShippingLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        totalPriceLabel = new QLabel(OrderWindow);
        totalPriceLabel->setObjectName(QString::fromUtf8("totalPriceLabel"));
        totalPriceLabel->setGeometry(QRect(340, 365, 170, 22));
        totalPriceLabel->setFont(font1);
        totalPriceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        taxLine = new QLineEdit(OrderWindow);
        taxLine->setObjectName(QString::fromUtf8("taxLine"));
        taxLine->setGeometry(QRect(515, 340, 85, 22));
        taxLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        taxLine->setReadOnly(true);
        totalPriceLine = new QLineEdit(OrderWindow);
        totalPriceLine->setObjectName(QString::fromUtf8("totalPriceLine"));
        totalPriceLine->setGeometry(QRect(515, 365, 85, 22));
        totalPriceLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        totalPriceLine->setReadOnly(true);
        robotBGroupBox = new QGroupBox(OrderWindow);
        robotBGroupBox->setObjectName(QString::fromUtf8("robotBGroupBox"));
        robotBGroupBox->setGeometry(QRect(10, 130, 600, 70));
        robotBNameLabel = new QLabel(robotBGroupBox);
        robotBNameLabel->setObjectName(QString::fromUtf8("robotBNameLabel"));
        robotBNameLabel->setGeometry(QRect(80, 25, 80, 21));
        robotBNameLabel->setFont(font1);
        robotBSpinBox = new QSpinBox(robotBGroupBox);
        robotBSpinBox->setObjectName(QString::fromUtf8("robotBSpinBox"));
        robotBSpinBox->setGeometry(QRect(450, 25, 42, 22));
        robotBComboBox = new QComboBox(robotBGroupBox);
        robotBComboBox->setObjectName(QString::fromUtf8("robotBComboBox"));
        robotBComboBox->setGeometry(QRect(225, 25, 210, 22));
        robotBPicLabel = new QLabel(robotBGroupBox);
        robotBPicLabel->setObjectName(QString::fromUtf8("robotBPicLabel"));
        robotBPicLabel->setGeometry(QRect(10, 10, 50, 50));
        robotBPriceLabel = new QLabel(robotBGroupBox);
        robotBPriceLabel->setObjectName(QString::fromUtf8("robotBPriceLabel"));
        robotBPriceLabel->setGeometry(QRect(150, 25, 65, 22));
        robotBPriceLabel->setFont(font2);
        robotBPriceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        robotBSubtotalBox = new QLineEdit(robotBGroupBox);
        robotBSubtotalBox->setObjectName(QString::fromUtf8("robotBSubtotalBox"));
        robotBSubtotalBox->setGeometry(QRect(505, 25, 85, 22));
        robotBSubtotalBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        robotBSubtotalBox->setReadOnly(true);
        robotCGroupBox = new QGroupBox(OrderWindow);
        robotCGroupBox->setObjectName(QString::fromUtf8("robotCGroupBox"));
        robotCGroupBox->setGeometry(QRect(10, 210, 600, 70));
        robotCNameLabel = new QLabel(robotCGroupBox);
        robotCNameLabel->setObjectName(QString::fromUtf8("robotCNameLabel"));
        robotCNameLabel->setGeometry(QRect(80, 25, 80, 21));
        robotCNameLabel->setFont(font1);
        robotCSpinBox = new QSpinBox(robotCGroupBox);
        robotCSpinBox->setObjectName(QString::fromUtf8("robotCSpinBox"));
        robotCSpinBox->setGeometry(QRect(450, 25, 42, 22));
        robotCComboBox = new QComboBox(robotCGroupBox);
        robotCComboBox->setObjectName(QString::fromUtf8("robotCComboBox"));
        robotCComboBox->setGeometry(QRect(225, 25, 210, 22));
        robotCPicLabel = new QLabel(robotCGroupBox);
        robotCPicLabel->setObjectName(QString::fromUtf8("robotCPicLabel"));
        robotCPicLabel->setGeometry(QRect(10, 10, 50, 50));
        robotCPriceLabel = new QLabel(robotCGroupBox);
        robotCPriceLabel->setObjectName(QString::fromUtf8("robotCPriceLabel"));
        robotCPriceLabel->setGeometry(QRect(150, 25, 65, 22));
        robotCPriceLabel->setFont(font2);
        robotCPriceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        robotCSubtotalBox = new QLineEdit(robotCGroupBox);
        robotCSubtotalBox->setObjectName(QString::fromUtf8("robotCSubtotalBox"));
        robotCSubtotalBox->setGeometry(QRect(505, 25, 85, 22));
        robotCSubtotalBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        robotCSubtotalBox->setReadOnly(true);

        retranslateUi(OrderWindow);

        QMetaObject::connectSlotsByName(OrderWindow);
    } // setupUi

    void retranslateUi(QDialog *OrderWindow)
    {
        OrderWindow->setWindowTitle(QCoreApplication::translate("OrderWindow", "iRobot Order Form", nullptr));
#if QT_CONFIG(tooltip)
        OrderWindow->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        OrderWindow->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        iRobotLabel->setText(QCoreApplication::translate("OrderWindow", "iRobot Order Form", nullptr));
        robotAGroupBox->setTitle(QString());
        robotANameLabel->setText(QString());
        robotAPicLabel->setText(QString());
        robotAPriceLabel->setText(QString());
        robotASubtotalBox->setText(QString());
        addressGroup->setTitle(QString());
        yesCheckBox->setText(QCoreApplication::translate("OrderWindow", "Yes", nullptr));
        sameAsLabel->setText(QCoreApplication::translate("OrderWindow", "Same as biling address:", nullptr));
        noCheckBox->setText(QCoreApplication::translate("OrderWindow", "No", nullptr));
        shippingAddressLabel->setText(QCoreApplication::translate("OrderWindow", "Shipping Address", nullptr));
        billingAddressLabel->setText(QCoreApplication::translate("OrderWindow", "Billing Address", nullptr));
        billingAddressLineOne->setText(QString());
        creditCardGroup->setTitle(QString());
        creditCardTypeLabel->setText(QCoreApplication::translate("OrderWindow", "Credit Card : ", nullptr));
        creditCardTypeBox->setItemText(0, QCoreApplication::translate("OrderWindow", "VISA", nullptr));
        creditCardTypeBox->setItemText(1, QCoreApplication::translate("OrderWindow", "Mastercard", nullptr));

        creditCardNumberLabel->setText(QCoreApplication::translate("OrderWindow", "Card Number : ", nullptr));
        creditCardNameLabel->setText(QCoreApplication::translate("OrderWindow", "Name on Card : ", nullptr));
        creditCardExpireLabel->setText(QCoreApplication::translate("OrderWindow", "Date Expires : ", nullptr));
        dateMonthLine->setText(QString());
        dateSlash->setText(QCoreApplication::translate("OrderWindow", "/", nullptr));
        dateYearLine->setText(QString());
        creditCardCvvLabel->setText(QCoreApplication::translate("OrderWindow", "CVV : ", nullptr));
        cvvLine->setText(QString());
        cancelButton->setText(QCoreApplication::translate("OrderWindow", "Cancel", nullptr));
#if QT_CONFIG(whatsthis)
        placeOrderButton->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        placeOrderButton->setText(QCoreApplication::translate("OrderWindow", "Place Order", nullptr));
        shippingLine->setText(QString());
        subtotalLabel->setText(QCoreApplication::translate("OrderWindow", "Subtotal : ", nullptr));
        taxLabel->setText(QCoreApplication::translate("OrderWindow", "Tax (7.75%) : ", nullptr));
        ShippingLabel->setText(QCoreApplication::translate("OrderWindow", "Shipping & Handling : ", nullptr));
        totalPriceLabel->setText(QCoreApplication::translate("OrderWindow", "TOTAL PRICE : ", nullptr));
        robotBGroupBox->setTitle(QString());
        robotBNameLabel->setText(QString());
        robotBPicLabel->setText(QString());
        robotBPriceLabel->setText(QString());
        robotBSubtotalBox->setText(QString());
        robotCGroupBox->setTitle(QString());
        robotCNameLabel->setText(QString());
        robotCPicLabel->setText(QString());
        robotCPriceLabel->setText(QString());
        robotCSubtotalBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OrderWindow: public Ui_OrderWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERWINDOW_H
