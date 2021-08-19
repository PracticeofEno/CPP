#include "Karen.hpp"

unsigned int Hash(std::string data)
{
	unsigned int result(0);

	for (size_t i = 0; i <data.size(); i++)
	{
		unsigned int ch;
		ch = data.at(i);
		result = ch + (result << 4) + (result << 10) + result;
	}
	return (result);
}

Karen::Karen()
{
	_funcs[0] = &Karen::debug;
	_funcs[1] = &Karen::info;
	_funcs[2] = &Karen::warning;
	_funcs[3] = &Karen::error;
}

Karen::~Karen()
{
}

void Karen::complain(std::string level)
{
	unsigned int kk;
	
	kk = Hash(level);
	switch (kk)
	{
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*_funcs[0])();
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			(this->*_funcs[1])();
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*_funcs[2])();
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*_funcs[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info( void )
{
	std::cout << "I cannnot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been comming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void )
{
	std::cout << "This is unaccpetable, I want to speak to manager now." << std::endl;
}