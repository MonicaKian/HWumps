#pragma once
#include "Room.h"
#include <memory>
using namespace std;
class RoomBuilder
{
public:

	/**
*@brief a constructor for BasicRoomBuilder

*/
	RoomBuilder();

	/**
	* @brief a constructor for Room Builder
		* @ param roomProduct as a shared pointer

	*/

	RoomBuilder(std::shared_ptr<Room> roomProduct);
	/**
* @brief a destructor for Room Builder
	*

*/
	virtual ~RoomBuilder();
	/**
* @brief connectDoors will connect the doors
	*

*/
	virtual void connectDoors();
	/**
* @brief buildRoom will build the Room
	*

*/
	virtual void buildRoom() = 0;
	/**
* @brief roomResult gets the Room
	@return Room as a shared pointer
	*

*/
	virtual std::shared_ptr<Room> roomResult() = 0;
	/**
	*@brief getEntrance finds the Room



	*/

	Room getEntrance();

protected:
	/**
* @brief roomProduct as a shared pointer
	*

*/
	std::shared_ptr<Room> _roomProduct;
};

