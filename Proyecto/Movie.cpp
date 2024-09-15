#include "movie.h"

Movie::Movie()
{
	movieName = " ";
	movieCountry = " ";
	movieYear = 0;
	movieLength = 0;
	movieReview = 0.0;
}

Movie::Movie(string aMovieName, string aMovieCountry, int aMovieYear, int aMovieLength,
	double aMovieReview)
{
	this->movieName = aMovieName;
	this->movieCountry = aMovieCountry;
	this->movieYear = aMovieYear;
	this->movieLength = aMovieLength;
	this->movieReview = aMovieReview;
}

Movie::~Movie()
{
	
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

void Movie::setMovieReview(double aMovieReview)
{
	this->movieReview = aMovieReview;
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

double Movie::getMovieReview()
{
	return this->movieReview;
}
void Movie::printMovieData()
{
	cout << "\nNombre de la pelicula: " << movieName;
	cout << "\nAnio: " << movieYear;
	cout << "\nRegion: " << movieCountry;
	cout << "\nDuracion: " << movieLength;
	cout << "\nCalificacion: " << movieReview;
}
