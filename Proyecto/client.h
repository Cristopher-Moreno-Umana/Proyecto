#ifndef client_h
#define client_h
#include "libraries_of_the_project.h"
class Client
{
private:
	string card;
	string idCard;
	double amountToPay;
	int ticketID;
public:
	Client();
	Client(string aCard, string anIDCard, double anAmountToPay, int aTicketID);

	void setCard(string aCard);
	void setIDCard(string anIDCard);
	void setAmountToPay(double anAmountToPay);
	void setTickedID(int aTicketID);

	string getCard();
	string getIDCard();
	double getAmountToPay();
	int getTickedID();
};
#endif
