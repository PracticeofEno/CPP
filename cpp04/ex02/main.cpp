#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Cat* cat = new Cat();
	Dog* dog = new Dog();

	cat->addIdea("nyang nyang");
	cat->addIdea("meyaong~~~~");
	dog->addIdea("wal wal");
	dog->addIdea("mung mung");

	std::cout << std::endl; 

	Cat copyCat(*cat);
	Dog copyDog(*dog);
	std::cout << copyCat.getIdea(0) << " | " << copyCat.getIdea(1) << std::endl;
	std::cout << copyDog.getIdea(0) << " | " << copyDog.getIdea(1) << std::endl;
	std::cout << std::endl; 

	delete cat;
	delete dog;
	std::cout << std::endl; 
	std::cout << copyCat.getIdea(0) << " | " << copyCat.getIdea(1) << std::endl;

	return (0);
}