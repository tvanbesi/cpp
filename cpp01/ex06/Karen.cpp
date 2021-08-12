#include <iostream>

#include "Karen.hpp"

typedef	void (Karen::*levelFunctions)(void);

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

int
	getComplainLevel(std::string level)
{
	std::string	levelNames[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
		if (!level.compare(levelNames[i]))
			return (i);
	return (-1);
}

void
	Karen::complain(std::string level)
{
	int	complainLevel;

	levelFunctions functions[4] = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	complainLevel = getComplainLevel(level);
	if (complainLevel != -1)
		(this->*functions[complainLevel])();
}

void
	Karen::debug(void)
{
	std::cout << "I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void
	Karen::info(void)
{
	std::cout << "I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void
	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void
	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
