#pragma once
#include "Room.h"
class Pit :public Room
{
public:
	Pit();
	std::string getApproachMesage();
	std::string getShootMesage();
	std::string getEnterMesage();
	Room getDirection(int direction);
	void setDirection(Room direction);
};

