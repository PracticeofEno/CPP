#include "Brain.hpp"

Brain::Brain()
{
	_ideasIndex = 0;
	std::cout << "Brain create" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain deleted" << std::endl;
}

void Brain::addIdea(std::string idea)
{
	if (_ideasIndex < 100)
	{
		_ideas[_ideasIndex] = idea;
		_ideasIndex++;
	}
}

Brain& Brain::operator=(Brain& tmp)
{
	for (int i = 0; i < tmp.getIndex(); i++)
	{
		addIdea(tmp.getIdea(i));
	}
	return *this;
}

int Brain::getIndex(void)
{
	return _ideasIndex;
}

std::string Brain::getIdea(int index)
{
	if (_ideasIndex < 100 && _ideasIndex >= 0)
	{
		return _ideas[index];
	}
	return "";
}

Brain::Brain(Brain& tmp)
{
	for (int i = 0; i < tmp.getIndex(); i++)
	{
		addIdea(tmp.getIdea(i));
	}
}