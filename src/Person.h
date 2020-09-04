#ifndef UNIT_TESTING_01_GTEST_PERSON_H
#define UNIT_TESTING_01_GTEST_PERSON_H

#include <string>
#include <ostream>
#include "IPayment.h"

using namespace std;

class Person {

private:
    string firstName;
    string lastName;
    int documentId;

public:
    // Constructors
    Person();
    Person(string, string, int);
    virtual ~Person() = default;

    // Gets and Sets
    string getFirstName();

    void setFirstName(string firstName);

    string getLastName();

    void setLastName(string lastName);

    int getDocumentId();

    void setDocumentId(int documentId);

    string processPayment(IPayment* payment);

    virtual string toString();

};




#endif //UNIT_TESTING_01_BASIC_PERSON_H
