#ifndef CONVERTBASE_HPP
#define CONVERTBASE_HPP

#include <iostream>
#include <exception>
#include <stdlib.h>
#include <math.h>
#include <float.h>

class ConvertBase {

public:
	ConvertBase();
	ConvertBase(std::string data);
	~ConvertBase();
	ConvertBase(ConvertBase& tmp);
	ConvertBase& operator=(ConvertBase& tmp);

	char convertChar();
	int convertInt();
	float convertFloat();
	double convertDouble();

	class ConvertException : public std::exception {
		public :
			ConvertException(std::string message) throw();
			virtual ~ConvertException() throw();
			virtual const char* what() const throw();
		private:
			std::string  _message;
	};

private:
	std::string _data;
	double _number;
	bool _nan;
	bool _inf;
};
#endif