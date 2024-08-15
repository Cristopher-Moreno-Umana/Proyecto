#include "Movie.h"
#include "Room.h"

Movie::Movie()
{
	movieName = ' ';
	movieCountry = ' ';
	movieYear = 0;
	movieLength = 0;
	movieReview = 0;
}
Movie::Movie(std::string aMovieName, std::string aMovieCountry,
	int aMovieYear, int aMovieLength, int aMovieReview)
{
	this->movieName = aMovieName;
	this->movieCountry = aMovieCountry;
	this->movieYear = aMovieYear;
	this->movieLength = aMovieLength;
	this->movieReview = aMovieReview;
}

void Movie::setMovieName(std::string aMovieName)
{
	this->movieName = aMovieName;
}
void Movie::setMovieCountry(std::string aMovieCountry)
{
	this->movieCountry = aMovieCountry;
}
void Movie::setMovieYear(int aMovieYear)
{
	this->movieYear = aMovieYear;
}
void Movie::setMovieLength(int aMovieLength)
{
	this->movieLength = aMovieLength;
}
void Movie::setMovieReview(int aMovieReview)
{
	this->movieReview = aMovieReview;
}

std::string Movie::getMovieName()
{
	return this->movieName;
}
std::string Movie::getMovieCountry()
{
	return this->movieCountry;
}
int Movie::getMovieYear()
{
	return this->movieYear;
}
int Movie::getMovieLength()
{
	return this->movieLength;
}
int Movie::getMovieReview()
{
	return this->movieReview;
}

Room::Room()
{
	roomNumber = 0;
	numberSeats = 0;
	seatPrice = 0.0;
}
Room::Room(int aRoomNumber, int aNumberSeats, double aSeatPrice)
{
	this->roomNumber = aRoomNumber;
	this->numberSeats = aNumberSeats;
	this->seatPrice = aSeatPrice;
}

void Room::setRoomNumber(int aRoomNumber)
{
	this->roomNumber = aRoomNumber;
}
void Room::setNumberSeats(int aNumberSeats)
{
	this->numberSeats = aNumberSeats;
}
void Room::setSeatPrice(double aSeatPrice)
{
	this->seatPrice = aSeatPrice;
}

int Room::getRoomNumber()
{
	return this->roomNumber;
}
int Room::getNumberSeats()
{
	return this->numberSeats;
}
double Room::getSeatPrice()
{
	return this->seatPrice;
}

std::string menu()
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
std::string file()
{
	int fileOption;
	std::cout << "\n\nArchivo:\n";
	std::cout << "1: Acerca de\n";
	std::cout << "2: Salir\n";
	std::cout << "\nOpcion: ";
	std::cin >> fileOption;
	
	bool isValidOption = (fileOption > 0 && fileOption < 3);
	if (fileOption == 1 && isValidOption == true)
	{
		return "\n\n***Cristopher Moreno Umana***\n\n";
	}
	else if (fileOption == 2 && isValidOption == true)
	{
		system("cls");
		return "Gracias por preferir nuestros servicios =)\n\n";
	}
	return "\n\nOpcion invalida";
}