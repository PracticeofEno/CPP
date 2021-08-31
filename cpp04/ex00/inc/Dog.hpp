#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

public:
	Dog();
	virtual ~Dog();
	Dog(Dog& tmp);
	Dog& operator=(Dog tmp);
	void makeSound(void) const;

protected:

private:

};

#endif