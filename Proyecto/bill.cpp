#include "bill.h"

Bill::Bill()
{
	mountToPay = 0.0;
	ticketID = " ";
}

Bill::Bill(double aMountToPay)
{
	this->mountToPay = aMountToPay;
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

void Bill::buildTicketID()
{
	string firstTicketIDLetter = "M";
	int numberOfTicketID = (rand() % 100) + 1;

	firstTicketIDLetter += to_string(numberOfTicketID);

	this->ticketID = firstTicketIDLetter;
}

void Bill::printBillID()
{
	cout << "\nID del boleto: ";
	cout << this->ticketID;
}
