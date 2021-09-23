#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{

}

Base* generate(void)
{
	int b;
	std::srand(static_cast<unsigned int>(std::time(0)));
	b = std::rand() % 3;
	if (b == 0)
		return (reinterpret_cast<Base*>(new A()));
	else if (b == 1)
		return (reinterpret_cast<Base*>(new B()));
	else
		return (reinterpret_cast<Base*>(new C()));
	return (0);

}
void identify(Base* p)
{
	A* a;
	B* b;
	C* c;

	a = dynamic_cast<A*>(p);
	if (a)
	{
		std::cout << "I am A" << std::endl;
	}
	b = dynamic_cast<B*>(p);
	if (b)
	{
		std::cout << "I am B" << std::endl;
	}
	c = dynamic_cast<C*>(p);
	if (c)
	{
		std::cout << "I am C" << std::endl;
	}
}

void identify(Base& p)
{
	A a;
	B b;
	C c;

	try
	{
		a = dynamic_cast<A&>(p);
		std::cout << "I am A" << std::endl;
	}
	catch(const std::exception& e)
	{
	}

	try
	{
		b = dynamic_cast<B&>(p);
		std::cout << "I am B" << std::endl;
	}
	catch(const std::exception& e)
	{
	}

	try
	{
		c = dynamic_cast<C&>(p);
		std::cout << "I am C" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}