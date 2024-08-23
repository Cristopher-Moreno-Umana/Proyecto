#include "Room.h"

Room::Room()
{
	roomNumber = 0;
	seatPrice = 0.0;
	numberSeats = 10 * 10;
}
Room::Room(int aRoomNumber,double aSeatPrice, int aNumberSeats)
{
	this->roomNumber = aRoomNumber;
	this->seatPrice = aSeatPrice;
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