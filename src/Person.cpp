//
// Created by Maikol Guzman on 8/20/20.
//
#include "Person.h"

Person::Person()
{
    firstName = "Sin Definir";
    lastName  = "Sin Definir";
    documentId = 0;
}

Person::Person (string firstName, string lastName, int documentId) : firstName(firstName),lastName(lastName),documentId(documentId) {}

string Person::getFirstName (){
    return firstName;
}

void Person::setFirstName(string firstName) {
    this->firstName = firstName;
}

string Person::getLastName(){
    return lastName;
}

void Person::setLastName(string lastName) {
    this->lastName = lastName;
}

int Person::getDocumentId()  {
    return documentId;
}

void Person::setDocumentId(int documentId) {
    this->documentId = documentId;
}

string Person::processPayment(IPayment* paymentSender) {
    return paymentSender->sendPayment();
}

string Person::toString() {
    return getFirstName() + " " + getLastName() + "\nDoc Id: " + std::to_string(getDocumentId());
}