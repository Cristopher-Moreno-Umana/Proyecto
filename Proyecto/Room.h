#ifndef Room_h
#define Room_h

class Room
{
private:
	int roomNumber;
	int numberSeats;
	double seatPrice;

public:
	Room();
	Room(int aRoomNumber, int aNumberSeats, double aSeatPrice);

	void setRoomNumber(int aRoomNumber);
	void setNumberSeats(int aNumberSeats);
	void setSeatPrice(double aSeatPrice);

	int getRoomNumber();
	int getNumberSeats();
	double getSeatPrice();
};
#endif