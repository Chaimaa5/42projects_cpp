#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy Request Form", 72, 45){

}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy Request Form", 72, 45){
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(){

}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & R): Form("Robotomy Request Form", 72, 45){
    this->target = R.target;
}
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & R){
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
