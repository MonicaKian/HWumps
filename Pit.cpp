#include "Pit.h"

Pit::Pit()
{
}

std::string Pit::getApproachMesage()
{
	return std::string("Youa re approaching pit room");
}

std::string Pit::getShootMesage()
{
	return std::string("You are shot in Pit Room");
}

std::string Pit::getEnterMesage()
{
	return std::string("You have Entered the Pit Room");
}

Room Pit::getDirection(int direction)
{
	return Room();
}

void Pit::setDirection(Room direction)
{
}
