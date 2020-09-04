//
// Created by Steph on 3/9/2020.
//

#ifndef LAB_05_IPAYMENT_H
#define LAB_05_IPAYMENT_H
#include <string>

//Esta es la clase abstracta, de acá heredan BankTransferSender, CashSender, CheckSender.

using namespace std;
class IPayment
{
public:
    //Métodos virtuales puros.

    virtual string sendPayment() const = 0;
    virtual ~IPayment() = 0;
};




#endif //LAB_05_IPAYMENT_H
