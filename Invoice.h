#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
#include <string>
class Invoice
{
private:
    std::string invoiceId;
    float dollarOwed;

public:
    Invoice(std::string a);
    void addServiceCost(float costDollars);
    float getDollarsOwed();
    std::string getInvoiceId();
    ~Invoice();
};

Invoice::Invoice(std::string a) : invoiceId(a) {}
void Invoice::addServiceCost(float costDollars)
{
    if (costDollars > 0)
    {
        dollarOwed += costDollars;
    }
    else
    {
        std::cout << "Please enter a valid number." << std::endl;
    }
}
float Invoice::getDollarsOwed() { return dollarOwed; }
std::string Invoice::getInvoiceId()
{
    return invoiceId;
}
Invoice::~Invoice()
{
}

#endif
