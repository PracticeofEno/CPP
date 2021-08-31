#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {

public:
	Brain();
	~Brain();
	Brain(Brain& tmp);
	Brain& operator=(Brain& tmp);
	void addIdea(std::string idea);
	std::string getIdea(int index);
	int	getIndex(void);

private:
	int _ideasIndex;
	std::string _ideas[100];
};

#endif