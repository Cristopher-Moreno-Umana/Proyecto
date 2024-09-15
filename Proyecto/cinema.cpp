#include "cinema.h"

Cinema::Cinema()
{
	this->moviesList = Movie::Movie(" ", " ", 0, 0, 0.0);
	this->roomsList = Room::Room(0,0,0.0);
	this->moviesScheduleList = Schedule::Schedule(" ",0,0,0,0);
}
Cinema::Cinema(Movie newMoviesList, Room newRoomsList, Schedule newMoviesScheduleList)
{
	this->moviesList = newMoviesList;
	this->roomsList = newRoomsList;
	this->moviesScheduleList = newMoviesScheduleList;
}

Cinema::~Cinema()
{
}

void Cinema::setMovieList(Movie newMoviesList)
{
	this->moviesList = newMoviesList;
}

void Cinema::setRoomList(Room newRoomsList)
{
	this->roomsList = newRoomsList;
}

void Cinema::setMoviesScheduleList(Schedule newMoviesScheduleList)
{
	this->moviesScheduleList = newMoviesScheduleList;
}

Movie Cinema::getMoviesList()
{
	return this->moviesList;
}

Room Cinema::getRoomsList()
{
	return this->roomsList;
}

Schedule Cinema::getMoviesScheduleList()
{
	return this->moviesScheduleList;
}
