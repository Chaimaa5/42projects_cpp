#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat constructed\n";
}

Bureaucrat::Bureaucrat(std::string Name, int Grade): Name(Name)
{
	if (Grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (Grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->Grade = Grade;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat deleted\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const & B): Name(B.Name){
	this->Grade = B.Grade;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & B){
	this->Grade = B.Grade;
	return (*this);
}

const std::string & Bureaucrat::getName() const{
	return (this->Name);
}

int Bureaucrat::getGrade() const{
	return (this->Grade);
}

void	Bureaucrat::increment(){
	if (this->Grade <= 1)
		throw (GradeTooHighException());
	else
		this->Grade++;
}

void	Bureaucrat::decrement(){
	if (this->Grade >= 150)
		throw (GradeTooLowException());
	else
		this->Grade--;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Terminating with catched Exception: Grade Too High.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Terminating with catched Exception: Grade Too Low.");
}

std::ostream & operator<<(std::ostream & s, Bureaucrat & B){
	s << B.getName() << ", bureaucrat grade " << B.getGrade() << "." << std::endl;
	return(s);
}