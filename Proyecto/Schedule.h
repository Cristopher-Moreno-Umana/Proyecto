#include <iostream>
#ifndef Schedule_h
#define Schedule_h
class Schedule
{
private:
	int hourMovieStarts;
	int minuteMovieStarts;
	int hourMovieEnds;
	int minuteMovieEnds;
	std::string emitDate;
public:
	
	Schedule();
	Schedule(int anHourMovieStarts, int aMinuteMovieStarts,int anHourMovieEnds,
		int aMinuteMovieEnds, std::string aEmitDate);

	void setHourMovieStarts(int anHourMovieStarts);
	void setMinuteMovieStarts(int aMinuteMovieStarts);
	void setHourMovieEnds(int anHourMovieEnds);
	void setMinuteMovieEnds(int aMinuteMovieEnds);
	void setEmitDate(std::string aEmitDate);

	int getHourMovieStarts();
	int getMinuteMovieStarts();
	int getHourMovieEnds();
	int getMinuteMovieEnds();
	std::string getEmitDate();
};
#endif



