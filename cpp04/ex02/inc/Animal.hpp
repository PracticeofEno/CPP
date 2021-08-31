#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

public :
	Animal();
	virtual ~Animal();
	Animal(Animal& tmp);

	virtual void makeSound(void) const=0;
	std::string getType(void) const;
	void setType(std::string type);

protected:
	std::string type;

private:

};
#endif