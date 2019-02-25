/********************************************************************************
** Form generated from reading UI file 'custguarantee.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTGUARANTEE_H
#define UI_CUSTGUARANTEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_custGuarantee
{
public:
    QTextEdit *MoneyBackG;
    QPushButton *contactUs;
    QPushButton *main;

    void setupUi(QWidget *custGuarantee)
    {
        if (custGuarantee->objectName().isEmpty())
            custGuarantee->setObjectName(QStringLiteral("custGuarantee"));
        custGuarantee->resize(674, 485);
        MoneyBackG = new QTextEdit(custGuarantee);
        MoneyBackG->setObjectName(QStringLiteral("MoneyBackG"));
        MoneyBackG->setGeometry(QRect(60, 20, 531, 331));
        MoneyBackG->setReadOnly(true);
        contactUs = new QPushButton(custGuarantee);
        contactUs->setObjectName(QStringLiteral("contactUs"));
        contactUs->setGeometry(QRect(80, 390, 131, 23));
        main = new QPushButton(custGuarantee);
        main->setObjectName(QStringLiteral("main"));
        main->setGeometry(QRect(350, 390, 131, 23));

        retranslateUi(custGuarantee);

        QMetaObject::connectSlotsByName(custGuarantee);
    } // setupUi

    void retranslateUi(QWidget *custGuarantee)
    {
        custGuarantee->setWindowTitle(QApplication::translate("custGuarantee", "Customer Guarantee", nullptr));
        MoneyBackG->setHtml(QApplication::translate("custGuarantee", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#3a65ff;\">90 Day Money Back Guarantee! </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5a5a5a;\">Sleep comfortably knowing that if you are not 100% satisfied with your new robot, you have 90 days to return the robot back to us. You can do this by selecting the &quot;contact us&quot;  button below!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#5a5a5a;\"><br /></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#0055ff;\">Return Procedure</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5a5a5a;\">Simply click the &quot;contact&quot; us button below and let us know the reason why you want a return. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#5a5a5a;\"><br /></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#0055ff;\">Our Promise</span></p>\n"
"<p style=\" margin-top:12px; margin-"
                        "bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#888888;\">iRobots is dedicated to the design and manufacture of our highly functional  robots with 100% effectiveness in detecting bombs.We just know that you are going to love your robot and we guarantee customer satisfaction 100%. However, we promise that if you are not 100% happy with your robot, our team will help  make your return easy.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; color:#888888;\"><br /></p></body></html>", nullptr));
        contactUs->setText(QApplication::translate("custGuarantee", "Contact us ", nullptr));
        main->setText(QApplication::translate("custGuarantee", "Return to Main", nullptr));
    } // retranslateUi

};

namespace Ui {
    class custGuarantee: public Ui_custGuarantee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTGUARANTEE_H
