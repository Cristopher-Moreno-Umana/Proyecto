#ifndef Header_h
#define Header_h

void mainMenu();

std::string validateMainMenuOption();

std::string file(bool* newIsMenuOn);

int numberOfMoviesToAdd();

void moviesData(Movie newMovieList[]);

std::string validateMaintenanceOption();

int convertMinutesToHours(int newMinutesToconvert);

int remainingMinutes(int newMinutesToconvert);

void moviesSchedule(Movie newMovieList[], Room newRoomList[],
	Schedule newScheduleData[]);

void maintenance(Movie newMovieList[], Room newRoomList[],
	Schedule newScheduleData[]);

void roomsData(Movie newMovieList[], Room newRoomList[]);

#endif 
