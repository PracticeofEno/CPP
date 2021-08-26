#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << cat->getType() << " ";
	cat->makeSound();
	std::cout << std::endl;
	std::cout << dog->getType() << " ";
	dog->makeSound();
	std::cout << std::endl;
	std::cout << meta->getType() << " ";
	meta->makeSound();
	std::cout << std::endl;

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* cat2 = new WrongCat();

	std::cout << cat2->getType() << " ";
	cat2->makeSound();
	std::cout << std::endl;
	std::cout << meta2->getType() << " ";
	meta2->makeSound();
	std::cout << std::endl;

	return (0);
}