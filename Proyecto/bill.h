#ifndef bill_h
#define bill_h
#include "libraries_of_the_project.h"
class Bill
{
private:
	double mountToPay;
	string ticketID;
public:
	Bill();
	Bill(double aMountToPay, string aTicketID);

	~Bill();

	void setAmountToPay(double aMountToPay);
	void setTickedID(string aTicketID);

	double getAmountToPay();
	string getTickedID();

	void printBillID();
};
#endif
