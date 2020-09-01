//
// Created by Steph on 1/9/2020.
//

#ifndef LAB_05_BANK_H
#define LAB_05_BANK_H
#include<sstream>

using namespace std;
class Bank {

public:
   virtual string processPaymentBankTransfer() = 0;
   virtual string processPaymentCash() = 0;
   virtual string processPaymentCheck()= 0;

};


#endif //LAB_05_BANK_H
