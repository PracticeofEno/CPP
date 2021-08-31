#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal {

public:
	Dog();
	virtual ~Dog();
	Dog(Dog& tmp);
	Dog& operator=(Dog tmp);
	void makeSound(void) const;
	std::string getIdea(int index);
	void addIdea(std::string idea);
	Brain* getBrain(void);

protected:

private:
	Brain* _brain;

};

#endif