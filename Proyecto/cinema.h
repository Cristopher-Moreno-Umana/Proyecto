#ifndef cinema_h
#define cinema_h
#include "movie.h"
#include "room.h"
#include "schedule.h"
class Cinema
{
private:
	Movie moviesList;
	Room  roomsList;
	Schedule moviesScheduleList;
public:
	Cinema();
	Cinema(Movie newMoviesList, Room newRoomsList, Schedule newMoviesScheduleList);
	
	~Cinema();

	void setMovieList(Movie newMoviesList);
	void setRoomList(Room newRoomsList);
	void setMoviesScheduleList(Schedule newMoviesScheduleList);

	Movie getMoviesList();
	Room getRoomsList();
	Schedule getMoviesScheduleList();
};
#endif