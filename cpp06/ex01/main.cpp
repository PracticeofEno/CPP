#include "Data.hpp"

int main()
{
	Data data;
	uintptr_t tmp;

	std::cout << &data << std::endl;
	tmp = serialize(&data);
	std::cout << tmp << std::endl;
	std::cout << Deserialize(tmp) << std::endl;
	return (0);
}