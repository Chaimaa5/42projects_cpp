#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45){

}

RobotomyRequestForm::~RobotomyRequestForm(){

}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & R): Form("RobotomyRequestForm", 72, 45){
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
    std::cout << "sdjbjbbbjhbbhjhjb\n";
    std::cout << target << " has been robotomized successfully 50% of the time";
    std::cout << target << "robotomy failed.";
}

void    RobotomyRequestForm::Execute(Bureaucrat const & executor) const{
    if (executor.getGrade() <= e_Grade && sign == 1)
        ExecuteNoise();
    else
        throw (GradeTooLowException());
}
