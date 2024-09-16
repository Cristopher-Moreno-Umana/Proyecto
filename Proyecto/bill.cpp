#include "bill.h"

Bill::Bill()
{
	mountToPay = 0.0;
	ticketID = " ";
}

Bill::Bill(double aMountToPay, string aTicketID)
{
	this->mountToPay = aMountToPay;
	this->ticketID = aTicketID;
}

Bill::~Bill()
{
}

void Bill::setAmountToPay(double aMountToPay)
{
	this->mountToPay = aMountToPay;
}

void Bill::setTickedID(string aTicketID)
{
	this->ticketID = aTicketID;
}

double Bill::getAmountToPay()
{
	return this->mountToPay;
}

string Bill::getTickedID()
{
	return this->ticketID;
}

void Bill::printBillID()
{
	cout << "\nID del boleto: ";
	cout << this->ticketID;
	cout << '\n';
	system("pause");
	cout << '\n';
}
