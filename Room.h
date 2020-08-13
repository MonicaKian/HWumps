#pragma once
#include <memory>
#include <iostream>
class Room
{
	/*
* @brief getApproachMessage gets the Message on Approach
* @ return description as string
*/ public:
	Room();
	std::string getApproachMesage();
	std::string getShootMesage();
	std::string getEnterMesage();
	Room getDirection(int direction);
	void setDirection(Room direction);
	/**
*@brief connectRooms connects the two rooms based on the direction they are pointing to
@param id1 and id2 are the rooms ids and the two directions that these need to be connected
*/

	void connectRooms(int id1, int id2, char direction1, char direction2);
	/**
*@brief isConnected checks if the two rooms with two ids are connected and returns true or false
@param id1 and id2 are the rooms ids
@return true if the two rooms are connected , false if they are not
*/
	bool isConnected(int id1, int id2);
	/**
*@brief buildRoom builds the Rooms

*/

	void buildRoom();

private:
	/**
*@brief createEntranceRoom builds the  EntranceRooms

*/
	std::shared_ptr<Room> createEntranceRoom();

	/**
*@brief createEmptyRoom builds the  EntranceRooms

*/
	std::shared_ptr<Room> createEmptyRoom();

	/**
*@brief createWumpusRoom builds the  EntranceRooms

*/
	std::shared_ptr<Room> createWumpusRoom();

	/**
*@brief createPitRoom builds the  EntranceRooms

*/
	std::shared_ptr<Room> createPitRoom();
};

