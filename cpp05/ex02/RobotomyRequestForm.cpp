#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45){
    std::cout << "Robotomy Request Form Constructed\n"; 
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45){
    std::cout << "Robotomy Request Form Constructed\n"; 
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "Robotomy Request Form Destructed\n"; 
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & R): Form("RobotomyRequestForm", 72, 45){
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
    if (executor.getGrade() <= e_Grade && sign == 1)
        ExecuteNoise();
    else
        throw (GradeTooLowException());
}