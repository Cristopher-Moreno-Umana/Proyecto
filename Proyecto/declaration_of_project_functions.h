#ifndef declaration_of_all_functions_h
#define declaration_of_all_functions_h
#include "libraries_of_the_project.h"

void mainMenu();

string validateMainMenuOption();

string file(bool* newIsMenuOn);

int decideArraysLength();

void moviesData(Movie* newMoviesList, int newArraysLength);

void roomsData(Room* newRoomList, int newArraysLength);

void moviesScheduleData(Movie* newMovieList, Schedule* newScheduleData, int newArraysLength);

string validateMaintenanceOption();

void maintenance(Movie* newMovieList, Room* newRoomList, Schedule* newScheduleData);

#endif 
