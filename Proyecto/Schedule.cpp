#include "schedule.h"

Schedule::Schedule()
{
	emitDate = " ";
	hourMovieStarts = 0;
	hourMovieEnds = 0;
	minuteMovieStarts = 0;
	minuteMovieEnds = 0;
}

Schedule::Schedule(string aEmitDate, int aHourMovieStarts,
	int aHourMovieEnds, int aMinuteMovieStarts, int aMinuteMovieEnds)
{
	this->emitDate = aEmitDate;
	this->hourMovieStarts = aHourMovieStarts;
	this->hourMovieEnds = aHourMovieEnds;
	this->minuteMovieStarts = aMinuteMovieStarts;
	this->minuteMovieEnds = aMinuteMovieEnds;
}

Schedule::~Schedule()
{
}

void Schedule::setEmitData(string aEmitDate)
{
	this->emitDate = aEmitDate;
}

void Schedule::setHourMovieStarts(int aHourMovieStarts)
{
	this->hourMovieStarts = aHourMovieStarts;
}

void Schedule::setHourMovieEnds(int aHourMovieEnds)
{
	this->hourMovieEnds = aHourMovieEnds;
}

void Schedule::setMinuteMovieStarts(int aMinuteMovieStarts)
{
	this->minuteMovieStarts = aMinuteMovieStarts;
}

void Schedule::setMinuteMovieEnds(int aMinuteMovieEnds)
{
	this->minuteMovieStarts = aMinuteMovieEnds;
}

int Schedule::getHourMovieStarts()
{
	return this->hourMovieStarts;
}

int Schedule::getHourMovieEnds()
{
	return this->hourMovieEnds;
}

int Schedule::getMinuteMovieStarts()
{
	return this->minuteMovieStarts;
}

int Schedule::getMinuteMovieEnds()
{
	return this->minuteMovieEnds;
}

string Schedule::getEmitData()
{
	return this->emitDate;
}

void Schedule::convertMinutesInHours(int newMinutesToConvert)
{
	int totalHours;
	int const TOTALMINUTESPERHOUR = 60, TOTALHOURSPERDAY = 24;
	totalHours = newMinutesToConvert / TOTALMINUTESPERHOUR;
	this->hourMovieEnds = hourMovieStarts + totalHours;

	if (hourMovieEnds >= TOTALHOURSPERDAY || hourMovieStarts >= TOTALHOURSPERDAY)
	{
		cout << "\nIngreso una hora no valida.";
		cout << "\nAl salir ingrese nuevamente la hora.";
		cout << '\n';
		system("pause");
		cout << '\n';
	}
}

void Schedule::remainingMinutes(int newRemainingMinutes)
{
	int totalMinutes;
	int const TOTALMINUTESPERHOUR = 60;
	totalMinutes = newRemainingMinutes % TOTALMINUTESPERHOUR;
	this->minuteMovieEnds = minuteMovieStarts + totalMinutes;

	while (minuteMovieEnds >= TOTALMINUTESPERHOUR)
	{
		this->minuteMovieEnds -= TOTALMINUTESPERHOUR;
		this->hourMovieEnds++;
	}
}

void Schedule::printScheduleData()
{
	cout << "\nHorario: " << emitDate;
	cout << "\nincia: " << hourMovieStarts;
	cout << ':' << minuteMovieStarts;
	cout << "\nTermina: " << hourMovieEnds;
	cout << ':' << minuteMovieEnds;
	cout << "\n\n";
}
