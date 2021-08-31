#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

public:
	Cat();
	virtual ~Cat();
	Cat(Cat& tmp);
	Cat& operator=(Cat tmp);
	void makeSound(void) const;
protected:

private:

};

#endif