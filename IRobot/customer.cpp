#include "customer.h"
#include <QString>


customer::customer()
{
    company="Jon Co";
    address="123 Jon St, Jon Town, CA, 92653";
    key = "not key";
    interest="never call me again";
}

customer::customer(QString company, QString address, QString key, QString interest){
    this->company=company;
    this->address=address;
    this->key=key;
    this->interest=interest;
}
customer::customer(const customer& old){
    company=old.company;
    address=old.address;
    key=old.key;
    interest=old.interest;
}


QString customer::getCompany(){
    return company;
}
QString customer::getAddress(){
    return address;
}
QString customer::getKey(){
    return key;
}
QString customer::getInterest(){
    return interest;
}
