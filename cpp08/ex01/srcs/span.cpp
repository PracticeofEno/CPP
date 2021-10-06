#include <span.hpp>

Span::Span(){
}

Span::Span(unsigned int n) : _vec(n), _size(0), _maxSize(n) {
}

Span::~Span(){
}

Span::Span(Span& tmp){

	std::vector<int>::iterator iter;
	_size = tmp.getSize();
	for(iter = tmp._vec.begin(); iter < tmp._vec.end(); iter++)
	{
		_vec.push_back(*iter);
	}
}

Span& Span::operator=(Span& tmp){
	if (&tmp == this)
		return *this;
	std::vector<int>().swap(_vec);
	std::vector<int>::iterator iter;
	_size = tmp.getSize();
	for(iter = tmp._vec.begin(); iter < tmp._vec.end(); iter++)
	{
		_vec.push_back(*iter);
	}
	return *this;
}

int Span::getSize() {
	return _size;
}

std::vector<int>& Span::getVector() {
	return _vec;
}

void Span::addNumber(int n) {
	if (_size < _maxSize)
	{
		_vec.at(_size) = n;
		_size++;
	}
	else
		throw Span::RangeError();
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	std::vector<int>::iterator iter;

	for(iter = begin; iter < end; iter++)
	{
		if (_size < _maxSize)
		{	
			*iter = std::rand();
			_size = _size + 1;
		}
		else
			throw Span::RangeError();
	}
}

Span::RangeError::~RangeError() throw() {}

const char* Span::RangeError::what() const throw() {
	return "RangeError";
}

int Span::longSpan() {
	int min;
	std::nth_element(_vec.begin(), _vec.begin() + 0, _vec.end());
	min = _vec[0];
	std::nth_element(_vec.begin(), _vec.begin() + 0, _vec.end(), std::greater<int>());
	return (_vec[0] - min);
}

int Span::shortestSpan() {
	std::nth_element(_vec.begin(), _vec.begin() + 1, _vec.end());
	return (_vec[1] - _vec[0]);

}