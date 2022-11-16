/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:24:03 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/16 20:24:03 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat constructed\n";
}

Bureaucrat::Bureaucrat(std::string Name, int Grade): Name(Name)
{
	if (Grade < 1)
		throw (GradeTooHighException());
	if (Grade > 150)
		throw (GradeTooLowException());
	this->Grade = Grade;
	std::cout << "Bureaucrat constructed\n";
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat deleted\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const & B): Name(B.Name){
	std::cout << "Bureaucrat copy\n";
	this->Grade = B.Grade;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & B){
	std::cout << "Bureaucrat Assignment operator\n";
	this->Grade = B.Grade;
	return (*this);
}

const std::string & Bureaucrat::getName() const{
	return (this->Name);
}

int Bureaucrat::getGrade() const{
	return (Grade);
}

void	Bureaucrat::increment(){
	if (this->Grade == 1)
		throw (GradeTooHighException());
	this->Grade--;
	std::cout << "Bureaucrat Grade incremented to: " << Grade << std::endl;
}

void	Bureaucrat::decrement(){
	if (this->Grade == 150)
		throw (GradeTooLowException());
	this->Grade++;
	std::cout << "Bureaucrat Grade decremented to: " << Grade << std::endl;
}

std::ostream & operator<<(std::ostream & os, const Bureaucrat & B)
{
    os << B.getName() << ", bureaucrat grade "<< B.getGrade();
    return (os);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Terminating with catched Bureaucrat Exception: Grade Too High.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Terminating with catched Bureaucrat Exception: Grade Too Low.");
}