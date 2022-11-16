/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:24:57 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/16 20:24:58 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5){
    std::cout << "Presidential Pardon Form Constructed\n"; 
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5){
    std::cout << "Presidential Pardon Form Constructed\n"; 
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "Presidential Pardon Form destructed\n"; 
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & P):Form("PresidentialPardonForm", 25, 5){
    std::cout << "Presidential Pardon Form Copied\n"; 
    *this = P;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & P){
    std::cout << "Presidential Pardon Form Assignment operator\n"; 
    this->target = P.target;
    return (*this);
}

std::string PresidentialPardonForm::getTarget() const{
    return (target);
}

void PresidentialPardonForm::ExecutePardon() const{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox\n";
}

void    PresidentialPardonForm::Execute(Bureaucrat const & executor) const{
    if (executor.getGrade() <= e_Grade && sign == 1)
        ExecutePardon();
    else
        throw (GradeTooLowException());
}
