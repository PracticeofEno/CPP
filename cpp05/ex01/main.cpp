#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat haha("haha", 8);
		Form form1("form1", 10, 10);
		Form form2("form2", 5 , 5);
		//Form form3("form3", -123 , -123);
		//Form form4("form4", 156 , 156);

		haha.signForm(form1);
		haha.signForm(form2);
		//haha.signForm(form3);
		//haha.signForm(form4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}