#include "movie.h"
#include "room.h"
#include "schedule.h"
#include "Seat.h"
#include "declaration_of_all_functions.h"

std::string validateMainMenuOption()
{
	std::string mainMenuOption;

	std::cout << "Ingrese una opcion:\n\n";
	std::cout << "1: Archivo\n";
	std::cout << "2: Mantenimiento\n";
	std::cout << "3: Reserva\n";
	std::cout << "4: Venta\n";
	std::cout << "\nOpcion: ";
	std::cin >> mainMenuOption;

	bool isValidOption = (mainMenuOption == "1") || (mainMenuOption == "2") ||
		(mainMenuOption == "3") || (mainMenuOption == "4");

	while (isValidOption == false)
	{
		std::cout << "\nIngrese una opcion valida: ";
		std::cin >> mainMenuOption;
		isValidOption = (mainMenuOption == "1") || (mainMenuOption == "2") ||
			(mainMenuOption == "3") || (mainMenuOption == "4");
	}
	return mainMenuOption;
}

std::string file(bool* newIsMenuOn)
{
	std::string fileOption;
	std::cout << "Archivo:\n";
	std::cout << "1: Acerca de\n";
	std::cout << "2: Salir\n";
	std::cout << "\nOpcion: ";
	std::cin >> fileOption;

	bool isValidOption = (fileOption == "1") || (fileOption == "2");

	if ((fileOption == "1") && (isValidOption == true))
	{
		return "\n\n***Cristopher Moreno Umana***\n\n";
	}
	else if ((fileOption == "2") && (isValidOption == true))
	{
		system("cls");
		*newIsMenuOn = false;
		return "Gracias por preferir nuestros servicios =)\n\n";
	}

	std::cout << isValidOption;
	return "\n\nOpcion invalida\n\n";
}

void mainMenu()
{
	Movie movieList[9];
	Room roomList[3];
	Schedule scheduleData[20];

	std::string seatsList[10][10];
	bool isMenuOn = true;
	std::string validatedMainMenuOption;

	while (isMenuOn == true)
	{
		validatedMainMenuOption = validateMainMenuOption();

		if (validatedMainMenuOption == "1")
		{
			system("cls");
			std::cout << file(&isMenuOn);
		}
		if (validatedMainMenuOption == "2")
		{
			system("cls");
			maintenance(movieList, roomList, scheduleData);
		}
		if (validatedMainMenuOption == "3")
		{
			system("cls");

		}
		if (validatedMainMenuOption == "4")
		{
			system("cls");

		}
	}
}

std::string validateMaintenanceOption()
{
	std::string maintenanceMenuOption;
	
	std::cout << "\nIngrese una opcion:";
	std::cout << "\n\nAgregar informacion nueva:\n";
	std::cout << "\n1: Peliculas";
	std::cout << "\n2: Salas";
	std::cout << "\n3: Horarios";
	std::cout << "\n\n4: Usar informacion guardada en el sistema";
	std::cout << "\n\nOpcion: ";
	std::cin >> maintenanceMenuOption;

	bool isValidOption = (maintenanceMenuOption == "1") ||
		(maintenanceMenuOption == "2") || (maintenanceMenuOption == "3")||
		(maintenanceMenuOption == "4");
	
	while (isValidOption == false)
	{
		std::cout << "\nIngrese una opcion valida: ";
		std::cin >> maintenanceMenuOption;

		isValidOption = (maintenanceMenuOption == "1") ||
			(maintenanceMenuOption == "2") || (maintenanceMenuOption == "3") ||
			(maintenanceMenuOption == "4");
	}
	return maintenanceMenuOption;
}

int numberOfMoviesToAdd()
{
	int numberOfMovies;

	std::cout << "\nCon un maximo de 9 ingrese la cantidad de peliculas que agregara: ";
	std::cin >> numberOfMovies;
	;

	bool isValidOption = (numberOfMovies > 0) && (numberOfMovies <= 9);
	
	while (isValidOption == false)
	{
		std::cout << "\nError: Ingrese una cantidad de peliculas valida :";
		std::cout << "\nCantidad: ";
		std::cin >> numberOfMovies;

		isValidOption = (numberOfMovies > 0) && (numberOfMovies <= 9);
	}
	return numberOfMovies;
}

void moviesData(Movie newMovieList[])
{
	std::string movieName, movieCountry;
	int movieYear, movieLength, numberOfMovies;
	double movieReview;

	numberOfMovies = numberOfMoviesToAdd();

	std::cout << "\n\nIMPORTANTE: No use espacios ni caracteres especiales.\n";
	std::cout << "En lugar de espacios coloque - o _\n\n";

	system("pause");

	for (int i = 0; i < numberOfMovies; i++)
	{
		std::cout << "\nIngrese el nombre de la pelicula: ";
		std::cin >> movieName;
		std::cout << "\nIngrese el pais de la pelicula: ";
		std::cin >> movieCountry;
		std::cout << "\nIngrese el anio de la pelicula: ";
		std::cin >> movieYear;
		std::cout << "\nIngrese la duracion de la pelicula en minutos: ";
		std::cin >> movieLength;
		std::cout << "\nIngrese la calificacion de la pelicula: ";
		std::cin >> movieReview;

		newMovieList[i] = Movie(movieName, movieCountry, movieYear,
			movieLength, movieReview);

		system("cls");
	}
}

void roomsData(Room newRoomList[])
{
	int roomNumber = 0;
	double ticketPrice;
	int numberSeats;
	int const TOTALSEATSPERROOM = 10 * 10;
	for (int i = 0; i < 3; i++)
	{
		roomNumber++;
		std::cout << "\nIngrese el precio por butaca de la sala " << roomNumber << ": ";
		std::cin >> ticketPrice;
		numberSeats = TOTALSEATSPERROOM;
		newRoomList[i] = Room(roomNumber, ticketPrice, numberSeats);
	}
}

void dataInSystem(Movie newMovieList[], Room newRoomList[], Schedule newScheduleData[])
{
	std::string movieName[6]
	{"Harry_Potter", "Blanca_Nieves", "Avengers", "Spiderman", "Shrek", "John_Wick"};

	std::string movieCountry[6] = { "USA", "USA", "USA", "USA", "USA", "USA"};

	int movieYear[6] = { 2001, 1937, 2012, 2002, 2001, 2014 };
	
	int movieLength[6] = { 152, 83, 143, 121, 89, 95 };

	double movieReview[6] = { 7.9, 8.8, 8, 7.4, 8.5, 7.4 };

	int roomNumber = 1;
	double ticketPrice[6] = {5000, 4300, 6900, 7000, 5750, 6550};
	int numberSeats;
	int const TOTALSEATSPERROOM = 10 * 10;
	
	for (int i = 0; i < 3; i++)
	{
		numberSeats = TOTALSEATSPERROOM;
		newRoomList[i] = Room(roomNumber, ticketPrice[i], numberSeats);
		roomNumber++;
	}

	for (int i = 0; i < 5; i++)
	{
		newMovieList[i] = Movie(movieName[i], movieCountry[i], movieYear[i],
			movieLength[i], movieReview[i]);
	}

	int hourMovieStarts, minuteMoviestarts, hourMovieEnds, minuteMovieEnds;
	int minutesToconvert;
	std::string emitDate = "27/9/2024";

	for (int i = 0; i < 5; i++)
	{
		hourMovieStarts = (rand() % 11) + 10;
		
		minuteMoviestarts = rand() % 60;

		minutesToconvert = newMovieList[i].getMovieLength();
		hourMovieEnds = hourMovieStarts + convertMinutesToHours(minutesToconvert);
		minuteMovieEnds = minuteMoviestarts + remainingMinutes(minutesToconvert);
		newScheduleData[i] = Schedule(hourMovieStarts, minuteMoviestarts,
			hourMovieEnds, minuteMovieEnds, emitDate);
	}

}

int convertMinutesToHours(int newMinutesToconvert)
{
	int totalHours;
	int const TOTALMINUTESPERHOUR = 60;
	totalHours = newMinutesToconvert / TOTALMINUTESPERHOUR;
	return totalHours;
}

int remainingMinutes(int newMinutesToconvert)
{
	int totalMinutes;
	int const TOTALMINUTESPERHOUR = 60;
	totalMinutes = newMinutesToconvert % TOTALMINUTESPERHOUR;
	return totalMinutes;
}

void moviesSchedule(Movie newMovieList[], Schedule newScheduleData[])
{
	int hourMovieStarts, minuteMoviestarts, hourMovieEnds, minuteMovieEnds;
	int minutesToconvert, numberOfMovies = numberOfMoviesToAdd();
	std::string emitDate;

	std::cout << "\nEn formato DD/MM/AA:";
	std::cout << "\nIngrese la fecha en la cual se emitiran las peliculas que ingresara: ";
	std::cin >> emitDate;

	for (int i = 0; i < numberOfMovies; i++)
	{
		std::cout << "\n\nIngrese la hora a en la que inicia la pelicula: ";
		std::cin >> hourMovieStarts;
		std::cout << "\nIngrese el minuto en el cual iniciara la pelicula: ";
		std::cin >> minuteMoviestarts;
		minutesToconvert = newMovieList[i].getMovieLength();
		hourMovieEnds = hourMovieStarts + convertMinutesToHours(minutesToconvert);
		minuteMovieEnds = minuteMoviestarts + remainingMinutes(minutesToconvert);
		newScheduleData[i] = Schedule(hourMovieStarts, minuteMoviestarts,
			hourMovieEnds, minuteMovieEnds, emitDate);
		std::cout << '\n';
	}

}

void maintenance(Movie newMovieList[], Room newRoomList[], Schedule newScheduleData[])
{
	std::string validatedMaintenanceMenuOption = validateMaintenanceOption();

	if (validatedMaintenanceMenuOption == "1")
	{
		moviesData(newMovieList);
	}

	if (validatedMaintenanceMenuOption == "2")
	{
		roomsData(newRoomList);
	}

	if (validatedMaintenanceMenuOption == "3")
	{
		moviesSchedule(newMovieList, newScheduleData);
	}

	if (validatedMaintenanceMenuOption == "4")
	{
		dataInSystem(newMovieList, newRoomList, newScheduleData);
	}
}


