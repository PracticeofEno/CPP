#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>

class Data {

public :
	Data();
	~Data();
	Data(Data& tmp);
	Data& operator=(Data& tmp);

private :
};

uintptr_t serialize(Data* ptr);
Data* Deserialize(uintptr_t raw);

#endif