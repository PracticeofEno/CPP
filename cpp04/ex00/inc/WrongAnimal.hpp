#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

public :
	WrongAnimal();
	~WrongAnimal();

	void makeSound(void) const;
	std::string getType(void) const;
	void setType(std::string type);

protected:
	std::string type;

private:

};
std::ostream& operator << (std::ostream& os, const WrongAnimal fixed);
#endif