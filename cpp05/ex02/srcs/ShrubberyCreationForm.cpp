#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : ShrubberyCreationForm::Form("", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) : ShrubberyCreationForm::Form(name, 145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& tmp)
{
	(void)tmp;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& tmp)
{
	(void)tmp;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	std::string tmp;

	checkValid(executor);
	tmp = _target;
	tmp.append("_shrubbery");
	std::ofstream writeFile(tmp.data());
	if (writeFile.is_open())
	{
		writeFile << "      /\\      \n     /\\*\\     \n    /\\O\\*\\    \n   /*/\\/\\/\\   \n  /\\O\\/\\*\\/\\  \n /\\*\\/\\*\\/\\/\\ \n/\\O\\/\\/*/\\/O/\\ \n      ||      \n      ||      \n      ||      ";
		writeFile.close();
	}
	else
	{
		throw Form::ExecuteException("write file open error");
	}
}