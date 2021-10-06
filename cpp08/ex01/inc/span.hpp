#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
class Span {

public :
	Span();
	Span(unsigned int n);
	~Span();
	Span(Span& tmp);
	Span& operator=(Span& tmp);
	int shortestSpan();
	int longSpan();
	void addNumber(int n);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int getSize();
	std::vector<int>& getVector();

	class RangeError : public std::exception {
	public :
		~RangeError() throw ();
		const char* what() const throw();

	private:
	};

private :
	std::vector<int> _vec;
	unsigned int _size;
	unsigned int _maxSize;
};
#endif