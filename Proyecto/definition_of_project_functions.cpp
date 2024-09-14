#include "movie.h"
#include "room.h"
#include "schedule.h"
#include "Seat.h"
#include "declaration_of_project_functions.h"

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
	bool isMenuOn = true;
	string validatedMainMenuOption;
	//int arraysLength = decideArraysLength();
	const int TEMPORARYLENGTH = 1;
	Movie* moviesList;
	moviesList = new Movie[TEMPORARYLENGTH];
	Room* roomsList;
	roomsList = new Room[TEMPORARYLENGTH];
	Schedule* scheduleData;
	scheduleData = new Schedule[TEMPORARYLENGTH];

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
			maintenance(moviesList, roomsList, scheduleData);
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

int decideArraysLength()
{
	string typeOfData;
	int arraysLength = 0;
	cout << "Agregara datos?: ";
	cout << "\n 1: Si" << "\n Cualquier otro caracter: No" << "\n\nRespuesta: ";
	cin >> typeOfData;

	if (typeOfData == "1")
	{
		cout << "\nIngrese la cantidad de peliculas que agregara: ";
		cin >> arraysLength;
		return arraysLength;
	}
	
	return arraysLength += 6;
}

void moviesData(Movie* newMoviesList, int newArraysLength)
{
	std::string movieName, movieCountry;
	int movieYear, movieLength, emitRoom;
	double movieReview, ticketPrice;

	//numberOfMovies = numberOfMoviesToAdd();
	cin.ignore();
	for (int i = 0; i < newArraysLength; i++)
	{
		cout << "\nIngrese el nombre de la pelicula: ";
		getline(cin, movieName);
		cout << "\nIngrese el pais de la pelicula: ";
		getline(cin, movieCountry);
		cout << "\nIngrese el anio de la pelicula: ";
		cin >> movieYear;
		cout << "\nIngrese la duracion de la pelicula en minutos: ";
		cin >> movieLength;
		cout << "\nIngrese la calificacion de la pelicula: ";
		cin >> movieReview;
		cout << "\nTomando en cuenta la cantidad de salas:\n";
		cout << "\nIngrese la sala en la cual se emitira la pelicula: ";
		cin >> emitRoom;
		cout << "\nIngrese el valor que tendra el boleto de la pelicula: ";
		cin >> ticketPrice;
		newMoviesList[i] = Movie(movieName, movieCountry, movieYear, movieLength, 
			emitRoom, movieReview, ticketPrice);

		system("cls");
	}
}

void roomsData(Room* newRoomList, int newArraysLength)
{
	int roomNumber = 0;
	int numberSeats;
	int const TOTALSEATSPERROOM = 10 * 10;
	for (int i = 0; i < newArraysLength; i++)
	{
		roomNumber++;
		numberSeats = TOTALSEATSPERROOM;
		newRoomList[i] = Room(roomNumber, numberSeats);
	}
	cout << "\nLista de salas generada con exito.\n\n";
}

void moviesScheduleData(Movie* newMovieList, Schedule* newScheduleData, int newArraysLength)
{
	int hourMovieStarts, minuteMoviestarts, hourMovieEnds = 0, minuteMovieEnds = 0;
	int minutesToconvert;
	std::string emitDate;
	Hour hourData;
	std::cout << "\nEn formato DD/MM/AA:";
	std::cout << "\nIngrese la fecha en la cual se emitiran las peliculas que ingresara: ";
	std::cin >> emitDate;

	for (int i = 0; i < newArraysLength; i++)
	{
		std::cout << "\n\nIngrese la hora en la que inicia la pelicula: ";
		std::cin >> hourMovieStarts;
		std::cout << "\nIngrese el minuto en el cual iniciara la pelicula: ";
		std::cin >> minuteMoviestarts;

		minutesToconvert = newMovieList[i].getMovieLength();

		hourData = Hour(hourMovieEnds, hourMovieEnds, minuteMoviestarts, minuteMovieEnds);

		hourData.convertMinuteInHours(minutesToconvert);
		hourData.remainingMinutes(minutesToconvert);

		newScheduleData[i] = Schedule(emitDate, hourData);
	}

}

string validateMaintenanceOption()
{
	string maintenanceMenuOption;

	cout << "\nIngrese una opcion:";
	cout << "\n\nAgregar informacion nueva:\n";
	cout << "\n1: Peliculas";
	cout << "\n2: Salas";
	cout << "\n3: Horarios";
	cout << "\n\n4: Usar informacion guardada en el sistema";
	cout << "\n\nOpcion: ";
	cin >> maintenanceMenuOption;

	bool isValidOption = (maintenanceMenuOption == "1") ||
		(maintenanceMenuOption == "2") || (maintenanceMenuOption == "3") ||
		(maintenanceMenuOption == "4");

	while (isValidOption == false)
	{
		cout << "\nIngrese una opcion valida: ";
		cin >> maintenanceMenuOption;

		isValidOption = (maintenanceMenuOption == "1") ||
			(maintenanceMenuOption == "2") || (maintenanceMenuOption == "3") ||
			(maintenanceMenuOption == "4");
	}
	return maintenanceMenuOption;
}

void maintenance(Movie* newMovieList, Room* newRoomList, Schedule* newScheduleData)
{
	int arraysLength = decideArraysLength();
	std::string validatedMaintenanceMenuOption = validateMaintenanceOption();

	if (validatedMaintenanceMenuOption == "1")
	{
		moviesData(newMovieList,arraysLength);
	}

	if (validatedMaintenanceMenuOption == "2")
	{
		roomsData(newRoomList, arraysLength);
	}

	if (validatedMaintenanceMenuOption == "3")
	{
		moviesScheduleData(newMovieList, newScheduleData, arraysLength);
	}

	if (validatedMaintenanceMenuOption == "4")
	{
		//dataInSystem(newMovieList, newRoomList, newScheduleData);
	}
}

