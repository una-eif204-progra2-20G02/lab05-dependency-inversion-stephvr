//
// Created by Steph on 1/9/2020.
//

#ifndef LAB_05_LOCALBANK_H
#define LAB_05_LOCALBANK_H
#include "BankTransferSender.h"
#include "CashSender.h"
#include "CheckSender.h"

using namespace std;

class LocalBank
{

public:

    std::string processPaymentBankTransfer();
    std::string processPaymentCash();
    std::string processPaymentCheck();


};


#endif //LAB_05_LOCALBANK_H
