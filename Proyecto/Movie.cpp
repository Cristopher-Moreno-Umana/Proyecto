#include "movie.h"

Movie::Movie()
{
	movieName = " ";
	movieCountry = " ";
	movieYear = 0;
	movieLength = 0;
	emitRoom = 0;
	movieReview = 0.0;
	ticketPrice = 0.0;
}

Movie::Movie(string aMovieName, string aMovieCountry, int aMovieYear, int aMovieLength,
	int aEmitRoom, double aMovieReview, double aTicketPrice)
{
	this->movieName = aMovieName;
	this->movieCountry = aMovieCountry;
	this->movieYear = aMovieYear;
	this->movieLength = aMovieLength;
	this->emitRoom = aEmitRoom;
	this->movieReview = aMovieReview;
	this->ticketPrice = aTicketPrice;
}

void Movie::setMovieName(string aMovieName)
{
	this->movieName = aMovieName;
}

void Movie::setMovieCountry(string aMovieCountry)
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

void Movie::setEmitRoom(int aEmitRoom)
{
	this->emitRoom = aEmitRoom;
}

void Movie::setMovieReview(double aMovieReview)
{
	this->movieReview = aMovieReview;
}

void Movie::setTicketPrice(double aTicketPrice)
{
	this->ticketPrice = aTicketPrice;
}

string Movie::getMovieName()
{
	return this->movieName;
}

string Movie::getMovieCountry()
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

int Movie::getEmitRoom()
{
	return this->emitRoom;
}

double Movie::getMovieReview()
{
	return this->movieReview;
}

double Movie::getTicketPrice()
{
	return this->ticketPrice;
}

void Movie::printMovieData()
{
	cout << "\nNombre de la pelicula: " << movieName;
	cout << "  Sala de emision: " << emitRoom;
	cout << "  Anio: " << movieYear;
	cout << "  Region: " << movieCountry;
	cout << "\nDuracion: " << movieLength;
	cout << "  Calificacion: " << movieReview;
	cout << "  Precio del boleto: " << ticketPrice;
}
