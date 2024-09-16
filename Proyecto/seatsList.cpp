#include "seatsList.h"

SeatsList::SeatsList()
{

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			seatsMatrix[i][j] = Seat(" ", " ");
		}
	}
}

void SeatsList::fillSeatsMatrix()
{
	int idNumber = 1, randomSeatCondition;
	string idLetter;
	const string CONDITION[3] = { "L","V","R" };

	for (int i = 0; i < 10; i++)
	{

		for (int j = 0; j < 10; j++)
		{
			randomSeatCondition = (rand() % 3);
			idLetter = "A";
			seatsMatrix[i][j] = Seat(idLetter += to_string(idNumber), CONDITION[randomSeatCondition]);
			idNumber++;
		}
	}
}

void SeatsList::printSeatsMatrixCondition()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << setw(4) << seatsMatrix[i][j].getSeatCondition() << ' ';
		}
		cout << '\n';
	}
}

void SeatsList::printSeatsMatrixID()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << setw(4) << seatsMatrix[i][j].getSeatID() << ' ';
		}
		cout << '\n';
	}
}

void SeatsList::printSeatsMatrixConditionAndID()
{
	cout << "\nLas butacas cuentan con 3 estados:";
	cout << "\n\n L: Libre. Disponible para su reserva.";
	cout << "\n R: Reservada. Disponible para su venta.";
	cout << "\n V: Vendida. No disponible para las anteriores.\n\n";
	cout << "\nIMPORTANTE:";
	cout <<	"\nLos boletos reservados solo se pueden vender hasta que falten 30 min para la proyeccion.\n\n";
	system("pause");
	cout << '\n';
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << setw(7) << seatsMatrix[i][j].getSeatConditionAndID() << ' ';
		}
		cout << '\n';
	}
}

void SeatsList::changeSeatCondition(string anIDNumber)
{
	int size = 10 * 10;
	string newCondition;
	bool isSeatAvailable = false;

	for (int i = 0; i < size; i++)
	{
		isSeatAvailable = (seatsMatrix[i / 10][i % 10].getSeatID() == anIDNumber) &&
			(seatsMatrix[i / 10][i % 10].getSeatCondition() == "L");

		if (isSeatAvailable == true)
		{
			cout << "\nIngrese el nuevo estado de la butaca: ";
			cin >> newCondition;
			seatsMatrix[i / 10][i % 10].setSeatCondition(newCondition);
			cout << "\nOperacion realizada con exito";
			i = size;
		}
	}
	if (isSeatAvailable == false)
	{
		cout << "\nLa butaca no existe o no esta disponible.";
	}
}

