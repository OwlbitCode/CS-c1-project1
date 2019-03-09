/********************************************************************************
** Form generated from reading UI file 'productWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTWINDOW_H
#define UI_PRODUCTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *robotAGroupBox;
    QLabel *robotATextLabel;
    QLabel *robotAImage;
    QTextBrowser *robotATextBrowser;
    QPushButton *robotAPushButton;
    QLabel *robotAPriceLabel;
    QGroupBox *robotBGroupBox;
    QLabel *robotBTextLabel;
    QLabel *robotBImage;
    QTextBrowser *robotBTextBrowser;
    QPushButton *robotBPushButton;
    QLabel *robotBPriceLabel;
    QGroupBox *robotCGroupBox;
    QLabel *robotCTextLabel;
    QLabel *robotCImage;
    QTextBrowser *robotCTextBrowser;
    QPushButton *robotCPushButton;
    QLabel *robotCPriceLabel;
    QGroupBox *maintancePlanGroupBox;
    QLabel *maintenancePlanLabel;
    QGroupBox *planAGroupBox;
    QLabel *planALabel;
    QTextEdit *planATextBox;
    QLabel *planAPriceLabel;
    QGroupBox *planBGroupBox;
    QLabel *planBLabel;
    QTextEdit *planBTextBox;
    QLabel *planBPriceLabel;
    QGroupBox *planCGroupBox;
    QLabel *planCLabel;
    QTextEdit *planCTextBox;
    QLabel *planCPriceLabel;
    QFrame *line;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(775, 800);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(775, 800));
        Widget->setMaximumSize(QSize(775, 800));
        Widget->setLayoutDirection(Qt::LeftToRight);
        robotAGroupBox = new QGroupBox(Widget);
        robotAGroupBox->setObjectName(QString::fromUtf8("robotAGroupBox"));
        robotAGroupBox->setGeometry(QRect(10, 10, 245, 575));
        sizePolicy.setHeightForWidth(robotAGroupBox->sizePolicy().hasHeightForWidth());
        robotAGroupBox->setSizePolicy(sizePolicy);
        robotAGroupBox->setAlignment(Qt::AlignCenter);
        robotATextLabel = new QLabel(robotAGroupBox);
        robotATextLabel->setObjectName(QString::fromUtf8("robotATextLabel"));
        robotATextLabel->setGeometry(QRect(10, 10, 225, 28));
        sizePolicy.setHeightForWidth(robotATextLabel->sizePolicy().hasHeightForWidth());
        robotATextLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        robotATextLabel->setFont(font);
        robotATextLabel->setAlignment(Qt::AlignCenter);
        robotATextLabel->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard);
        robotAImage = new QLabel(robotAGroupBox);
        robotAImage->setObjectName(QString::fromUtf8("robotAImage"));
        robotAImage->setGeometry(QRect(47, 50, 150, 175));
        sizePolicy.setHeightForWidth(robotAImage->sizePolicy().hasHeightForWidth());
        robotAImage->setSizePolicy(sizePolicy);
        robotAImage->setMinimumSize(QSize(150, 175));
        robotAImage->setScaledContents(true);
        robotAImage->setAlignment(Qt::AlignCenter);
        robotATextBrowser = new QTextBrowser(robotAGroupBox);
        robotATextBrowser->setObjectName(QString::fromUtf8("robotATextBrowser"));
        robotATextBrowser->setGeometry(QRect(10, 235, 225, 260));
        sizePolicy.setHeightForWidth(robotATextBrowser->sizePolicy().hasHeightForWidth());
        robotATextBrowser->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        robotATextBrowser->setFont(font1);
        robotATextBrowser->setAutoFillBackground(false);
        robotATextBrowser->setFrameShadow(QFrame::Sunken);
        robotAPushButton = new QPushButton(robotAGroupBox);
        robotAPushButton->setObjectName(QString::fromUtf8("robotAPushButton"));
        robotAPushButton->setGeometry(QRect(50, 530, 147, 35));
        sizePolicy.setHeightForWidth(robotAPushButton->sizePolicy().hasHeightForWidth());
        robotAPushButton->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(12);
        robotAPushButton->setFont(font2);
        robotAPriceLabel = new QLabel(robotAGroupBox);
        robotAPriceLabel->setObjectName(QString::fromUtf8("robotAPriceLabel"));
        robotAPriceLabel->setGeometry(QRect(10, 505, 225, 20));
        robotAPriceLabel->setFont(font1);
        robotAPriceLabel->setAlignment(Qt::AlignCenter);
        robotBGroupBox = new QGroupBox(Widget);
        robotBGroupBox->setObjectName(QString::fromUtf8("robotBGroupBox"));
        robotBGroupBox->setGeometry(QRect(265, 10, 245, 575));
        sizePolicy.setHeightForWidth(robotBGroupBox->sizePolicy().hasHeightForWidth());
        robotBGroupBox->setSizePolicy(sizePolicy);
        robotBTextLabel = new QLabel(robotBGroupBox);
        robotBTextLabel->setObjectName(QString::fromUtf8("robotBTextLabel"));
        robotBTextLabel->setGeometry(QRect(10, 10, 225, 28));
        robotBTextLabel->setFont(font);
        robotBTextLabel->setAlignment(Qt::AlignCenter);
        robotBImage = new QLabel(robotBGroupBox);
        robotBImage->setObjectName(QString::fromUtf8("robotBImage"));
        robotBImage->setGeometry(QRect(47, 50, 150, 175));
        robotBImage->setScaledContents(true);
        robotBImage->setIndent(-1);
        robotBTextBrowser = new QTextBrowser(robotBGroupBox);
        robotBTextBrowser->setObjectName(QString::fromUtf8("robotBTextBrowser"));
        robotBTextBrowser->setGeometry(QRect(10, 235, 225, 260));
        robotBTextBrowser->setFont(font1);
        robotBPushButton = new QPushButton(robotBGroupBox);
        robotBPushButton->setObjectName(QString::fromUtf8("robotBPushButton"));
        robotBPushButton->setGeometry(QRect(50, 530, 150, 35));
        robotBPushButton->setFont(font2);
        robotBPriceLabel = new QLabel(robotBGroupBox);
        robotBPriceLabel->setObjectName(QString::fromUtf8("robotBPriceLabel"));
        robotBPriceLabel->setGeometry(QRect(10, 505, 225, 20));
        robotBPriceLabel->setFont(font1);
        robotBPriceLabel->setAlignment(Qt::AlignCenter);
        robotCGroupBox = new QGroupBox(Widget);
        robotCGroupBox->setObjectName(QString::fromUtf8("robotCGroupBox"));
        robotCGroupBox->setGeometry(QRect(520, 10, 245, 575));
        sizePolicy.setHeightForWidth(robotCGroupBox->sizePolicy().hasHeightForWidth());
        robotCGroupBox->setSizePolicy(sizePolicy);
        robotCTextLabel = new QLabel(robotCGroupBox);
        robotCTextLabel->setObjectName(QString::fromUtf8("robotCTextLabel"));
        robotCTextLabel->setGeometry(QRect(10, 10, 225, 28));
        robotCTextLabel->setFont(font);
        robotCTextLabel->setAlignment(Qt::AlignCenter);
        robotCImage = new QLabel(robotCGroupBox);
        robotCImage->setObjectName(QString::fromUtf8("robotCImage"));
        robotCImage->setGeometry(QRect(47, 50, 150, 175));
        robotCImage->setScaledContents(true);
        robotCTextBrowser = new QTextBrowser(robotCGroupBox);
        robotCTextBrowser->setObjectName(QString::fromUtf8("robotCTextBrowser"));
        robotCTextBrowser->setGeometry(QRect(10, 235, 225, 260));
        robotCTextBrowser->setFont(font1);
        robotCPushButton = new QPushButton(robotCGroupBox);
        robotCPushButton->setObjectName(QString::fromUtf8("robotCPushButton"));
        robotCPushButton->setGeometry(QRect(50, 530, 150, 35));
        robotCPushButton->setFont(font2);
        robotCPriceLabel = new QLabel(robotCGroupBox);
        robotCPriceLabel->setObjectName(QString::fromUtf8("robotCPriceLabel"));
        robotCPriceLabel->setGeometry(QRect(10, 505, 225, 20));
        robotCPriceLabel->setFont(font1);
        robotCPriceLabel->setAlignment(Qt::AlignCenter);
        maintancePlanGroupBox = new QGroupBox(Widget);
        maintancePlanGroupBox->setObjectName(QString::fromUtf8("maintancePlanGroupBox"));
        maintancePlanGroupBox->setGeometry(QRect(10, 610, 751, 181));
        maintenancePlanLabel = new QLabel(maintancePlanGroupBox);
        maintenancePlanLabel->setObjectName(QString::fromUtf8("maintenancePlanLabel"));
        maintenancePlanLabel->setGeometry(QRect(10, 10, 731, 21));
        maintenancePlanLabel->setFont(font);
        maintenancePlanLabel->setAlignment(Qt::AlignCenter);
        planAGroupBox = new QGroupBox(maintancePlanGroupBox);
        planAGroupBox->setObjectName(QString::fromUtf8("planAGroupBox"));
        planAGroupBox->setGeometry(QRect(10, 35, 235, 135));
        planALabel = new QLabel(planAGroupBox);
        planALabel->setObjectName(QString::fromUtf8("planALabel"));
        planALabel->setGeometry(QRect(10, 10, 120, 21));
        planALabel->setFont(font1);
        planATextBox = new QTextEdit(planAGroupBox);
        planATextBox->setObjectName(QString::fromUtf8("planATextBox"));
        planATextBox->setGeometry(QRect(10, 30, 215, 95));
        planATextBox->setReadOnly(true);
        planAPriceLabel = new QLabel(planAGroupBox);
        planAPriceLabel->setObjectName(QString::fromUtf8("planAPriceLabel"));
        planAPriceLabel->setGeometry(QRect(145, 10, 75, 16));
        planAPriceLabel->setFont(font1);
        planAPriceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        planBGroupBox = new QGroupBox(maintancePlanGroupBox);
        planBGroupBox->setObjectName(QString::fromUtf8("planBGroupBox"));
        planBGroupBox->setGeometry(QRect(257, 35, 235, 135));
        planBLabel = new QLabel(planBGroupBox);
        planBLabel->setObjectName(QString::fromUtf8("planBLabel"));
        planBLabel->setGeometry(QRect(10, 10, 120, 21));
        planBLabel->setFont(font1);
        planBTextBox = new QTextEdit(planBGroupBox);
        planBTextBox->setObjectName(QString::fromUtf8("planBTextBox"));
        planBTextBox->setGeometry(QRect(10, 30, 215, 95));
        planBTextBox->setReadOnly(true);
        planBPriceLabel = new QLabel(planBGroupBox);
        planBPriceLabel->setObjectName(QString::fromUtf8("planBPriceLabel"));
        planBPriceLabel->setGeometry(QRect(145, 10, 75, 16));
        planBPriceLabel->setFont(font1);
        planBPriceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        planCGroupBox = new QGroupBox(maintancePlanGroupBox);
        planCGroupBox->setObjectName(QString::fromUtf8("planCGroupBox"));
        planCGroupBox->setGeometry(QRect(505, 35, 235, 135));
        planCLabel = new QLabel(planCGroupBox);
        planCLabel->setObjectName(QString::fromUtf8("planCLabel"));
        planCLabel->setGeometry(QRect(10, 10, 120, 21));
        planCLabel->setFont(font1);
        planCTextBox = new QTextEdit(planCGroupBox);
        planCTextBox->setObjectName(QString::fromUtf8("planCTextBox"));
        planCTextBox->setGeometry(QRect(10, 30, 215, 95));
        planCTextBox->setReadOnly(true);
        planCPriceLabel = new QLabel(planCGroupBox);
        planCPriceLabel->setObjectName(QString::fromUtf8("planCPriceLabel"));
        planCPriceLabel->setGeometry(QRect(145, 10, 75, 16));
        planCPriceLabel->setFont(font1);
        planCPriceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line = new QFrame(Widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 590, 751, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "iRobot Options and Plans", nullptr));
        robotATextLabel->setText(QString());
        robotAImage->setText(QString());
        robotATextBrowser->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Features </span></p>\n"
"<p style=\" margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">\302\267</span><span style=\" font-family:'Times New Roman'; font-size:8pt;\">   </span>High visibility alert light when bomb is detected.</p>\n"
"<p style=\" margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">\302\267"
                        "</span><span style=\" font-family:'Times New Roman'; font-size:8pt;\">   </span>Smart patrol feature bomb detection.</p>\n"
"<p style=\" margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">\302\267</span><span style=\" font-family:'Times New Roman'; font-size:8pt;\">   </span>Capability of disposing smaller explosive devices.</p>\n"
"<p style=\" margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">\302\267</span><span style=\" font-family:'Times New Roman'; font-size:8pt;\">   </span>Can climb stairs and suited to in indoor environments.</p>\n"
"<p style=\" margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">\302\267</span><span style=\" font-family:'Times New Roman'; font-size:8pt;\""
                        ">   </span>High maneuverability.</p></body></html>", nullptr));
        robotAPushButton->setText(QApplication::translate("Widget", "Purchase iRobot", nullptr));
        robotAPriceLabel->setText(QString());
        robotBTextLabel->setText(QString());
        robotBImage->setText(QString());
        robotBTextBrowser->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Features</span> </p>\n"
"<p style=\" margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">\302\267</span><span style=\" font-family:'Times New Roman'; font-size:8pt;\">   </span>Signals detected bombs on remote control.</p>\n"
"<p style=\" margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">\302\267</span>"
                        "<span style=\" font-family:'Times New Roman'; font-size:8pt;\">   </span>Manual operation with remote control.</p>\n"
"<p style=\" margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">\302\267</span><span style=\" font-family:'Times New Roman'; font-size:8pt;\">   </span>Capability of disposing larger explosive devices.</p>\n"
"<p style=\" margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">\302\267</span><span style=\" font-family:'Times New Roman'; font-size:8pt;\">   </span>Ideal for use in outdoor terrain or spacious indoor environments.</p></body></html>", nullptr));
        robotBPushButton->setText(QApplication::translate("Widget", "Purchase iRobot", nullptr));
        robotBPriceLabel->setText(QString());
        robotCTextLabel->setText(QString());
        robotCImage->setText(QString());
        robotCTextBrowser->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Features </span></p>\n"
"<p style=\" margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">\302\267</span><span style=\" font-family:'Times New Roman'; font-size:8pt;\">   </span>Optional visibile detection on robot or on remote only.</p>\n"
"<p style=\" margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">\302"
                        "\267</span><span style=\" font-family:'Times New Roman'; font-size:8pt;\">   </span>Programmable patrol pathing.</p>\n"
"<p style=\" margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">\302\267</span><span style=\" font-family:'Times New Roman'; font-size:8pt;\">   </span>Capability of disposing small and medium explosive devices.</p>\n"
"<p style=\" margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Symbol'; font-size:8pt;\">\302\267</span><span style=\" font-family:'Times New Roman'; font-size:8pt;\">   </span>Can handles indoor and outdoor terrains.</p></body></html>", nullptr));
        robotCPushButton->setText(QApplication::translate("Widget", "Purchase iRobot", nullptr));
        robotCPriceLabel->setText(QString());
        maintancePlanGroupBox->setTitle(QString());
        maintenancePlanLabel->setText(QApplication::translate("Widget", "Maintenance Plans", nullptr));
        planAGroupBox->setTitle(QString());
        planALabel->setText(QString());
        planATextBox->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">1 year warrenty</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">*Addtional parts and services not covered by warrenty are extra.</span></p></body></html>", nullptr));
        planAPriceLabel->setText(QString());
        planBGroupBox->setTitle(QString());
        planBLabel->setText(QString());
        planBTextBox->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">2 year warrenty</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">*10% discount on addtional parts and services not covered.</span></p></body></html>", nullptr));
        planBPriceLabel->setText(QString());
        planCGroupBox->setTitle(QString());
        planCLabel->setText(QString());
        planCTextBox->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">4 year warrenty</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">*20% discount on addtional parts and services not covered.</span></p></body></html>", nullptr));
        planCPriceLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTWINDOW_H
