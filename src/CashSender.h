//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_CASHSENDER_H
#define LAB05_CASHSENDER_H
#include"IPayment.h"
#include <string>

using namespace std;
class CashSender : public IPayment {

    virtual string sendPayment();
};

#endif //LAB05_CASHSENDER_H
