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