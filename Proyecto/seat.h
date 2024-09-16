#ifndef seat_h
#define seat_h
#include "libraries_of_the_project.h"
class Seat
{
private:
	string seatID, seatCondition, seatConditionAndID;
public:
	Seat();
	Seat(std::string aSeatID, string aSeatCondition);

	void setSeatID(string aSeatID);
	void setSeatCondition(string aSeatCondition);

	string getSeatID();
	string getSeatCondition();
	string getSeatConditionAndID();

};
#endif 
