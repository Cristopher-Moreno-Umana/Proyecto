#ifndef room_h
#define room_h
#include "libraries_of_the_project.h"
class Room
{
private:
	int roomNumber, totalOfSeats;
	double ticketPrice;
public:

	Room();
	Room(int aRoomNumber, int aTotalOfSeats, double aTicketPrice);

	~Room();

	void setRoomNumber(int aRoomNumber);
	void setTotalOfSeats(int aTotalOfSeats);
	void setTicketPrice(double aTicketPrice);

	int getRoomNumber();
	int getTotalOfSeats();
	double getAticketPrice();

	void printRoomData();
};
#endif