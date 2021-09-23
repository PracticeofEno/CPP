#include "ConvertBase.hpp"

ConvertBase::ConvertBase()
{

}

ConvertBase::~ConvertBase()
{

}

ConvertBase::ConvertBase(std::string data)
{
	try
	{
		_data = data;
		_number = atof(_data.c_str());
		_nan = false;

		if (isinf(_number))
			_inf = true;
		else
			_inf = false;

		if (_number != _number)
		{
			if (_data.length() == 1 && _data[0] == '0')
			{
				_nan = false;
			}
			else
			{
				_nan = true;
			}
		}
	}
	catch(const std::exception& e)
	{
		throw ConvertBase::ConvertException("Convert Error");
	}
}

ConvertBase& ConvertBase::operator=(ConvertBase& tmp)
{
	if (this == &tmp)
		return (*this);
	return (*this);
}

char ConvertBase::convertChar()
{
	char c;
	if (_nan)
		throw ConvertBase::ConvertException("Imposibble");
	if (_inf)
		throw ConvertBase::ConvertException("Inf");
	c = static_cast<char>(_number);
	if (c >= 32 && c <= 122)
		return c;
	else
		throw ConvertBase::ConvertException("Non Displayable");
	return (0);
}

int ConvertBase::convertInt()
{
	int c;
	if (_nan)
		throw ConvertBase::ConvertException("Imposibble");
	if (_inf)
		throw ConvertBase::ConvertException("Inf");
	c = static_cast<int>(_number);
	return (c);
}

float ConvertBase::convertFloat()
{
	float c;
	if (_nan)
		throw ConvertBase::ConvertException("nanf");
	if (_inf)
		throw ConvertBase::ConvertException("Inf");

	c = static_cast<float>(_number);
	return (c);
}

double ConvertBase::convertDouble()
{
	double c;
	if (_nan)
		throw ConvertBase::ConvertException("nan");
	if (_inf)
		throw ConvertBase::ConvertException("Inf");

	c = static_cast<double>(_number);
	return (c);
}

ConvertBase::ConvertException::ConvertException(std::string message) throw()
{
	_message = message;
}

ConvertBase::ConvertException::~ConvertException() throw()
{

}

const char * ConvertBase::ConvertException::what() const throw()
{
	return _message.c_str();
}