#include "client.h"

Client::Client()
{
	card = " ";
	idCard = "";
	amountToPay = 0.0;
	ticketID = 0;
}

Client::Client(string aCard, string anIDCard, double anAmountToPay, int aTicketID)
{
	this->card = aCard;
	this->idCard = anIDCard;
	this->amountToPay = anAmountToPay;
	this->ticketID = aTicketID;
}

void Client::setCard(string aCard)
{
	this->card = aCard;
}

void Client::setIDCard(string anIDCard)
{
	this->idCard = anIDCard;
}

void Client::setAmountToPay(double anAmountToPay)
{
	this->amountToPay = anAmountToPay;
}

void Client::setTickedID(int aTicketID)
{
	this->ticketID = aTicketID;
}

string Client::getCard()
{
	return this->card;
}

string Client::getIDCard()
{
	return this->idCard;
}

double Client::getAmountToPay()
{
	return this->amountToPay;
}

int Client::getTickedID()
{
	return this->ticketID;
}

