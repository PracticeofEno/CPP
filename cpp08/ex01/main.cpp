#include <iostream>
#include "span.hpp"

int main()
{
	try
	{
		Span span(10000);
		span.addNumber(5);
		span.addNumber(6);
		std::vector<int>::iterator start = ++span.getVector().begin();
		std::vector<int>::iterator end = span.getVector().end();
		start++;
		span.addNumber(start,end);
		std::cout << span.longSpan() << std::endl;
		std::cout << span.shortestSpan() << std::endl;
		span.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
