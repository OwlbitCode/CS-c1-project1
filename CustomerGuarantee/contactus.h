/******************************************************************************************************
 * Project #1 : iRobotstoDetectBombs
 * Description: The contactus.h for the iRobot contact us widget.
 * Programmer: Camille
 * ****************************************************************************************************/


#ifndef CONTACTUS_H
#define CONTACTUS_H

#include <QWidget>
#include "mainwindow.h"

/* contactUs class: The “Contact us” page displays a drop down that allows customers to select the
 * reason for contacting iRobots. There is a name field and an email field to collect the
 * potential customer’s contact info. There is a  text box that the customer can edit and
 *  write down all their problems. There are 2 buttons, One button is the  “submit” button
 *  that opens up a pop up message that thanks the customer for submitting their question
 * and lets them know that a representative will get back to them shortly. The customer
 * selects “OK” or closes the pop-up to exit the pop-up box. The second button is a “cancel”
 * button that when selected, it will take the customer back to the window they were originally
 * on before they selected “contact us”.
 */

/* INPUT:
*
*  nameVar: Qstring variable to store the customer's full name -> input from line edit name;
*  emailVar: Qstring variable to store the customer's email -> input from line edit email;
*  custInfoVar: Qstring variable used to store the customer's questions;
*
*
*  CALCULATION:
*  reasonVar: int variable to store an integer digit which is determined by the customer's selection out of 4 potential
*  reasons for contacting us:"Request more info"=0, "I never got my robot?" = 1, "Problem with iRobot?" =2,
*  "Other" = 3.
*  reason2Var: Qstring variable used to store the string reason for the customer's reason for contacting us which
*   is determined by a switch statement which considers 4 cases for the customer contacting us (listed above) and stores
*   a string value depending on the selection. 0 = "More info", 1 = "Never got Robot", 2 = "Problem with Robot",
*   3 ="Other".
*
*  OUTPUT
*
*  nameVar: Qstring variable to store the customer's full name -> can see the output since customer will type this;
*  emailVar: Qstring variable to store the customer's email -> can see the output since customer will type this;
*  custInfoVar: Qstring variable used to store the customer's questions -> can see the output since customer will type this;
*
*******************************************************************************/


namespace Ui {
class ContactUs;
}

class ContactUs : public QWidget
{
    Q_OBJECT

public:

    explicit ContactUs(QWidget *parent = nullptr);
     //! Constructor

    ~ContactUs();
     //! Destructor

private slots:

    void on_submit_clicked();
    //! submit button clicked
    /*! When the submit button is clicked, this function creates a pop up window that thanks the customer for submitting their questions
    and lets the customer know that a representative should contact them shortly. It also exits the contact us
    window and takes the customer back to the previous window*/

    void on_cancel_clicked();

    //! cancel button clicked
    /*! When the cancel button is clicked, this function exits the contact us
    window and takes the customer back to the previous window*/

private:
    Ui::ContactUs *ui;
    QString nameVar;
    QString emailVar;
    int reasonVar;
    QString reason2Var;
    QString custInfoVar;

};

#endif // CONTACTUS_H
