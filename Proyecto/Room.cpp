#include "Room.h"

Room::Room()
{
	roomNumber = 0;
	numberSeats = 0;
	seatPrice = 0.0;
}
Room::Room(int aRoomNumber, int aNumberSeats, double aSeatPrice)
{
	this->roomNumber = aRoomNumber;
	this->numberSeats = aNumberSeats;
	this->seatPrice = aSeatPrice;
}

void Room::setRoomNumber(int aRoomNumber)
{
	this->roomNumber = aRoomNumber;
}
void Room::setNumberSeats(int aNumberSeats)
{
	this->numberSeats = aNumberSeats;
}
void Room::setSeatPrice(double aSeatPrice)
{
	this->seatPrice = aSeatPrice;
}

int Room::getRoomNumber()
{
	return this->roomNumber;
}
int Room::getNumberSeats()
{
	return this->numberSeats;
}
double Room::getSeatPrice()
{
	return this->seatPrice;
}