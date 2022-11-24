/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:25:45 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/24 15:35:24 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy Request Form", 72, 45){
    std::cout << "Robotomy Request Form Constructed\n"; 
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy Request Form", 72, 45){
    std::cout << "Robotomy Request Form Constructed\n"; 
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "Robotomy Request Form Destructed\n"; 
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & R): Form("Robotomy Request Form", 72, 45){
    std::cout << "Robotomy Request Form Copied\n"; 
    this->target = R.target;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & R){
    std::cout << "Robotomy Request Form Assignment operator\n"; 
    this->target = R.target;
    return (*this);
}

std::string RobotomyRequestForm::getTarget() const{
    return (target);
}

void RobotomyRequestForm::ExecuteNoise() const{
    srand(time(0));

    std::cout << "Noise: ZzzzzzZZZzzZzzzZ\n";
    if (rand() % 2)
        std::cout << target << " has been robotomized successfully\n";
    else
        std::cout << target << "robotomy failed.\n";
}

void    RobotomyRequestForm::Execute(Bureaucrat const & executor) const{
    if (executor.getGrade() <= this->getEGrade() && this->getSign() == 1)
        ExecuteNoise();
    else
        throw (GradeTooLowException());
}
