#ifndef CONTACTUS_H
#define CONTACTUS_H

#include <QWidget>
#include "mainwindow.h"


namespace Ui {
class ContactUs;
}

class ContactUs : public QWidget
{
    Q_OBJECT

public:
    explicit ContactUs(QWidget *parent = nullptr);
    ~ContactUs();

private:
    Ui::ContactUs *ui;
};

#endif // CONTACTUS_H
