#ifndef declaration_of_all_functions_h
#define declaration_of_all_functions_h
#include "libraries_of_the_project.h"
#include "movie.h"
#include "room.h"
#include "schedule.h"
#include "cinema.h"

void mainMenu();

string validateMainMenuOption();

string file(bool* newIsMenuOn);

void moviesData(Movie* newMovieData, int newLength);

void roomsData(Room* newRoomsData, int newLength);

void moviesScheduleData(Movie* newMovieData, Schedule* newScheduleData, int newLength);

string validateMaintenanceOption();

void maintenance(Cinema* newCinemaData, int newLength);

void ticketReservation(Cinema* newCinemaData, int newLength);
#endif 
