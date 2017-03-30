#ifndef CLIENT_H
#define CLIENT_H

class Client
{
public:
    Client();
    Client(const char* name, const char* clientType, const char* paymentType);
    ~Client();

    void setName(const char* newName);
    void setClientType(const char* newClientType);
    void setPaymentType(const char* newPaymentType);

    const char* getName() const;
    const char* getClientType() const;
    const char* getPaymentType() const;
    void print() const;

private:
    char* name;
    char* clientType;
    char* paymentType;
};

#endif // CLIENT_H
