/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *customer;
    QPushButton *pushButton_3;
    QLabel *label_5;
    QWidget *Admin;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(697, 593);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 701, 391));
        Login = new QWidget();
        Login->setObjectName(QString::fromUtf8("Login"));
        gridLayoutWidget = new QWidget(Login);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(180, 70, 271, 96));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        address1Line = new QLineEdit(gridLayoutWidget);
        address1Line->setObjectName(QString::fromUtf8("address1Line"));

        gridLayout->addWidget(address1Line, 2, 1, 1, 1);

        adress2Line = new QLineEdit(gridLayoutWidget);
        adress2Line->setObjectName(QString::fromUtf8("adress2Line"));

        gridLayout->addWidget(adress2Line, 3, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        CompanyNameLine = new QLineEdit(gridLayoutWidget);
        CompanyNameLine->setObjectName(QString::fromUtf8("CompanyNameLine"));

        gridLayout->addWidget(CompanyNameLine, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        pushButton = new QPushButton(Login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 260, 75, 23));
        pushButton_2 = new QPushButton(Login);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 260, 91, 23));
        stackedWidget->addWidget(Login);
        customer = new QWidget();
        customer->setObjectName(QString::fromUtf8("customer"));
        pushButton_3 = new QPushButton(customer);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 270, 75, 23));
        label_5 = new QLabel(customer);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(220, 90, 47, 13));
        stackedWidget->addWidget(customer);
        Admin = new QWidget();
        Admin->setObjectName(QString::fromUtf8("Admin"));
        pushButton_4 = new QPushButton(Admin);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(230, 290, 75, 23));
        label_4 = new QLabel(Admin);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(240, 50, 47, 13));
        stackedWidget->addWidget(Admin);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 697, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(released()), MainWindow, SLOT(adminLogin()));
        QObject::connect(pushButton_2, SIGNAL(released()), MainWindow, SLOT(customerLogin()));
        QObject::connect(pushButton_3, SIGNAL(released()), MainWindow, SLOT(logout()));
        QObject::connect(pushButton_4, SIGNAL(released()), MainWindow, SLOT(logout()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Adress Line 2", nullptr));
        label->setText(QApplication::translate("MainWindow", "Company Name", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Address Line 1", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Admin Login", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Customer Login", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "logout", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "customer", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Logout", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
