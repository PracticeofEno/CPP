#include "Data.hpp"

Data::Data()
{
}

Data::~Data()
{

}

Data::Data(Data& tmp)
{
	(void)tmp;
}

Data& Data::operator=(Data& tmp)
{
	if (this == &tmp)
		return *this;
	return *this;
}

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}