#pragma once
#include "Room.h"
class Wumpus :public Room
{
public:
	Wumpus();
	std::string getApproachMesage();
	std::string getShootMesage();
	std::string getEnterMesage();
	Room getDirection(int direction);
	void setDirection(Room direction);
};

