#include "EmptyRoom.h"


EmptyRoom::EmptyRoom()
{
}

std::string EmptyRoom::getApproachMesage()
{
	return std::string();
}

std::string EmptyRoom::getShootMesage()
{
	return std::string("missed");
}

std::string EmptyRoom::getEnterMesage()
{
	return std::string("You walk into an empty room");
}

Room EmptyRoom::getDirection(int direction)
{
	return Room();
}

void EmptyRoom::setDirection(Room direction)
{
}
