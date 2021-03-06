#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bueraucrat {

public:
	Bueraucrat();
	Bueraucrat(std::string name, int grade);
	Bueraucrat(Bueraucrat& tmp);
	virtual ~Bueraucrat();
	Bueraucrat& operator=(Bueraucrat& tmp);

	std::string getName() const;
	int getGrade() const;
	void setGrade(int grade);
	void setName(std::string name);
	void upGrade();
	void downGrade();

	class GradeTooHighException : public std::exception {
		public :
			virtual ~GradeTooHighException() throw();
			virtual const char* what() const throw();
		private:
			std::string  _message;
	};

	class GradeTooLowException : public std::exception {
		public :
			virtual ~GradeTooLowException() throw();
			virtual const char* what() const throw();
		private:
			std::string  _message;
	};

private:
	std::string _name;
	int _grade;
};

std::ostream& operator<< (std::ostream& os, const Bueraucrat& tmp);
#endif