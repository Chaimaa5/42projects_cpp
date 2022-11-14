#include "Bureaucrat.hpp"
#include "Form.hpp"
Bureaucrat::Bureaucrat()
{
	// std::cout << "Bureaucrat constructed\n";
}

Bureaucrat::Bureaucrat(std::string Name, int Grade): Name(Name)
{
	if (Grade < 1)
		throw (GradeTooHighException());
	if (Grade > 150)
		throw (GradeTooLowException());
	this->Grade = Grade;
}

Bureaucrat::~Bureaucrat(){
	// std::cout << "Bureaucrat deleted\n";
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
	return (Grade);
}

Form *Bureaucrat::getForm()
{
	return (this->F);
}

void	Bureaucrat::increment(){
	if (this->Grade >= 150)
		throw (GradeTooLowException());
	this->Grade++;
}

void	Bureaucrat::decrement(){
	if (this->Grade <= 1)
		throw (GradeTooHighException());
	this->Grade--;
}

std::ostream & operator<<(std::ostream & os, const Bureaucrat & B)
{
    os << B.getGrade();
    return (os);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Terminating with catched Exception: Grade Too High.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Terminating with catched Exception: Grade Too Low.");
}

void	Bureaucrat::signForm(){
	if (this->F->getSign() == 1)
		std::cout << this->getName() << " signed "<< this->F->getName();
	else
		std::cout << this->getName() << " couldn't sign "<< this->F->getName() << "Because he doesn't want";
}