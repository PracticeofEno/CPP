#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

public :
	Animal();
	~Animal();

	virtual void makeSound(void) const;
	std::string getType(void) const;
	void setType(std::string type);

protected:
	std::string type;

private:

};
std::ostream& operator << (std::ostream& os, const Animal fixed);
#endif