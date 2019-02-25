/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *Login;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *address1Line;
    QLineEdit *adress2Line;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *CompanyNameLine;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer;
    QWidget *customer;
    QLabel *label_5;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_7;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QLabel *helpLabel1;
    QLabel *helpLabel2;
    QLabel *helpLabel3;
    QLabel *helpLabel4;
    QLabel *helpLabel5;
    QSpacerItem *horizontalSpacer_6;
    QWidget *Admin;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(947, 639);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        Login = new QWidget();
        Login->setObjectName(QStringLiteral("Login"));
        gridLayoutWidget = new QWidget(Login);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(310, 80, 271, 96));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        address1Line = new QLineEdit(gridLayoutWidget);
        address1Line->setObjectName(QStringLiteral("address1Line"));

        gridLayout->addWidget(address1Line, 2, 1, 1, 1);

        adress2Line = new QLineEdit(gridLayoutWidget);
        adress2Line->setObjectName(QStringLiteral("adress2Line"));

        gridLayout->addWidget(adress2Line, 3, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        CompanyNameLine = new QLineEdit(gridLayoutWidget);
        CompanyNameLine->setObjectName(QStringLiteral("CompanyNameLine"));

        gridLayout->addWidget(CompanyNameLine, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(Login);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 320, 931, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        stackedWidget->addWidget(Login);
        customer = new QWidget();
        customer->setObjectName(QStringLiteral("customer"));
        label_5 = new QLabel(customer);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(390, 60, 47, 13));
        gridLayoutWidget_2 = new QWidget(customer);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 485, 511));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 9, 1, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout_2->addWidget(pushButton_6, 5, 1, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout_2->addWidget(pushButton_8, 7, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 6, 1, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 10, 1, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_2->addWidget(pushButton_5, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 1, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout_2->addWidget(pushButton_7, 3, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 2, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 8, 1, 1, 1);

        helpLabel1 = new QLabel(gridLayoutWidget_2);
        helpLabel1->setObjectName(QStringLiteral("helpLabel1"));

        gridLayout_2->addWidget(helpLabel1, 1, 2, 1, 1);

        helpLabel2 = new QLabel(gridLayoutWidget_2);
        helpLabel2->setObjectName(QStringLiteral("helpLabel2"));

        gridLayout_2->addWidget(helpLabel2, 3, 2, 1, 1);

        helpLabel3 = new QLabel(gridLayoutWidget_2);
        helpLabel3->setObjectName(QStringLiteral("helpLabel3"));

        gridLayout_2->addWidget(helpLabel3, 5, 2, 1, 1);

        helpLabel4 = new QLabel(gridLayoutWidget_2);
        helpLabel4->setObjectName(QStringLiteral("helpLabel4"));

        gridLayout_2->addWidget(helpLabel4, 7, 2, 1, 1);

        helpLabel5 = new QLabel(gridLayoutWidget_2);
        helpLabel5->setObjectName(QStringLiteral("helpLabel5"));

        gridLayout_2->addWidget(helpLabel5, 10, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 8, 2, 1, 1);

        stackedWidget->addWidget(customer);
        Admin = new QWidget();
        Admin->setObjectName(QStringLiteral("Admin"));
        pushButton_4 = new QPushButton(Admin);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(230, 290, 75, 23));
        label_4 = new QLabel(Admin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 50, 47, 13));
        stackedWidget->addWidget(Admin);

        verticalLayout_2->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 947, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(CompanyNameLine, address1Line);
        QWidget::setTabOrder(address1Line, adress2Line);
        QWidget::setTabOrder(adress2Line, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_4);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(released()), MainWindow, SLOT(adminLogin()));
        QObject::connect(pushButton_2, SIGNAL(released()), MainWindow, SLOT(customerLogin()));
        QObject::connect(pushButton_3, SIGNAL(released()), MainWindow, SLOT(logout()));
        QObject::connect(pushButton_4, SIGNAL(released()), MainWindow, SLOT(logout()));
        QObject::connect(pushButton_5, SIGNAL(released()), MainWindow, SLOT(viewProducts()));
        QObject::connect(pushButton_7, SIGNAL(released()), MainWindow, SLOT(contacts()));
        QObject::connect(pushButton_6, SIGNAL(released()), MainWindow, SLOT(viewGuarantee()));
        QObject::connect(pushButton_8, SIGNAL(released()), MainWindow, SLOT(help()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Adress Line 2", nullptr));
        label->setText(QApplication::translate("MainWindow", "Company Name", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Address Line 1", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "  Admin Login  ", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Customer Login", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "customer", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "Guarantee", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "HALP", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "logout", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Our Products", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "Contact Us", nullptr));
        helpLabel1->setText(QApplication::translate("MainWindow", "Click the \"Our Products\" Button to view and purchase the products we have for sale", nullptr));
        helpLabel2->setText(QApplication::translate("MainWindow", "Click the \"Contact Us\" button to reach our team for further help ", nullptr));
        helpLabel3->setText(QApplication::translate("MainWindow", "Click the \"Guarantee\" button to view our user guarantee", nullptr));
        helpLabel4->setText(QApplication::translate("MainWindow", "Click the \"Help\" button again to hide the help options ", nullptr));
        helpLabel5->setText(QApplication::translate("MainWindow", "Click the \"Logout\" button to logout and return to the login screen", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Logout", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
