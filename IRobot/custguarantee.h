/******************************************************************************************************
 * Project #1 : iRobotstoDetectBombs
 * Description: The customerguarantee.h for the iRobot customer guarantee widget.
 * Programmer: Camille
 * ****************************************************************************************************/


#ifndef CUSTGUARANTEE_H
#define CUSTGUARANTEE_H

#include <QWidget>
#include "contactus.h"

/* CustomerGuarantee class: The “Customer Guarantee” page displays a text box containing formatted company guarantee
* policies. These policies will feature the promises that we as a company we would like to offer and a
* guarantee that if the customer is not 100% satisfied they will have 90 days to return the product.
* There are 2 buttons:
* 1) The “Contact us” button  which takes the potential customer to the contact us window.
* 2) The “Main menu” button takes the potential customer back to the main menu screen.
*
*  INPUT: N/A
*
*  CALCULATION: contact: pointer object of type ContactUs used to access the contact us window when the "contact us" button
*  is clicked on.
*
*  OUTPUT: N/A
*
* *******************************************************************************/


namespace Ui {
class custGuarantee;
}

class custGuarantee : public QWidget
{
    Q_OBJECT

public:
     //! Constructor
    explicit custGuarantee(QWidget *parent = nullptr);

     //! Destructor
    ~custGuarantee();

private slots:
    void on_contactUs_clicked();
    //! on_contactUs_ button clicked
    /*! When the contact us button is clicked, this function takes the customer to the "contact us" window*/

    void on_main_clicked();
    //! on_main_clicked button clicked
    /*! When the main button is clicked, this function prints a qDebut message "main button clicked". It will eventually
     * take the customer to the main menu once the code is implemented for this transition. It's not part of story 9*/

private:
    Ui::custGuarantee *ui;
    ContactUs * contact; //pointer object of type Contact us
};

#endif // CUSTGUARANTEE_H
