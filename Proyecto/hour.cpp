#include "hour.h"

Hour::Hour()
{
	hourMovieStarts = 0;
	hourMovieEnds = 0;
	minuteMovieStarts = 0;
	minuteMovieEnds = 0;
}

Hour::Hour(int aHourMovieStarts, int aHourMovieEnds, int aMinuteMovieStarts, int aMinuteMovieEnds)
{
	this->hourMovieStarts = aHourMovieStarts;
	this->hourMovieEnds = aHourMovieEnds;
	this->minuteMovieStarts = aMinuteMovieStarts;
	this->minuteMovieEnds = aMinuteMovieEnds;
}

void Hour::setHourMovieStarts(int aHourMovieStarts)
{
	this->hourMovieStarts = aHourMovieStarts;
}

void Hour::setHourMovieEnds(int aHourMovieEnds)
{
	this->hourMovieEnds = aHourMovieEnds;
}

void Hour::setMinuteMovieStarts(int aMinuteMovieStarts)
{
	this->minuteMovieStarts = aMinuteMovieStarts;
}

void Hour::setMinuteMovieEnds(int aMinuteMovieEnds)
{
	this->minuteMovieEnds = aMinuteMovieEnds;
}

int Hour::getHourMovieStarts()
{
	return this->hourMovieStarts;
}

int Hour::getHourMovieEnds()
{
	return this->hourMovieEnds;
}

int Hour::getMinuteMovieStarts()
{
	return this->minuteMovieStarts;
}

int Hour::getMinuteMovieEnds()
{
	return this->minuteMovieEnds;
}

void Hour::convertMinuteInHours(int aMinutesToConvert)
{
	int totalHours;
	int const TOTALMINUTESPERHOUR = 60;
	totalHours = aMinutesToConvert / TOTALMINUTESPERHOUR;
	this->hourMovieEnds = hourMovieStarts + totalHours;
}

void Hour::remainingMinutes(int aRemainingMinutes)
{
	int totalMinutes;
	int const TOTALMINUTESPERHOUR = 60;
	totalMinutes = aRemainingMinutes % TOTALMINUTESPERHOUR;
	this->minuteMovieEnds = minuteMovieStarts + totalMinutes;
}