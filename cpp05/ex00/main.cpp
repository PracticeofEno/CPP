#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bueraucrat haha("haha", 1);
		std::cout << haha;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bueraucrat haha("haha", 1);
		haha.downGrade();
		std::cout << haha;
		haha.upGrade();
		haha.upGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bueraucrat haha("haha", 150);
		haha.downGrade();
		std::cout << haha;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}