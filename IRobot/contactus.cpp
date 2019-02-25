#include "contactus.h"
#include "ui_contactus.h"
#include <QMessageBox>
#include <QDebug>

//FUNCTION IMPLEMENTATION

//constructor: initializes objects of type ContactUs
ContactUs::ContactUs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ContactUs)
{
    ui->setupUi(this);
}

//destructor: deallocates memory for contact us ui
ContactUs::~ContactUs()
{
    delete ui;
}

/***********************************************************************************************************************
* on_submit_clicked()
* When the submit button is clicked, this function creates a pop up window that thanks the customer for submitting
* their questions and lets the customer know that a representative should contact them shortly. It also exits the
* contact us window and takes the customer back to the previous window. In addition, this program will take the customer's
* name input and store it in string variable nameVar, take the customer's email input and store it in string variable
* emailVar, take the customers questions input and store it in custEdit. Lastly, it will use a switch statement to
* determine which of the reasons the customer chose for contacting us (which will be an integer 0,1,2,default) and
* will convert that integer to a corrsponding string (that is easy for the admin to understand) and will store it
* in a string variable reason2Var.
* ---------------------------------------------------------------------
* PRE-CONDITIONS
* The following will need the customer to fill in their customer information in the name, email, cust info variables.
* It will also require the customer to select one of the reasons for contacting us option 1: "Need more information",
* option2: "I never got my robot", option3: "Problem with my iRobot", option4: "Other";
*
* POST-CONDITIONS
* This function will create a pop-up message thanking the customer for contacting us and letting them know a representative will
* be contacting them shortly. It will also populate an "Ok" button for the customer to click on to leave the "contact us"
* window back to the previous page. It will save the customer's input for name,email, questions, and the user's reason
* for contacting us selection inside variables (nameVar, emailVar, custEdit,reason2Var) to be used for later if needed.
***********************************************************************************************************************/



void ContactUs::on_submit_clicked()
{

    QMessageBox::information(this, "Contact Us Confirmation","Thank you for contacting us! A representative "
                                                       "should be in touch shortly!",QMessageBox::Ok);

    nameVar = ui->name->text();
    emailVar = ui->email->text();
    custInfoVar = ui->custEditBox->toPlainText();

    reasonVar = ui->comboBox->currentIndex();

    switch(reasonVar)
    {

        case 0: reason2Var = "More info";
        break;
        case 1: reason2Var = "Never got Robot";
        break;
        case 2: reason2Var=  "Problem with Robot";
        break;
        default: reason2Var = "Other";
    }


    qDebug() << "Testing nameVar value" << nameVar;
    qDebug() << "Testing emailVar vlaue" << emailVar;
    qDebug() << "Testing reason2Var" << reason2Var;
    qDebug() << "Testing custEdit info" << custInfoVar;

    close();
}

/***********************************************************************************************************************
* on_cancel_clicked()
* When the cancel button is clicked, this function will close the "contact us" window and return the customer back to the
* previous window they were on.
* ---------------------------------------------------------------------------------------------------------------------
* PRE-CONDITIONS
* customer selects cancel button on "contact us" page.
*
* POST-CONDITIONS
* "contact us" page closes and customer is returned to previous window
***********************************************************************************************************************/

void ContactUs::on_cancel_clicked()
{
    close();
}



