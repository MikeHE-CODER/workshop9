#include "Invoice.h"
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
