#include "seat.h"

Seat::Seat()
{
	seatCondition = " ";
	seatID = " ";
	seatConditionAndID = " ";
}

Seat::Seat(string aSeatID, string aSeatCondition)
{
	this->seatID = aSeatID;
	this->seatCondition = aSeatCondition;
	this->seatConditionAndID = seatID;
	this->seatConditionAndID += ('-' + seatCondition);
}

void Seat::setSeatID(std::string aSeatID)
{
	this->seatID = aSeatID;
}

void Seat::setSeatCondition(string aSeatCondition)
{
	this->seatCondition = aSeatCondition;
}

std::string Seat::getSeatID()
{
	return this->seatID;
}

std::string Seat::getSeatCondition()
{
	return this->seatCondition;
}

string Seat::getSeatConditionAndID()
{
	return this->seatConditionAndID;
}