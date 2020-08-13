#include "Room.h"

Room::Room()
{
}

std::string Room::getApproachMesage()
{
	return std::string();
}

std::string Room::getShootMesage()
{
	return std::string();
}

std::string Room::getEnterMesage()
{
	return std::string();
}

Room Room::getDirection(int direction)
{
	return Room();
}

void Room::setDirection(Room direction)
{
}

void Room::connectRooms(int id1, int id2, char direction1, char direction2)
{
}

bool Room::isConnected(int id1, int id2)
{
	return false;
}

void Room::buildRoom()
{
}

std::shared_ptr<Room> Room::createEntranceRoom()
{
	return std::shared_ptr<Room>();
}

std::shared_ptr<Room> Room::createEmptyRoom()
{
	return std::shared_ptr<Room>();
}

std::shared_ptr<Room> Room::createWumpusRoom()
{
	return std::shared_ptr<Room>();
}

std::shared_ptr<Room> Room::createPitRoom()
{
	return std::shared_ptr<Room>();
}


