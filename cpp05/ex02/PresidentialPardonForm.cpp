#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5){

}

PresidentialPardonForm::~PresidentialPardonForm(){

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & P):Form("PresidentialPardonForm", 25, 5){
    *this = P;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & P){
    (void)P;
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
