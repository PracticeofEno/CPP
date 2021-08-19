#ifndef KAREN_HPP
#define KAREN_HPP

#define DEBUG 1061651943
#define INFO 832391676
#define WARNING 2277797414
#define ERROR 403008346

#include <iostream>

class Karen{

public :
	void complain(std::string level);

	Karen();
	~Karen();

private :
	void (Karen::*_funcs[4])(void);
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

unsigned int Hash(std::string data);
#endif