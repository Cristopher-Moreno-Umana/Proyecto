#ifndef client_h
#define client_h
#include "libraries_of_the_project.h"
class Client
{
private:
	string card;
	string idCard;
	
public:
	Client();
	Client(string aCard, string anIDCard);

	~Client();

	void setCard(string aCard);
	void setIDCard(string anIDCard);
	

	string getCard();
	string getIDCard();

};
#endif
