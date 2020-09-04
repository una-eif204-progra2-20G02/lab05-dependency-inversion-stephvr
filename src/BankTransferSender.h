//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_BANKTRANSFERSENDER_H
#define LAB05_BANKTRANSFERSENDER_H
#include"IPayment.h"
#include <string>

using namespace std;

class BankTransferSender: public IPayment
{
public:
    virtual string sendPayment();
};


#endif //LAB05_BANKTRANSFERSENDER_H
