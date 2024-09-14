#include "room.h"

Room::Room()
{
	roomNumber = 0;
	totalOfSeats = 0;
}

Room::Room(int aRoomNumber, int aTotalOfSeats)
{
	this->roomNumber = aRoomNumber;
	this->totalOfSeats = aTotalOfSeats;
}

void Room::setRoomNumber(int aRoomNumber)
{
	this->roomNumber = aRoomNumber;
}

void Room::setTotalOfSeats(int aTotalOfSeats)
{
	this->totalOfSeats = aTotalOfSeats;
}

int Room::getRoomNumber()
{
	return this->roomNumber;
}

int Room::getTotalOfSeats()
{
	return this->totalOfSeats;
}
