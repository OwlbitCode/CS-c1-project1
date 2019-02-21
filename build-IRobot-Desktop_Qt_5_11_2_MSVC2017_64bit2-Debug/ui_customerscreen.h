/********************************************************************************
** Form generated from reading UI file 'customerscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERSCREEN_H
#define UI_CUSTOMERSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CustomerScreen
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *CustomerScreen)
    {
        if (CustomerScreen->objectName().isEmpty())
            CustomerScreen->setObjectName(QStringLiteral("CustomerScreen"));
        CustomerScreen->resize(400, 300);
        buttonBox = new QDialogButtonBox(CustomerScreen);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(110, 230, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(CustomerScreen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 90, 101, 16));

        retranslateUi(CustomerScreen);
        QObject::connect(buttonBox, SIGNAL(accepted()), CustomerScreen, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CustomerScreen, SLOT(reject()));

        QMetaObject::connectSlotsByName(CustomerScreen);
    } // setupUi

    void retranslateUi(QDialog *CustomerScreen)
    {
        CustomerScreen->setWindowTitle(QApplication::translate("CustomerScreen", "Dialog", nullptr));
        label->setText(QApplication::translate("CustomerScreen", "Add Stuff here", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerScreen: public Ui_CustomerScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERSCREEN_H
