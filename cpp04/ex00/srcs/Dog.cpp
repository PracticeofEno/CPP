#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog Constructor Called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog(Dog& tmp)
{
	this->setType(tmp.getType());
}

Dog& Dog::operator=(Dog tmp)
{
	this->setType(tmp.getType());
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << type << " : wal wal " << std::endl;
}