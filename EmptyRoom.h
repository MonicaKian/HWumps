#pragma once
#include "Room.h"
class EmptyRoom :public Room
{
public:
	EmptyRoom();
	std::string getApproachMesage();
	std::string getShootMesage();
	std::string getEnterMesage();
	Room getDirection(int direction);
	void setDirection(Room direction);
};

