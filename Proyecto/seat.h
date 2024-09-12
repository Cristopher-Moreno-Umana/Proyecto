#ifndef seat_h
#define seat_h
#include <iostream>
class Seat
{
private:
	std::string seatID;
	int seatCondition;
public:
	Seat();
	Seat(std::string aSeatID, int aSeatCondition);

	void setSeatID(std::string aSeatID);
	void setSeatCondition(int aSeatCondition);

	std::string getSeatID();
	int getSeatCondition();
};
#endif 
