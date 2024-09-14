#include "schedule.h"

Schedule::Schedule()
{
	emitDate = " ";
	hourData = Hour::Hour(0, 0, 0, 0);
}

Schedule::Schedule(string aEmitDate, Hour aHourData)
{
	this->emitDate = aEmitDate;
	this->hourData = aHourData;
}

void Schedule::setEmitData(string aEmitDate)
{
	this->emitDate = aEmitDate;
}

void Schedule::setHourData(Hour aHourData)
{
	this->hourData = aHourData;
}

string Schedule::getEmitData()
{
	return this->emitDate;
}

Hour Schedule::getHourData()
{
	return this->hourData;
}

void Schedule::printScheduleData()
{
	cout << "\nHorario: " << emitDate;
	cout << "  incia: " << hourData.getHourMovieStarts();
	cout << ' ' << hourData.getMinuteMovieStarts();
	cout << "  Termina: " << hourData.getHourMovieEnds();
	cout << ' ' << hourData.getMinuteMovieEnds();
}
