#include "custguarantee.h"
#include "ui_custguarantee.h"
#include "contactus.h"
#include <QDebug>

//constructor:
custGuarantee::custGuarantee(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::custGuarantee)
{
    ui->setupUi(this);
}

//destructor:
custGuarantee::~custGuarantee()
{
    delete ui;
}

/***********************************************************************************************************************
* on_contactUs_clicked()
* When the contact us button is clicked, this function will take the customer to the "contact us" page.
* ---------------------------------------------------------------------------------------------------------------------
* PRE-CONDITIONS
* Customer selects "contact us button". Also, contact us pointer variable object of type contactUs must be declared
* in the custguarantee header, so it can be initialized at this step.
*
* POST-CONDITIONS
* Customer is taken to the "contact us" page.
***********************************************************************************************************************/

void custGuarantee::on_contactUs_clicked()
{
    qDebug() << "Contact us button clicked";
    //ContactUs * contact = new ContactUs; //allocate memory on the heap
     contact = new ContactUs;
     contact->show();
    //contact->raise();
    //contact->activateWindow();

}

/***********************************************************************************************************************
* on_main_clicked()
* When the main button is clicked, this function will use qDebug to display a message to the programmer tester that
* the Return to Home button was clicked. Later it will take the customer back to the home screen (but this is not
* part of story 9).
* ---------------------------------------------------------------------------------------------------------------------
* PRE-CONDITIONS
* customer selects main button on "customer guarantee" page.
*
* POST-CONDITIONS
* "Return to Home clicked" is displayed in Qt debug console. Eventually, the customer guarantee page will close
* and customer will be returned to the main menu (but this action is not part of story 9).
***********************************************************************************************************************/


void custGuarantee::on_main_clicked()
{
       qDebug() << "Return to Home clicked";
       this->close();
}
