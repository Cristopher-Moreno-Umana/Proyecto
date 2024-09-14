#ifndef room_h
#define room_h
class Room
{
private:
	int roomNumber;
	int totalOfSeats;
public:

	Room();
	Room(int aRoomNumber, int aTotalOfSeats);

	void setRoomNumber(int aRoomNumber);
	void setTotalOfSeats(int aTotalOfSeats);

	int getRoomNumber();
	int getTotalOfSeats();
};
#endif