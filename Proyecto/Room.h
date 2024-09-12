#ifndef room_h
#define room_h
class Room
{
private:
	int roomNumber;
	int numberSeats;
	double ticketPrice;
public:
	Room();
	Room(int aRoomNumber, double aTicketPrice, int aNumberSeats);
	void setRoomNumber(int aRoomNumber);
	void setNumberSeats(int aNumberSeats);
	void setTicketPrice(double aTicketPrice);

	int getRoomNumber();
	int getNumberSeats();
	double getTicketPrice();
	
};
#endif