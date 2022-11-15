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
