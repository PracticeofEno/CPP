#include "PhoneBook.hpp"

void PhoneBook::addContract()
{
	std::string tmp;

	std::cout << "please input First Name" << std::endl;
 	std::cin >> tmp;
	contracts[_index].setFirstName(tmp);
	tmp.clear();

	std::cout << "please input Last Name" << std::endl;
 	std::cin >> tmp;
	contracts[_index].setLastName(tmp);
	tmp.clear();

	std::cout << "please input Nick Name" << std::endl;
 	std::cin >> tmp;
	contracts[_index].setNickname(tmp);
	tmp.clear();

	std::cout << "please input PhoneNumber" << std::endl;
 	std::cin >> tmp;
	contracts[_index].setPhoneNumber(tmp);
	tmp.clear();

	std::cout << "please input tmp" << std::endl;
 	std::cin >> tmp;
	contracts[_index].setDark(tmp);
	tmp.clear();

	size++;
	_index++;
	if (size == 8)
		size --;
	if (_index == 8)
		_index = 0;
}

bool PhoneBook::isNotEmpty(int i)
{
	if (this->size < i)
		return (false);
	if (this->contracts[i].getFirstName().compare("") == 0)
		return (false);
	if (this->contracts[i].getLastName().compare("") == 0)
		return (false);
	if (this->contracts[i].getNickname().compare("") == 0)
		return (false);
	return (true);
}

void PhoneBook::printSearch(std::string str, bool last)
{
	std::cout.flags(std::ios::right);
	if (str.length() >= 10)
	{
		for (int j = 0; j < 9; j++)
		{
			std::cout << str.at(j);
		}
		std::cout << ".";
		std::cout << "|";
		if (last)
			std::cout << std::endl;

	}
	else
	{
		std::cout.width(11 - str.length());
		for (size_t j = 0; j < str.length(); j++)
		{
			std::cout << str.at(j);
		}
		if (last)
			std::cout << std::endl;
		else
			std::cout << "|";
	}
	std::cout.copyfmt(std::ios(NULL));
}

void PhoneBook::searchContract()
{
	int i;

	for (i = 0; i < 8; i++)
	{
		if (isNotEmpty(i))
		{
			printSearch(this->contracts[i].getFirstName(), false);
			printSearch(this->contracts[i].getLastName(), false);
			printSearch(this->contracts[i].getNickname(), false);
			printSearch(this->contracts[i].getPhoneNumber(), false);
			printSearch(this->contracts[i].getDark(), true);
		}
	}
}

void PhoneBook::detailContract()
{
	int n;

	std::cout << "Input Index for detail" << std::endl;
	std::cout << "index is start zero(0)" << std::endl;
	std::cin >> n;
	if (std::cin.fail())
	{
		std::cin.clear();
		return ;
	}
	if (n <= size)
	{
		std::cout << contracts[n].getFirstName() << std::endl;
		std::cout << contracts[n].getLastName() << std::endl;
		std::cout << contracts[n].getNickname() << std::endl;
		std::cout << contracts[n].getPhoneNumber() << std::endl;
		std::cout << contracts[n].getDark() << std::endl;
	}
}

PhoneBook::PhoneBook()
{
	this->size = 0;
	this->_index = 0;
}