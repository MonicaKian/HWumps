#include "Wumpus.h"

Wumpus::Wumpus()
{
}

std::string Wumpus::getApproachMesage()
{
	return std::string("You are approaching into the Wumpus Room");
}

std::string Wumpus::getShootMesage()
{
	return std::string("Was shot in the Wumpus Room");
}

std::string Wumpus::getEnterMesage()
{
	return std::string("You walk into the Wumpus Room");
}

Room Wumpus::getDirection(int direction)
{
	return Room();
}

void Wumpus::setDirection(Room direction)
{
}
