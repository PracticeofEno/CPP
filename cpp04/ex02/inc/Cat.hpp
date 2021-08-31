#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal {

public:
	Cat();
	virtual ~Cat();
	Cat(Cat& tmp);
	Cat& operator=(Cat tmp);
	void makeSound(void) const;
	std::string getIdea(int index);
	void addIdea(std::string idea);
	Brain* getBrain(void);

protected:

private:
	Brain* _brain;
};

#endif