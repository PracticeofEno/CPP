#include "Contract.hpp"

std::string Contract::getFirstName()
{
	return this->firstName;
}

void Contract::setFirstName(std::string str)
{
	this->firstName = str;
}

std::string Contract::getLastName()
{
	return this->lastName;
}

void Contract::setLastName(std::string str)
{
	this->lastName = str;
}

std::string Contract::getNickname()
{
	return this->nickname;
}

void Contract::setNickname(std::string str)
{
	this->nickname = str;
}

std::string Contract::getDark()
{
	return this->darkestSecret;
}

void Contract::setDark(std::string str)
{
	this->darkestSecret = str;
}

std::string Contract::getPhoneNumber()
{
	return this->phoneNumber;
}

void Contract::setPhoneNumber(std::string str)
{
	this->phoneNumber = str;
}

Contract::Contract()
{
	this->setFirstName("");
	this->setLastName("");
	this->setNickname("");
	this->setPhoneNumber("");
	this->setDark("");
}