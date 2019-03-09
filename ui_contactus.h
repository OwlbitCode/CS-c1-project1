/********************************************************************************
** Form generated from reading UI file 'contactus.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTUS_H
#define UI_CONTACTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContactUs
{
public:
    QTextEdit *textEdit;
    QComboBox *comboBox;
    QTextEdit *custEditBox;
    QPushButton *submit;
    QPushButton *cancel;
    QGroupBox *groupBox;
    QLineEdit *name;
    QLabel *nameLabel;
    QLabel *emailLabel;
    QLineEdit *email;
    QLabel *briefMessageLabel;

    void setupUi(QWidget *ContactUs)
    {
        if (ContactUs->objectName().isEmpty())
            ContactUs->setObjectName(QString::fromUtf8("ContactUs"));
        ContactUs->resize(400, 300);
        textEdit = new QTextEdit(ContactUs);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 20, 181, 41));
        textEdit->setReadOnly(true);
        comboBox = new QComboBox(ContactUs);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 70, 171, 31));
        custEditBox = new QTextEdit(ContactUs);
        custEditBox->setObjectName(QString::fromUtf8("custEditBox"));
        custEditBox->setGeometry(QRect(30, 200, 341, 61));
        submit = new QPushButton(ContactUs);
        submit->setObjectName(QString::fromUtf8("submit"));
        submit->setGeometry(QRect(120, 270, 75, 23));
        cancel = new QPushButton(ContactUs);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(310, 270, 75, 23));
        groupBox = new QGroupBox(ContactUs);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 120, 361, 51));
        name = new QLineEdit(groupBox);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(10, 30, 151, 16));
        nameLabel = new QLabel(groupBox);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(10, 10, 101, 16));
        emailLabel = new QLabel(groupBox);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));
        emailLabel->setGeometry(QRect(190, 10, 81, 16));
        email = new QLineEdit(groupBox);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(190, 30, 151, 16));
        briefMessageLabel = new QLabel(ContactUs);
        briefMessageLabel->setObjectName(QString::fromUtf8("briefMessageLabel"));
        briefMessageLabel->setGeometry(QRect(30, 170, 331, 21));

        retranslateUi(ContactUs);

        QMetaObject::connectSlotsByName(ContactUs);
    } // setupUi

    void retranslateUi(QWidget *ContactUs)
    {
        ContactUs->setWindowTitle(QApplication::translate("ContactUs", "Contact Us", nullptr));
        textEdit->setHtml(QApplication::translate("ContactUs", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Help us narrrow down your problem by selecting a field below? </p></body></html>", nullptr));
        comboBox->setItemText(0, QApplication::translate("ContactUs", "Request more info", nullptr));
        comboBox->setItemText(1, QApplication::translate("ContactUs", "I never got my Robot? ", nullptr));
        comboBox->setItemText(2, QApplication::translate("ContactUs", "Problem with iRobot?  ", nullptr));
        comboBox->setItemText(3, QApplication::translate("ContactUs", "Other", nullptr));

        submit->setText(QApplication::translate("ContactUs", "Submit", nullptr));
        cancel->setText(QApplication::translate("ContactUs", "Cancel", nullptr));
        groupBox->setTitle(QString());
        name->setText(QString());
        nameLabel->setText(QApplication::translate("ContactUs", "Enter Full Name*", nullptr));
        emailLabel->setText(QApplication::translate("ContactUs", "Enter Email*", nullptr));
        email->setText(QString());
        briefMessageLabel->setText(QApplication::translate("ContactUs", "Leave a Brief Message explaining your problems/questions:  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContactUs: public Ui_ContactUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTUS_H
