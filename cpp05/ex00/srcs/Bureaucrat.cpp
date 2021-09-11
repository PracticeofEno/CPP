#include "Bureaucrat.hpp"

Bueraucrat::Bueraucrat()
{
	_name = "";
	_grade = 5;
}

Bueraucrat::Bueraucrat(std::string name, int grade)
{
	if (grade < 1)
		throw Bueraucrat::GradeTooHighException();
	if (grade > 150)
		throw Bueraucrat::GradeTooLowException();
	_name = name;
	_grade = grade;
}

Bueraucrat::~Bueraucrat()
{

}

Bueraucrat::Bueraucrat(Bueraucrat& tmp)
{
	_name = tmp.getName();
	_grade = tmp.getGrade();
}

Bueraucrat& Bueraucrat::operator=(Bueraucrat& tmp)
{
	_name = tmp.getName();
	_grade = tmp.getGrade();

	return *this;
}

void Bueraucrat::setGrade(int tmp)
{
	_grade = tmp;
}

int Bueraucrat::getGrade() const
{
	return _grade;
}

void Bueraucrat::setName(std::string name)
{
	_name = name;
}

std::string Bueraucrat::getName() const
{
	return _name;
}

void Bueraucrat::upGrade()
{
	if (_grade - 1 <= 0)
		throw Bueraucrat::GradeTooHighException();
	else
		_grade = _grade -1;
}

void Bueraucrat::downGrade()
{
	if (_grade + 1 >= 151)
		throw Bueraucrat::GradeTooLowException();
	else
		_grade = _grade + 1;
}

Bueraucrat::GradeTooHighException::~GradeTooHighException() throw()
{

}

const char* Bueraucrat::GradeTooHighException::what() const throw()
{
	return "GradeTooHigh";
}

Bueraucrat::GradeTooLowException::~GradeTooLowException() throw()
{

}

const char* Bueraucrat::GradeTooLowException::what() const throw()
{
	return "GradeTooLow";
}

std::ostream& operator<< (std::ostream& os, const Bueraucrat& tmp)
{
	os << tmp.getName() << " : " << tmp.getGrade() << std::endl;
	return os;
}