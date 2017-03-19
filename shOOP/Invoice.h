#pragma once
#include "Product.h"
#include "Shop.h"
#include "Client.h"

class Invoice
{
private:
    std::string date;
public:
	Invoice();
	void createInvoice(Client c, Shop s, Product p);
	~Invoice();
};

