#include "RoomBuilder.h"

RoomBuilder::RoomBuilder()
{
}

RoomBuilder::RoomBuilder(std::shared_ptr<Room> roomProduct) :_roomProduct{ roomProduct }
{

}

RoomBuilder::~RoomBuilder()
{
}

void RoomBuilder::connectDoors()
{
}

Room RoomBuilder::getEntrance()
{
	return Room();
}
