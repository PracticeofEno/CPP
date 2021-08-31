#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	_brain = new Brain();
	std::cout << "Dog Constructor Called" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::addIdea(std::string idea)
{
	_brain->addIdea(idea);
}

Brain* Dog::getBrain(void)
{
	return _brain;
}

Dog::Dog(Dog& tmp)
{
	this->setType(tmp.getType());
	_brain = new Brain(*tmp.getBrain());
}

std::string Dog::getIdea(int index)
{
	return _brain->getIdea(index);
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