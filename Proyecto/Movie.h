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
	float movieReview;

public:
	Movie();
	Movie(std::string aMovieName, std::string aMovieCountry,
		int aMovieYear, int aMovieLength, float aMovieReview);

	void setMovieName(std::string aMovieName);
	void setMovieCountry(std::string aMovieCountry);
	void setMovieYear(int aMovieYear);
	void setMovieLength(int aMovieLength);
	void setMovieReview(float aMovieReview);

	std::string getMovieName();
	std::string getMovieCountry();
	int getMovieYear();
	int getMovieLength();
	float getMovieReview();
};
#endif