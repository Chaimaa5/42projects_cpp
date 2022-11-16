/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:25:18 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/16 20:25:18 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():sign(0), s_Grade(0), e_Grade(0){
    std::cout << "Form constructed\n";
}

Form::Form(std::string Name, int s_Grade, int e_Grade): Name(Name), sign(0), s_Grade(s_Grade), e_Grade(e_Grade){
    if (s_Grade > 150 || e_Grade > 150)
        throw (GradeTooLowException());
    if (s_Grade < 1 || e_Grade < 1)
        throw (GradeTooHighException());
    std::cout << "Form "<< Name <<" constructed\n";
}
Form::~Form(){
    std::cout << "Form destructed\n";
}

Form::Form(Form const & F): Name(F.Name), sign(0), s_Grade(F.s_Grade), e_Grade(F.e_Grade){
    std::cout << "Form Copy Constructor\n";
    (*this) = F;
}

Form & Form::operator=(Form const & F){
    std::cout << "Form Assignment operator\n";
    this->sign = F.sign;
    return (*this);
}

bool    Form::beSigned(Bureaucrat & B){
    if (B.getGrade() <= this->s_Grade)
    {
        sign = 1;
        return (true);
    }
    else
        throw (GradeTooLowException());
    return (false);
}

const char *Form::GradeTooHighException::what() const throw(){
	return ("Terminating with catched Form Exception: Grade Too High.");
}

const char *Form::GradeTooLowException::what() const throw(){
    	return ("Terminating with catched Form Exception: Grade Too Low.");
}

const std::string Form::getName() const{
    return (Name);
}

int Form::getSign(){
    return (sign);
}

int Form::getSGrade(){
    return (s_Grade);
}

 int Form::getEGrade(){
    return (e_Grade);
}

std::ostream & operator<<(std::ostream & os, Form & F){
    os << F.getName() << ", Form e_Grade: " << F.getEGrade() << ", s_Grade: " << F.getSGrade() << ", Sign: " << F.getSign() << std::endl;
    return (os);
}