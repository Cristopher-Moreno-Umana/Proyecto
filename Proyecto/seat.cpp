#include "seat.h"

Seat::Seat()
{
	seatID = " ";
	seatCondition = 0;
}

Seat::Seat(string aSeatID, int aSeatCondition)
{
	this->seatID = aSeatID;
	this->seatCondition = aSeatCondition;
}

void Seat::setSeatID(string aSeatID)
{
	this->seatID = aSeatID;
}

void Seat::setSeatCondition(int aSeatCondition)
{
	this->seatCondition = aSeatCondition;
}

string Seat::getSeatID()
{
	return this->seatID;
}

int Seat::getSeatCondition()
{
	return this->seatCondition;
}

void Seat::printSeatsID()
{
	cout << '\n' << seatID;
}

void Seat::printSeatsCondition()
{
	cout << '\n' << seatCondition;
}


