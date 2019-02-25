/********************************************************************************
** Form generated from reading UI file 'orderWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
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
            OrderWindow->setObjectName(QStringLiteral("OrderWindow"));
        OrderWindow->resize(620, 680);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OrderWindow->sizePolicy().hasHeightForWidth());
        OrderWindow->setSizePolicy(sizePolicy);
        OrderWindow->setMinimumSize(QSize(620, 680));
        OrderWindow->setMaximumSize(QSize(620, 680));
        iRobotLabel = new QLabel(OrderWindow);
        iRobotLabel->setObjectName(QStringLiteral("iRobotLabel"));
        iRobotLabel->setGeometry(QRect(10, 10, 600, 40));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        iRobotLabel->setFont(font);
        iRobotLabel->setAlignment(Qt::AlignCenter);
        robotAGroupBox = new QGroupBox(OrderWindow);
        robotAGroupBox->setObjectName(QStringLiteral("robotAGroupBox"));
        robotAGroupBox->setGeometry(QRect(10, 50, 600, 70));
        robotANameLabel = new QLabel(robotAGroupBox);
        robotANameLabel->setObjectName(QStringLiteral("robotANameLabel"));
        robotANameLabel->setGeometry(QRect(80, 25, 80, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        robotANameLabel->setFont(font1);
        robotASpinBox = new QSpinBox(robotAGroupBox);
        robotASpinBox->setObjectName(QStringLiteral("robotASpinBox"));
        robotASpinBox->setGeometry(QRect(450, 25, 42, 22));
        robotAComboBox = new QComboBox(robotAGroupBox);
        robotAComboBox->setObjectName(QStringLiteral("robotAComboBox"));
        robotAComboBox->setGeometry(QRect(225, 25, 210, 22));
        robotAPicLabel = new QLabel(robotAGroupBox);
        robotAPicLabel->setObjectName(QStringLiteral("robotAPicLabel"));
        robotAPicLabel->setGeometry(QRect(10, 10, 50, 50));
        robotAPriceLabel = new QLabel(robotAGroupBox);
        robotAPriceLabel->setObjectName(QStringLiteral("robotAPriceLabel"));
        robotAPriceLabel->setGeometry(QRect(150, 25, 65, 22));
        QFont font2;
        font2.setPointSize(8);
        robotAPriceLabel->setFont(font2);
        robotAPriceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        robotASubtotalBox = new QLineEdit(robotAGroupBox);
        robotASubtotalBox->setObjectName(QStringLiteral("robotASubtotalBox"));
        robotASubtotalBox->setGeometry(QRect(505, 25, 85, 22));
        robotASubtotalBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        robotASubtotalBox->setReadOnly(true);
        HLineTwo = new QFrame(OrderWindow);
        HLineTwo->setObjectName(QStringLiteral("HLineTwo"));
        HLineTwo->setGeometry(QRect(10, 515, 600, 20));
        HLineTwo->setFrameShape(QFrame::HLine);
        HLineTwo->setFrameShadow(QFrame::Sunken);
        addressGroup = new QGroupBox(OrderWindow);
        addressGroup->setObjectName(QStringLiteral("addressGroup"));
        addressGroup->setGeometry(QRect(10, 400, 600, 120));
        yesCheckBox = new QCheckBox(addressGroup);
        buttonGroup = new QButtonGroup(OrderWindow);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(yesCheckBox);
        yesCheckBox->setObjectName(QStringLiteral("yesCheckBox"));
        yesCheckBox->setGeometry(QRect(470, 33, 45, 20));
        yesCheckBox->setChecked(true);
        yesCheckBox->setAutoExclusive(true);
        sameAsLabel = new QLabel(addressGroup);
        sameAsLabel->setObjectName(QStringLiteral("sameAsLabel"));
        sameAsLabel->setGeometry(QRect(320, 35, 140, 16));
        noCheckBox = new QCheckBox(addressGroup);
        buttonGroup->addButton(noCheckBox);
        noCheckBox->setObjectName(QStringLiteral("noCheckBox"));
        noCheckBox->setGeometry(QRect(520, 33, 45, 20));
        noCheckBox->setAutoExclusive(true);
        shippingAddressLineOne = new QLineEdit(addressGroup);
        shippingAddressLineOne->setObjectName(QStringLiteral("shippingAddressLineOne"));
        shippingAddressLineOne->setGeometry(QRect(320, 60, 270, 22));
        shippingAddressLineTwo = new QLineEdit(addressGroup);
        shippingAddressLineTwo->setObjectName(QStringLiteral("shippingAddressLineTwo"));
        shippingAddressLineTwo->setGeometry(QRect(320, 90, 270, 22));
        shippingAddressLabel = new QLabel(addressGroup);
        shippingAddressLabel->setObjectName(QStringLiteral("shippingAddressLabel"));
        shippingAddressLabel->setGeometry(QRect(320, 10, 250, 22));
        shippingAddressLabel->setFont(font1);
        billingAddressLabel = new QLabel(addressGroup);
        billingAddressLabel->setObjectName(QStringLiteral("billingAddressLabel"));
        billingAddressLabel->setGeometry(QRect(10, 10, 250, 22));
        billingAddressLabel->setFont(font1);
        billingAddressLineOne = new QLineEdit(addressGroup);
        billingAddressLineOne->setObjectName(QStringLiteral("billingAddressLineOne"));
        billingAddressLineOne->setGeometry(QRect(10, 60, 270, 22));
        billingAddressLineTwo = new QLineEdit(addressGroup);
        billingAddressLineTwo->setObjectName(QStringLiteral("billingAddressLineTwo"));
        billingAddressLineTwo->setGeometry(QRect(10, 90, 270, 22));
        addressVLine = new QFrame(addressGroup);
        addressVLine->setObjectName(QStringLiteral("addressVLine"));
        addressVLine->setGeometry(QRect(300, 10, 3, 100));
        addressVLine->setFrameShape(QFrame::VLine);
        addressVLine->setFrameShadow(QFrame::Sunken);
        creditCardGroup = new QGroupBox(OrderWindow);
        creditCardGroup->setObjectName(QStringLiteral("creditCardGroup"));
        creditCardGroup->setGeometry(QRect(10, 530, 600, 100));
        creditCardTypeLabel = new QLabel(creditCardGroup);
        creditCardTypeLabel->setObjectName(QStringLiteral("creditCardTypeLabel"));
        creditCardTypeLabel->setGeometry(QRect(10, 10, 120, 22));
        QFont font3;
        font3.setPointSize(10);
        creditCardTypeLabel->setFont(font3);
        creditCardTypeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        creditCardTypeBox = new QComboBox(creditCardGroup);
        creditCardTypeBox->addItem(QString());
        creditCardTypeBox->addItem(QString());
        creditCardTypeBox->setObjectName(QStringLiteral("creditCardTypeBox"));
        creditCardTypeBox->setGeometry(QRect(140, 10, 95, 22));
        creditCardNumberLabel = new QLabel(creditCardGroup);
        creditCardNumberLabel->setObjectName(QStringLiteral("creditCardNumberLabel"));
        creditCardNumberLabel->setGeometry(QRect(10, 40, 120, 22));
        creditCardNumberLabel->setFont(font3);
        creditCardNumberLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        creditCardNumberLine = new QLineEdit(creditCardGroup);
        creditCardNumberLine->setObjectName(QStringLiteral("creditCardNumberLine"));
        creditCardNumberLine->setGeometry(QRect(140, 40, 225, 22));
        creditCardNameLabel = new QLabel(creditCardGroup);
        creditCardNameLabel->setObjectName(QStringLiteral("creditCardNameLabel"));
        creditCardNameLabel->setGeometry(QRect(10, 70, 120, 22));
        creditCardNameLabel->setFont(font3);
        creditCardNameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        creditCardNameLine = new QLineEdit(creditCardGroup);
        creditCardNameLine->setObjectName(QStringLiteral("creditCardNameLine"));
        creditCardNameLine->setGeometry(QRect(140, 70, 225, 22));
        creditCardExpireLabel = new QLabel(creditCardGroup);
        creditCardExpireLabel->setObjectName(QStringLiteral("creditCardExpireLabel"));
        creditCardExpireLabel->setGeometry(QRect(375, 40, 120, 22));
        creditCardExpireLabel->setFont(font3);
        creditCardExpireLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dateMonthLine = new QLineEdit(creditCardGroup);
        dateMonthLine->setObjectName(QStringLiteral("dateMonthLine"));
        dateMonthLine->setGeometry(QRect(500, 40, 30, 22));
        dateMonthLine->setAlignment(Qt::AlignCenter);
        dateSlash = new QLabel(creditCardGroup);
        dateSlash->setObjectName(QStringLiteral("dateSlash"));
        dateSlash->setGeometry(QRect(535, 40, 16, 22));
        dateSlash->setFont(font3);
        dateYearLine = new QLineEdit(creditCardGroup);
        dateYearLine->setObjectName(QStringLiteral("dateYearLine"));
        dateYearLine->setGeometry(QRect(545, 40, 30, 22));
        dateYearLine->setAlignment(Qt::AlignCenter);
        creditCardCvvLabel = new QLabel(creditCardGroup);
        creditCardCvvLabel->setObjectName(QStringLiteral("creditCardCvvLabel"));
        creditCardCvvLabel->setGeometry(QRect(375, 70, 120, 22));
        creditCardCvvLabel->setFont(font3);
        creditCardCvvLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cvvLine = new QLineEdit(creditCardGroup);
        cvvLine->setObjectName(QStringLiteral("cvvLine"));
        cvvLine->setGeometry(QRect(500, 70, 40, 22));
        cvvLine->setAlignment(Qt::AlignCenter);
        HLineOne = new QFrame(OrderWindow);
        HLineOne->setObjectName(QStringLiteral("HLineOne"));
        HLineOne->setGeometry(QRect(10, 385, 600, 20));
        HLineOne->setFrameShape(QFrame::HLine);
        HLineOne->setFrameShadow(QFrame::Sunken);
        cancelButton = new QPushButton(OrderWindow);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(520, 640, 90, 28));
        cancelButton->setAutoDefault(false);
        placeOrderButton = new QPushButton(OrderWindow);
        placeOrderButton->setObjectName(QStringLiteral("placeOrderButton"));
        placeOrderButton->setGeometry(QRect(265, 640, 90, 28));
        placeOrderButton->setAutoDefault(false);
        subtotalLine = new QLineEdit(OrderWindow);
        subtotalLine->setObjectName(QStringLiteral("subtotalLine"));
        subtotalLine->setGeometry(QRect(515, 290, 85, 22));
        subtotalLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        subtotalLine->setReadOnly(true);
        shippingLine = new QLineEdit(OrderWindow);
        shippingLine->setObjectName(QStringLiteral("shippingLine"));
        shippingLine->setGeometry(QRect(515, 315, 85, 22));
        shippingLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        shippingLine->setReadOnly(true);
        subtotalLabel = new QLabel(OrderWindow);
        subtotalLabel->setObjectName(QStringLiteral("subtotalLabel"));
        subtotalLabel->setGeometry(QRect(340, 290, 170, 22));
        subtotalLabel->setFont(font3);
        subtotalLabel->setCursor(QCursor(Qt::ArrowCursor));
        subtotalLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        taxLabel = new QLabel(OrderWindow);
        taxLabel->setObjectName(QStringLiteral("taxLabel"));
        taxLabel->setGeometry(QRect(340, 340, 170, 22));
        taxLabel->setFont(font3);
        taxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ShippingLabel = new QLabel(OrderWindow);
        ShippingLabel->setObjectName(QStringLiteral("ShippingLabel"));
        ShippingLabel->setGeometry(QRect(340, 315, 170, 22));
        ShippingLabel->setFont(font3);
        ShippingLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        totalPriceLabel = new QLabel(OrderWindow);
        totalPriceLabel->setObjectName(QStringLiteral("totalPriceLabel"));
        totalPriceLabel->setGeometry(QRect(340, 365, 170, 22));
        totalPriceLabel->setFont(font1);
        totalPriceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        taxLine = new QLineEdit(OrderWindow);
        taxLine->setObjectName(QStringLiteral("taxLine"));
        taxLine->setGeometry(QRect(515, 340, 85, 22));
        taxLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        taxLine->setReadOnly(true);
        totalPriceLine = new QLineEdit(OrderWindow);
        totalPriceLine->setObjectName(QStringLiteral("totalPriceLine"));
        totalPriceLine->setGeometry(QRect(515, 365, 85, 22));
        totalPriceLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        totalPriceLine->setReadOnly(true);
        robotBGroupBox = new QGroupBox(OrderWindow);
        robotBGroupBox->setObjectName(QStringLiteral("robotBGroupBox"));
        robotBGroupBox->setGeometry(QRect(10, 130, 600, 70));
        robotBNameLabel = new QLabel(robotBGroupBox);
        robotBNameLabel->setObjectName(QStringLiteral("robotBNameLabel"));
        robotBNameLabel->setGeometry(QRect(80, 25, 80, 21));
        robotBNameLabel->setFont(font1);
        robotBSpinBox = new QSpinBox(robotBGroupBox);
        robotBSpinBox->setObjectName(QStringLiteral("robotBSpinBox"));
        robotBSpinBox->setGeometry(QRect(450, 25, 42, 22));
        robotBComboBox = new QComboBox(robotBGroupBox);
        robotBComboBox->setObjectName(QStringLiteral("robotBComboBox"));
        robotBComboBox->setGeometry(QRect(225, 25, 210, 22));
        robotBPicLabel = new QLabel(robotBGroupBox);
        robotBPicLabel->setObjectName(QStringLiteral("robotBPicLabel"));
        robotBPicLabel->setGeometry(QRect(10, 10, 50, 50));
        robotBPriceLabel = new QLabel(robotBGroupBox);
        robotBPriceLabel->setObjectName(QStringLiteral("robotBPriceLabel"));
        robotBPriceLabel->setGeometry(QRect(150, 25, 65, 22));
        robotBPriceLabel->setFont(font2);
        robotBPriceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        robotBSubtotalBox = new QLineEdit(robotBGroupBox);
        robotBSubtotalBox->setObjectName(QStringLiteral("robotBSubtotalBox"));
        robotBSubtotalBox->setGeometry(QRect(505, 25, 85, 22));
        robotBSubtotalBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        robotBSubtotalBox->setReadOnly(true);
        robotCGroupBox = new QGroupBox(OrderWindow);
        robotCGroupBox->setObjectName(QStringLiteral("robotCGroupBox"));
        robotCGroupBox->setGeometry(QRect(10, 210, 600, 70));
        robotCNameLabel = new QLabel(robotCGroupBox);
        robotCNameLabel->setObjectName(QStringLiteral("robotCNameLabel"));
        robotCNameLabel->setGeometry(QRect(80, 25, 80, 21));
        robotCNameLabel->setFont(font1);
        robotCSpinBox = new QSpinBox(robotCGroupBox);
        robotCSpinBox->setObjectName(QStringLiteral("robotCSpinBox"));
        robotCSpinBox->setGeometry(QRect(450, 25, 42, 22));
        robotCComboBox = new QComboBox(robotCGroupBox);
        robotCComboBox->setObjectName(QStringLiteral("robotCComboBox"));
        robotCComboBox->setGeometry(QRect(225, 25, 210, 22));
        robotCPicLabel = new QLabel(robotCGroupBox);
        robotCPicLabel->setObjectName(QStringLiteral("robotCPicLabel"));
        robotCPicLabel->setGeometry(QRect(10, 10, 50, 50));
        robotCPriceLabel = new QLabel(robotCGroupBox);
        robotCPriceLabel->setObjectName(QStringLiteral("robotCPriceLabel"));
        robotCPriceLabel->setGeometry(QRect(150, 25, 65, 22));
        robotCPriceLabel->setFont(font2);
        robotCPriceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        robotCSubtotalBox = new QLineEdit(robotCGroupBox);
        robotCSubtotalBox->setObjectName(QStringLiteral("robotCSubtotalBox"));
        robotCSubtotalBox->setGeometry(QRect(505, 25, 85, 22));
        robotCSubtotalBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        robotCSubtotalBox->setReadOnly(true);

        retranslateUi(OrderWindow);

        QMetaObject::connectSlotsByName(OrderWindow);
    } // setupUi

    void retranslateUi(QDialog *OrderWindow)
    {
        OrderWindow->setWindowTitle(QApplication::translate("OrderWindow", "iRobot Order Form", nullptr));
#ifndef QT_NO_TOOLTIP
        OrderWindow->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        OrderWindow->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        iRobotLabel->setText(QApplication::translate("OrderWindow", "iRobot Order Form", nullptr));
        robotAGroupBox->setTitle(QString());
        robotANameLabel->setText(QString());
        robotAPicLabel->setText(QString());
        robotAPriceLabel->setText(QString());
        robotASubtotalBox->setText(QString());
        addressGroup->setTitle(QString());
        yesCheckBox->setText(QApplication::translate("OrderWindow", "Yes", nullptr));
        sameAsLabel->setText(QApplication::translate("OrderWindow", "Same as biling address:", nullptr));
        noCheckBox->setText(QApplication::translate("OrderWindow", "No", nullptr));
        shippingAddressLabel->setText(QApplication::translate("OrderWindow", "Shipping Address", nullptr));
        billingAddressLabel->setText(QApplication::translate("OrderWindow", "Billing Address", nullptr));
        billingAddressLineOne->setText(QString());
        creditCardGroup->setTitle(QString());
        creditCardTypeLabel->setText(QApplication::translate("OrderWindow", "Credit Card : ", nullptr));
        creditCardTypeBox->setItemText(0, QApplication::translate("OrderWindow", "VISA", nullptr));
        creditCardTypeBox->setItemText(1, QApplication::translate("OrderWindow", "Mastercard", nullptr));

        creditCardNumberLabel->setText(QApplication::translate("OrderWindow", "Card Number : ", nullptr));
        creditCardNameLabel->setText(QApplication::translate("OrderWindow", "Name on Card : ", nullptr));
        creditCardExpireLabel->setText(QApplication::translate("OrderWindow", "Date Expires : ", nullptr));
        dateMonthLine->setText(QString());
        dateSlash->setText(QApplication::translate("OrderWindow", "/", nullptr));
        dateYearLine->setText(QString());
        creditCardCvvLabel->setText(QApplication::translate("OrderWindow", "CVV : ", nullptr));
        cvvLine->setText(QString());
        cancelButton->setText(QApplication::translate("OrderWindow", "Cancel", nullptr));
#ifndef QT_NO_WHATSTHIS
        placeOrderButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        placeOrderButton->setText(QApplication::translate("OrderWindow", "Place Order", nullptr));
        shippingLine->setText(QString());
        subtotalLabel->setText(QApplication::translate("OrderWindow", "Subtotal : ", nullptr));
        taxLabel->setText(QApplication::translate("OrderWindow", "Tax (7.75%) : ", nullptr));
        ShippingLabel->setText(QApplication::translate("OrderWindow", "Shipping & Handling : ", nullptr));
        totalPriceLabel->setText(QApplication::translate("OrderWindow", "TOTAL PRICE : ", nullptr));
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
