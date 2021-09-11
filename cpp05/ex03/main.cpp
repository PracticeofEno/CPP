#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(static_cast<unsigned int>(std::time(0)));

	Bureaucrat human("human1", 1);
	Intern intern;
	Form* rrf;
	Form* ppf;
	Form* scf;
	Form* noForm;

	rrf = NULL;
	ppf = NULL;
	scf = NULL;
	noForm = NULL;
	try
	{
		rrf = intern.makeForm("robotomy request", "Bender");
		human.signForm(*rrf);
		rrf->execute(human);

		ppf = intern.makeForm("president pardon", "Killer");
		human.signForm(*ppf);
		ppf->execute(human);

		scf = intern.makeForm("shrubbery creation", "home");
		human.signForm(*scf);
		scf->execute(human);

		noForm = intern.makeForm("awefawfeawefawef", "home");
		if (noForm)
		{
			human.signForm(*noForm);
			noForm->execute(human);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (rrf)
		delete rrf;
	if (ppf)
		delete ppf;
	if (scf)
		delete scf;
	if (noForm)
		delete noForm;
	
	return (0);
}