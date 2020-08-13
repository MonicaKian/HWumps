#pragma once
#include <iostream>
#include <iomanip>
#include <limits>
/**
*
* @brief the Menu class encapsulates all user interaction with the Game

*/

class Menu
{
public:
	Menu(std::ostream &display, std::streambuf &input);

	/**
*
* @brief Menus can display a set of functions
1) Displays the current menu
2) Waits for user input
3) Processes the user input

*/

	void displayWelcome(const std::string &author, const std::string &title) const;

};


