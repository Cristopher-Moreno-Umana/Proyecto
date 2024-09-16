#ifndef seatsList_h
#define seatsList_h
#include "libraries_of_the_project.h"
#include "seat.h"
class SeatsList
{
private:
	Seat seatsMatrix[10][10];
public:
	SeatsList();

	void fillSeatsMatrix();

	void printSeatsMatrixCondition();

	void printSeatsMatrixID();

	void printSeatsMatrixConditionAndID();

	void changeSeatCondition(string anIDNumber);
};
#endif
