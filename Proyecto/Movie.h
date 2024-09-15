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
	double movieReview;
public:
	Movie();
	Movie(string aMovieName, string aMovieCountry, int aMovieYear, int aMovieLength,
		double aMovieReview);
	~Movie();
	void setMovieName(string aMovieName);
	void setMovieCountry(string aMovieCountry);
	void setMovieYear(int aMovieYear);
	void setMovieLength(int aMovieLength);
	void setMovieReview(double aMovieReview);

	string getMovieName();
	string getMovieCountry();
	int getMovieYear();
	int getMovieLength();
	double getMovieReview();

	void printMovieData();
};
#endif