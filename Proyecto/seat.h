#ifndef seat_h
#define seat_h
#include "libraries_of_the_project.h"
class Seat
{
private:
	string seatID;
	int seatCondition;
public:
	Seat();
	Seat(string aSeatID, int aSeatCondition);

	~Seat();

	void setSeatID(string aSeatID);
	void setSeatCondition(int aSeatCondition);

	string getSeatID();
	int getSeatCondition();

	void printSeatsID();
	void printSeatsCondition();
};
#endif 
