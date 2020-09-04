//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_CHECKSENDER_H
#define LAB05_CHECKSENDER_H
#include <string>
#include "IPayment.h"

using namespace std;

class CheckSender :public IPayment
{
public:
    virtual string sendPayment();
};


#endif //LAB05_CHECKSENDER_H
