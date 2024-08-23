#include "movie.h"
#include "room.h"
#include "schedule.h"
#include "declaration_of_all_funtions.h"

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
	Movie movieList[20];
	Room roomList[20];
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
	
	std::cout << "\nIngrese una opcion: ";
	std::cout << "\n\n1: Peliculas";
	std::cout << "\n\n2: Salas";
	std::cout << "\n\n3: Horarios";
	std::cout << "\n\nOption: ";
	std::cin >> maintenanceMenuOption;

	bool isValidOption = (maintenanceMenuOption == "1") ||
		(maintenanceMenuOption == "2") || (maintenanceMenuOption == "3");
	
	while (isValidOption == false)
	{
		std::cout << "\nIngrese una opcion valida: ";
		std::cin >> maintenanceMenuOption;

		isValidOption = (maintenanceMenuOption == "1") || 
			(maintenanceMenuOption == "2") || (maintenanceMenuOption == "3");
	}
	return maintenanceMenuOption;
}

int numberOfMoviesToAdd()
{
	int numberOfMovies;
	std::cout << "\nCon un maximo de 20 ingrese la cantidad de peliculas que agregara: ";
	std::cin >> numberOfMovies;
	return numberOfMovies;
}

void moviesData(Movie newMovieList[])
{
	std::string movieName, movieCountry;
	int movieYear, movieLength, numberOfMovies;
	float movieReview;

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

void roomsData(Movie newMovieList[], Room newRoomList[])
{
	int roomNumber, numberOfMovies = numberOfMoviesToAdd();
	double seatPrice;
	int numberSeats;
	int const TOTALSEATSPERROOM = 10 * 10;
	for (int i = 0; i < numberOfMovies; i++)
	{
		std::cout << "\nIngrese el numero de la sala: ";
		std::cin >> roomNumber;
		std::cout << "\nIngrese el precio por butaca: ";
		std::cin >> seatPrice;
		numberSeats = TOTALSEATSPERROOM;
		newRoomList[i] = Room(roomNumber, seatPrice, numberSeats);
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

void moviesSchedule(Movie newMovieList[], Room newRoomList[],
	Schedule newScheduleData[])
{
	int hourMovieStarts, minuteMoviestarts, hourMovieEnds, minuteMovieEnds;
	int minutesToconvert, numberOfMovies = numberOfMoviesToAdd();
	std::string emitDate;

	for (int i = 0; i < numberOfMovies; i++)
	{
		std::cout << "\nEn formato DD/MM/AA:";
		std::cout << "\nIngrese la fecha en la cual se emitira la pelicula: ";
		std::cin >> emitDate;
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
		roomsData(newMovieList, newRoomList);
	}

	if (validatedMaintenanceMenuOption == "3")
	{
		moviesSchedule(newMovieList, newRoomList, newScheduleData);
	}
}


