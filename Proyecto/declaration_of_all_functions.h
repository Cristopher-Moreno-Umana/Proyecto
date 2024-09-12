#ifndef declaration_of_all_functions_h
#define declaration_of_all_functions_h

void mainMenu();

std::string validateMainMenuOption();

std::string file(bool* newIsMenuOn);

int numberOfMoviesToAdd();

void moviesData(Movie newMovieList[]);

std::string validateMaintenanceOption();

int convertMinutesToHours(int newMinutesToconvert);

int remainingMinutes(int newMinutesToconvert);

void moviesSchedule(Movie newMovieList[], Schedule newScheduleData[]);

void maintenance(Movie newMovieList[], Room newRoomList[],
	Schedule newScheduleData[]);

void roomsData(Room newRoomList[]);

void dataInSystem(Movie newMovieList[], Room newRoomList[], Schedule newScheduleData[]);

#endif 
