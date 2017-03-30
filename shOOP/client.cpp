#include <iostream>
#include <string.h>
#include "Client.h"

Client::Clent(): name(nullptr),clientType(nullptr),paymentType(nullptr){}

Client::Client(const char* name, const char* clientType, const char* paymentType):Client()
{
    setName(theName);
    setClientType(theClientType);
    setPaymentType(thePaymentType);
}

Client::~Client()
{
    delete[] name;
    delete[] clientType;
    delete[] paymentType;
}

void Client::setName(const char* newName)
{
    delete[] name;
    int nameLen = strlen(newName);
    name = new char[nameLen + 1];
    strcpy(name, newName);
}

void Client::setClientType(const char* newClientType)
{
    delete[] clientType;
    int clientTypeLen = strlen(newClientType);
    clientType = new char[clientTypeLen + 1];
    strcpy(clientType, newClientType);
}

void Client::setPaymentType(const char* newPaymentType)
{
    delete[] paymentType;
    int paymentTypeLen = strlen(newPaymentType);
    paymentType = new char[paymentTypeLen + 1];
    strcpy(paymentType, newPaymentType);
}

const char* Client::getName() const
{
    return name;
}

const char* Client::getClientType() const
{
    return clientType;
}

const char* Client::getPaymentType() const
{
    return paymentType;
}

void Client::print() const
{
    std::cout<<"name: "<<name
             <<"\nclient type"<<clientType
             <<"\npayment type"<<paymentType
             <<"\n";
}
