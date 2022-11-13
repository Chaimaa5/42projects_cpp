#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat constructed\n";
}

Bureaucrat::Bureaucrat(std::string Name, int Grade): Name(Name)
{
	try{
		
	}
	if (Grade > 150)
		throw GradeTooHighException();
	if (Grade < 0)
		throw GradeTooLowException();
	else 
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
	++this->Grade;
}

void	Bureaucrat::decrement(){
	--this->Grade;
}

std::ostream & operator<<(std::ostream & s, Bureaucrat & B){
	s << B.getGrade() << std::endl;
	return(s);
}