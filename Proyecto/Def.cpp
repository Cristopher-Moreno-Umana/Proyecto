#include "Movie.h"
#include "Room.h"

Movie::Movie()
{
	movieName = ' ';
	movieCountry = ' ';
	movieYear = 0;
	movieLength = 0;
	movieReview = 0;
}
Movie::Movie(std::string aMovieName, std::string aMovieCountry,
	int aMovieYear, int aMovieLength, int aMovieReview)
{
	this->movieName = aMovieName;
	this->movieCountry = aMovieCountry;
	this->movieYear = aMovieYear;
	this->movieLength = aMovieLength;
	this->movieReview = aMovieReview;
}

void Movie::setMovieName(std::string aMovieName)
{
	this->movieName = aMovieName;
}
void Movie::setMovieCountry(std::string aMovieCountry)
{
	this->movieCountry = aMovieCountry;
}
void Movie::setMovieYear(int aMovieYear)
{
	this->movieYear = aMovieYear;
}
void Movie::setMovieLength(int aMovieLength)
{
	this->movieLength = aMovieLength;
}
void Movie::setMovieReview(int aMovieReview)
{
	this->movieReview = aMovieReview;
}

std::string Movie::getMovieName()
{
	return this->movieName;
}
std::string Movie::getMovieCountry()
{
	return this->movieCountry;
}
int Movie::getMovieYear()
{
	return this->movieYear;
}
int Movie::getMovieLength()
{
	return this->movieLength;
}
int Movie::getMovieReview()
{
	return this->movieReview;
}

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