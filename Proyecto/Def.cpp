#include "Movie.h"
#include "Room.h"
#include "Schedule.h"
#include "Header.h"

void mainMenuOption(std::string* newMenuOption)
{
	std::cin >> *newMenuOption;

	bool isValidOption = (*newMenuOption == "1") || (*newMenuOption == "2") ||
		(*newMenuOption == "3") || (*newMenuOption == "4");

	while (isValidOption == false)
	{
		std::cout << "\nIngrese una opcion valida: ";
		std::cin >> *newMenuOption;
		isValidOption = (*newMenuOption == "1") || (*newMenuOption == "2") ||
			(*newMenuOption == "3") || (*newMenuOption == "4");
	}
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

void executeOption(std::string newMenuOption)
{
	
}

void mainMenu()
{
	bool isMenuOn = true;
	std::string menuOption;
	while (isMenuOn == true)
	{
		std::cout << "Ingrese una opcion:\n\n";
		std::cout << "1: Archivo\n";
		std::cout << "2: Mantenimiento\n";
		std::cout << "3: Reserva\n";
		std::cout << "4: Venta\n";
		std::cout << "\nOpcion: ";
		mainMenuOption(&menuOption);
		executeOption(menuOption);
		if (menuOption == "1")
		{
			system("cls");
			std::cout << file(&isMenuOn);
		}
	}
}


