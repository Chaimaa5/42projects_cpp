#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential Pardon Form", 25, 5){

}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Presidential Pardon Form", 25, 5){
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(){

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & P):Form("Presidential Pardon Form", 25, 5){
    *this = P;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & P){
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
