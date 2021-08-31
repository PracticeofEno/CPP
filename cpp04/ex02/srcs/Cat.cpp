#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	_brain = new Brain();
	std::cout << "Cat Constructor Called" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat Destructor Called" << std::endl;
}

Brain* Cat::getBrain(void)
{
	return _brain;
}

Cat::Cat(Cat& tmp)
{
	this->setType(tmp.getType());
	_brain = new Brain(*tmp.getBrain());
}

Cat& Cat::operator=(Cat tmp)
{
	this->setType(tmp.getType());
	return *this;
}

std::string Cat::getIdea(int index)
{
	return _brain->getIdea(index);
}

void Cat::addIdea(std::string idea)
{
	_brain->addIdea(idea);
}

void Cat::makeSound(void) const
{
	std::cout << type << " : nyang nyang " << std::endl;
}