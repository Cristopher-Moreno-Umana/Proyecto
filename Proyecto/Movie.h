#include <iostream>
#ifndef movie_h
#define movie_h

class Movie
{
private:
	std::string movieName;
	std::string movieCountry;
	int movieYear;
	int movieLength;
	double movieReview;

public:
	Movie();
	Movie(std::string aMovieName, std::string aMovieCountry,
		int aMovieYear, int aMovieLength, double aMovieReview);

	void setMovieName(std::string aMovieName);
	void setMovieCountry(std::string aMovieCountry);
	void setMovieYear(int aMovieYear);
	void setMovieLength(int aMovieLength);
	void setMovieReview(double aMovieReview);

	std::string getMovieName();
	std::string getMovieCountry();
	int getMovieYear();
	int getMovieLength();
	double getMovieReview();
};
#endif