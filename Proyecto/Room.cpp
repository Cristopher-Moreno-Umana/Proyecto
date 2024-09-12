#include "room.h"

Room::Room()
{
	roomNumber = 0;
	ticketPrice = 0.0;
	numberSeats = 10 * 10;
}
Room::Room(int aRoomNumber,double aTicketPrice, int aNumberSeats)
{
	this->roomNumber = aRoomNumber;
	this->ticketPrice = aTicketPrice;
	this->numberSeats = aNumberSeats;
}

void Room::setRoomNumber(int aRoomNumber)
{
	this->roomNumber = aRoomNumber;
}
void Room::setNumberSeats(int aNumberSeats)
{
	this->numberSeats = aNumberSeats;
}
void Room::setTicketPrice(double aTicketPrice)
{
	this->ticketPrice = aTicketPrice;
}

int Room::getRoomNumber()
{
	return this->roomNumber;
}
int Room::getNumberSeats()
{
	return this->numberSeats;
}
double Room::getTicketPrice()
{
	return this->ticketPrice;
}