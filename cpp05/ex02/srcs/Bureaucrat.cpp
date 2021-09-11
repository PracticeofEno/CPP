#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
	_name = "";
	_grade = 5;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_name = name;
	_grade = grade;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(Bureaucrat& tmp)
{
	_name = tmp.getName();
	_grade = tmp.getGrade();
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& tmp)
{
	_name = tmp.getName();
	_grade = tmp.getGrade();

	return *this;
}

void Bureaucrat::setGrade(int tmp)
{
	_grade = tmp;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::setName(std::string name)
{
	_name = name;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

void Bureaucrat::signForm(Form& tmp)
{
	try
	{
		if (_grade <= tmp.getReqSign() && _grade >= 1)
		{
			tmp.beSigned(*this);
		}
		else
		{
			std::cout << _name << " cannot sign  " << tmp.getName() << " because not valid execute grade" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void Bureaucrat::upGrade()
{
	if (_grade - 1 <= 0)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = _grade -1;
}

void Bureaucrat::downGrade()
{
	if (_grade + 1 >= 151)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = _grade + 1;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{

}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "GradeTooHigh";
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{

}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GradeTooLow";
}

std::ostream& operator<< (std::ostream& os, const Bureaucrat& tmp)
{
	os << tmp.getName() << " : " << tmp.getGrade() << std::endl;
	return os;
}

void Bureaucrat::executeForm(const Form& form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}