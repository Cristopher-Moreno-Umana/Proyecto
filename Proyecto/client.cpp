#include "client.h"

Client::Client()
{
	card = " ";
	idCard = " ";
}

Client::Client(string aCard, string anIDCard)
{
	this->card = aCard;
	this->idCard = anIDCard;
}

Client::~Client()
{
}

void Client::setCard(string aCard)
{
	this->card = aCard;
}

void Client::setIDCard(string anIDCard)
{
	this->idCard = anIDCard;
}

string Client::getCard()
{
	return this->card;
}

string Client::getIDCard()
{
	return this->idCard;
}
