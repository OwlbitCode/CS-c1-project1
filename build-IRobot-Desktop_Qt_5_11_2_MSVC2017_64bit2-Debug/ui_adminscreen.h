/********************************************************************************
** Form generated from reading UI file 'adminscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSCREEN_H
#define UI_ADMINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminScreen
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *pushButton;

    void setupUi(QDialog *adminScreen)
    {
        if (adminScreen->objectName().isEmpty())
            adminScreen->setObjectName(QStringLiteral("adminScreen"));
        adminScreen->resize(400, 300);
        buttonBox = new QDialogButtonBox(adminScreen);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(120, 220, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        pushButton = new QPushButton(adminScreen);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 60, 75, 23));

        retranslateUi(adminScreen);
        QObject::connect(buttonBox, SIGNAL(accepted()), adminScreen, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), adminScreen, SLOT(reject()));

        QMetaObject::connectSlotsByName(adminScreen);
    } // setupUi

    void retranslateUi(QDialog *adminScreen)
    {
        adminScreen->setWindowTitle(QApplication::translate("adminScreen", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("adminScreen", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminScreen: public Ui_adminScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSCREEN_H
