#include "seat.h"

Seat::Seat()
{
	seatCondition = 0;
	seatID = " ";
}

Seat::Seat(std::string aSeatID, int aSeatCondition)
{
	this->seatID = aSeatID;
	this->seatCondition = aSeatCondition;
}

void Seat::setSeatID(std::string aSeatID)
{
	this->seatID = aSeatID;
}

void Seat::setSeatCondition(int aSeatCondition)
{
	this->seatCondition = aSeatCondition;
}

std::string Seat::getSeatID()
{
	return this->seatID;
}

int Seat::getSeatCondition()
{
	return this->seatCondition;
}
