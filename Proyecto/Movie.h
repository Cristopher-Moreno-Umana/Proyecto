#include <iostream>
#ifndef Movie_h
#define Movie_h

class Movie
{
private:
	std::string movieName;
	std::string movieCountry;
	int movieYear;
	int movieLength;
	int movieReview;

public:
	Movie();
	Movie(std::string aMovieName, std::string aMovieCountry,
		int aMovieYear, int aMovieLength, int aMovieReview);

	void setMovieName(std::string aMovieName);
	void setMovieCountry(std::string aMovieCountry);
	void setMovieYear(int aMovieYear);
	void setMovieLength(int aMovieLength);
	void setMovieReview(int aMovieReview);

	std::string getMovieName();
	std::string getMovieCountry();
	int getMovieYear();
	int getMovieLength();
	int getMovieReview();
};
#endif