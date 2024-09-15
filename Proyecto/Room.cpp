#include "room.h"

Room::Room()
{
	roomNumber = 0;
	totalOfSeats = 0;
	ticketPrice = 0.0;
}

Room::Room(int aRoomNumber, int aTotalOfSeats, double aTicketPrice)
{
	this->roomNumber = aRoomNumber;
	this->totalOfSeats = aTotalOfSeats;
	this->ticketPrice = aTicketPrice;
}

Room::~Room()
{
}

void Room::setRoomNumber(int aRoomNumber)
{
	this->roomNumber = aRoomNumber;
}

void Room::setTotalOfSeats(int aTotalOfSeats)
{
	this->totalOfSeats = aTotalOfSeats;
}

void Room::setTicketPrice(double aTicketPrice)
{
	this->ticketPrice = aTicketPrice;
}

int Room::getRoomNumber()
{
	return this->roomNumber;
}

int Room::getTotalOfSeats()
{
	return this->totalOfSeats;
}

double Room::getAticketPrice()
{
	return this->ticketPrice;
}
