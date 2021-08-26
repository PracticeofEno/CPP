#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "Cat";
}

WrongCat::~WrongCat()
{

}

void WrongCat::makeSound(void) const
{
	std::cout << type << " : nyang nyang " << std::endl;
}