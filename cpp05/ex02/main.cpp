#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	Bureaucrat people1("peo1", 1);
	Bureaucrat people2("peo2", 138);
	Bureaucrat people3("peo3", 46);
	Bureaucrat people4("peo4", 6);

	PresidentPardonForm p("preForm", "home");
	RobotomyRequestForm p2("roboForm", "robo");
	ShrubberyCreationForm p3("ShruForm", "home");

	people1.executeForm(p);
	people1.signForm(p);
	people1.executeForm(p);

	people1.executeForm(p2);
	people1.signForm(p2);
	people1.executeForm(p2);

	people1.executeForm(p3);
	people1.signForm(p3);
	people1.executeForm(p3);

	p.setSigned(false);
	p2.setSigned(false);
	p3.setSigned(false);

	std::cout << std::endl << std::endl;

	people2.executeForm(p);
	people2.signForm(p);
	people2.executeForm(p);

	people2.executeForm(p2);
	people2.signForm(p2);
	people2.executeForm(p2);

	people2.executeForm(p3);
	people2.signForm(p3);
	people2.executeForm(p3);

	p.setSigned(false);
	p2.setSigned(false);
	p3.setSigned(false);
	std::cout << std::endl << std::endl;

	people3.executeForm(p);
	people3.signForm(p);
	people3.executeForm(p);

	people3.executeForm(p2);
	people3.signForm(p2);
	people3.executeForm(p2);

	people3.executeForm(p3);
	people3.signForm(p3);
	people3.executeForm(p3);

	p.setSigned(false);
	p2.setSigned(false);
	p3.setSigned(false);
	std::cout << std::endl << std::endl;

	people4.executeForm(p);
	people4.signForm(p);
	people4.executeForm(p);

	people4.executeForm(p2);
	people4.signForm(p2);
	people4.executeForm(p2);

	people4.executeForm(p3);
	people4.signForm(p3);
	people4.executeForm(p3);

	p.setSigned(false);
	p2.setSigned(false);
	p3.setSigned(false);

	return (0);
}