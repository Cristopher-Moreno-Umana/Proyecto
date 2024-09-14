#ifndef movie_h
#define movie_h
#include "libraries_of_the_project.h"
class Movie
{
private:
	string movieName;
	string movieCountry;
	int movieYear;
	int movieLength;
	int emitRoom;
	double movieReview;
	double ticketPrice;
public:
	Movie();
	Movie(string aMovieName, string aMovieCountry, int aMovieYear, int aMovieLength,
		int aEmitRoom, double aMovieReview, double aTicketPrice);

	void setMovieName(string aMovieName);
	void setMovieCountry(string aMovieCountry);
	void setMovieYear(int aMovieYear);
	void setMovieLength(int aMovieLength);
	void setEmitRoom(int aEmitRoom);
	void setMovieReview(double aMovieReview);
	void setTicketPrice(double aTicketPrice);

	string getMovieName();
	string getMovieCountry();
	int getMovieYear();
	int getMovieLength();
	int getEmitRoom();
	double getMovieReview();
	double getTicketPrice();

	void printMovieData();
};
#endif