#include "Schedule.h"

Schedule::Schedule()
{
	hourMovieStarts = 0;
	minuteMovieStarts = 0;
	hourMovieEnds = 0;
	minuteMovieEnds = 0;
	emitDate = " ";
}

Schedule::Schedule(int anHourMovieStarts,int aMinuteMovieStarts, int anHourMovieEnds,
	int aMinuteMovieEnds, std::string aEmitDate)
{
	this->hourMovieStarts = anHourMovieStarts;
	this->minuteMovieStarts = aMinuteMovieStarts;
	this->hourMovieEnds = anHourMovieEnds;
	this->minuteMovieEnds = aMinuteMovieEnds;
	this->emitDate = aEmitDate;
}

void Schedule::setHourMovieStarts(int anHourMovieStarts)
{
	this->hourMovieStarts = anHourMovieStarts;
}

void Schedule::setMinuteMovieStarts(int aMinuteMovieStarts)
{
	this->minuteMovieStarts = aMinuteMovieStarts;
}

void Schedule::setHourMovieEnds(int anHourMovieEnds)
{
	this->hourMovieEnds = anHourMovieEnds;
}

void Schedule::setMinuteMovieEnds(int aMinuteMovieEnds)
{
	this->minuteMovieEnds = aMinuteMovieEnds;
}

void Schedule::setEmitDate(std::string aEmitDate)
{
	this->emitDate = aEmitDate;
}


int Schedule::getHourMovieStarts()
{
	return this->hourMovieStarts;
}

int Schedule::getMinuteMovieStarts()
{
	return this->minuteMovieStarts;
}

int Schedule::getHourMovieEnds()
{
	return this->hourMovieEnds;
}

int Schedule::getMinuteMovieEnds()
{
	return this->minuteMovieEnds;
}

std::string Schedule::getEmitDate()
{
	return this->emitDate;
}

