//
// Created by Steph on 1/9/2020.
//

#include "LocalBank.h"

std::string LocalBank::processPaymentBankTransfer() {
    BankTransferSender bankTransferSender;
    return bankTransferSender.sendPayment();
}

std::string LocalBank::processPaymentCash() {
    CashSender cashSender;
    return cashSender.sendPayment();
}

std::string LocalBank::processPaymentCheck() {
    CheckSender checkSender;
    return checkSender.sendPayment();
}