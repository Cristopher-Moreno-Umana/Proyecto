#include "libraries_of_the_project.h"
#include "declaration_of_project_functions.h"
#include "cinema.h"
#include "movie.h"
#include "room.h"
#include "schedule.h"
#include "seatsList.h"
#include "bill.h"
#include "client.h"

std::string validateMainMenuOption()
{
	std::string mainMenuOption;

	std::cout << "\nIngrese una opcion:\n\n";
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
	int length;
	Bill clientBill;

	cout << "Ingrese la cantidad de peliculas que usara: ";
	cin >> length;

	Cinema* cinemaData;
	
	cinemaData = new Cinema[length];

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
			maintenance(cinemaData, length);
		}
		if (validatedMainMenuOption == "3")
		{
			system("cls");
			ticketReservation(cinemaData,length,clientBill);
		}
		if (validatedMainMenuOption == "4")
		{
			system("cls");
			ticketSale(clientBill);
		}
	}
}

void moviesData(Movie* newMovieData, int newLength)
{
	std::string movieName, movieCountry;
	int movieYear, movieLength;
	double movieReview;

	cin.ignore();
	for (int i = 0; i < newLength; i++)
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
		newMovieData[i] = Movie(movieName, movieCountry, movieYear, movieLength,
			movieReview);
	}	
	system("cls");
}

void roomsData(Room* newRoomsData, int newLength)
{
	int roomNumber = 0, numberOfSeats;
	int const TOTALSEATSPERROOM = 10 * 10;
	double ticketPrice;
	for (int i = 0; i < newLength; i++)
	{
		roomNumber++;
		numberOfSeats = TOTALSEATSPERROOM;

		cout << "\nIngrese el precio del boleto: ";
		cin >> ticketPrice;

		newRoomsData[i] = Room(roomNumber, numberOfSeats, ticketPrice);
	}
}

void moviesScheduleData(Movie* newMovieData, Schedule* newScheduleData, int newLength)
{
	int hourMovieStarts, minuteMoviestarts, hourMovieEnds = 0, minuteMovieEnds = 0;
	int minutesToconvert = 0, i = 0;

	std::string emitDate;

	for (int i = 0; i < newLength; i++)
	{
		cout << "\nEn formato DD/MM/AA:";
		cout << "\nIngrese la fecha en la cual se emitiran las peliculas que ingresara: ";
		cin >> emitDate;
		cout << "\n\nEn formato de 24h:";
		cout << "\nIngrese la hora en la que iniciara la pelicula: ";
		cin >> hourMovieStarts;
		cout << "\n\nIngrese el minuto en el cual iniciara la pelicula: ";
		cin >> minuteMoviestarts;

		minutesToconvert = newMovieData[i].getMovieLength();
	
		newScheduleData[i] = Schedule(emitDate, hourMovieStarts, hourMovieEnds,
			minuteMoviestarts, minuteMovieEnds);

		newScheduleData[i].convertMinutesInHours(minutesToconvert);
		newScheduleData[i].remainingMinutes(minutesToconvert);

	}
}

string validateMaintenanceOption()
{
	string maintenanceMenuOption;

	cout << "\nIngrese una opcion:";
	cout << "\n\nSi ingresara datos NO salga hasta ingresar los datos de las 3 areas\n";
	cout << "\n1: Peliculas";
	cout << "\n2: Salas";
	cout << "\n3: Horarios";
	cout << "\n4: Volver";
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

void maintenance(Cinema* newCinemaData, int newLength)
{
	bool isMaintenanceMenuOn = true;

	std::string validatedMaintenanceMenuOption;

	Movie* moviesFullData;
	
	moviesFullData = new Movie[newLength];

	Room* roomsFullData;
	
	roomsFullData = new Room[newLength];

	Schedule* scheduleFullData;

	scheduleFullData = new Schedule[newLength];

	while (isMaintenanceMenuOn == true)
	{
		validatedMaintenanceMenuOption = validateMaintenanceOption();

		if (validatedMaintenanceMenuOption == "1")
		{
			moviesData(moviesFullData, newLength);
		}

		if (validatedMaintenanceMenuOption == "2")
		{
			roomsData(roomsFullData, newLength);
			cout << "\nLista de salas generada con exito.\n\n";
		}

		if (validatedMaintenanceMenuOption == "3")
		{
			moviesScheduleData(moviesFullData, scheduleFullData, newLength);
		}
		if (validatedMaintenanceMenuOption == "4")
		{
			isMaintenanceMenuOn = false;
		}
		for (int i = 0; i < newLength; i++)
		{
			newCinemaData[i] = Cinema(moviesFullData[i], roomsFullData[i], scheduleFullData[i]);
		}
	}

	delete[] moviesFullData;
	delete[] roomsFullData;
	delete[] scheduleFullData;
}

void ticketReservation(Cinema* newCinemaData, int newLength, Bill& aClientBill)
{
	int countOfMovies = 1, movieReservationNumber, numberOfTickets = 1;
	double mountToPay;
	string ticketID = "M", seatID;
	SeatsList seatsMatrix;

	int numberOfTicketID = (rand() % 100) + 1;

	ticketID += to_string(numberOfTicketID);

	for (int i = 0; i < newLength; i++)
	{
		cout <<"\nNumero de pelicula: " << countOfMovies << '\n';
		newCinemaData[i].getMoviesList().printMovieData();
		newCinemaData[i].getRoomsList().printRoomData();
		newCinemaData[i].getMoviesScheduleList().printScheduleData();
		countOfMovies++;
	}
	cout << "\nIngrese el numero de pelicula en la cual se hara la reserva: ";
	cout << "\n\nNumero: ";
	cin >> movieReservationNumber;
	cout << "\nIngrese la cantidad de boletos que reservara: ";
	cin >> numberOfTickets;

	seatsMatrix.fillSeatsMatrix();
	seatsMatrix.printSeatsMatrixConditionAndID();

	cout << "\nIngrese el ID de la butaca para hacer la reservacion: ";
	cin >> seatID;
	seatsMatrix.changeSeatCondition(seatID);

	mountToPay = newCinemaData[movieReservationNumber - 1].getRoomsList().getAticketPrice();

	mountToPay *= numberOfTickets;

	aClientBill = Bill(mountToPay, ticketID);
	aClientBill.printBillID();

	cout << "\n\nEl cliente pagara un total de: " << mountToPay;
	cout << " por un total de: " << numberOfTickets << " boletos";
}

void ticketSale(Bill aClientBill)
{
	Client verifyClientData;
	string verifyBillID, clientIDCard, clientCard;

	cout << "\nIngrese el ID de la factura: ";
	cin >> verifyBillID;

	if (verifyBillID == aClientBill.getTickedID())
	{
		cout << "\nIngrese el numero de cedula de el cliente: ";
		cin >> clientIDCard;
		cout << "\nIngrese el numero de tarjeta de el cliente: ";
		cin >> clientCard;
		cout << "\nPago realizado con exito";
	}
	else
	{
		cout << "\nEl numero de factura no existe";
	}
}

