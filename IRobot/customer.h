#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <QString>

class customer
{
public:
    customer();
    customer(QString company, QString address, QString key, QString interest);
    customer(const customer& old);

    QString getCompany();
    QString getAddress();
    QString getKey();
    QString getInterest();

private:
    QString company;
    QString address;
    QString key;
    QString interest;

};

#endif // CUSTOMER_H
