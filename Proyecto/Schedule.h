#ifndef schedule_h
#define schedule_h
#include "libraries_of_the_project.h"
class Schedule
{
private:
	string emitDate;
	int hourMovieStarts, hourMovieEnds, minuteMovieStarts, minuteMovieEnds;
public:
	Schedule();
	Schedule(string aEmitDate,int aHourMovieStarts,
		int aHourMovieEnds, int aMinuteMovieStarts,int aMinuteMovieEnds);
	
	~Schedule();

	void setEmitData(string aEmitDate);
	void setHourMovieStarts(int aHourMovieStarts);
	void setHourMovieEnds(int aHourMovieEnds);
	void setMinuteMovieStarts(int aMinuteMovieStarts);
	void setMinuteMovieEnds(int aMinuteMovieEnds);

	int getHourMovieStarts();
	int getHourMovieEnds();
	int getMinuteMovieStarts();
	int getMinuteMovieEnds();
	string getEmitData();

	void convertMinutesInHours(int newMinutesToConvert);
	void remainingMinutes(int newRemainingMinutes);

	void printScheduleData();


};
#endif



