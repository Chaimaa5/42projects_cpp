#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): s_Grade(25), e_Grade(5){

}

PresidentialPardonForm::~PresidentialPardonForm(){

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & P): s_Grade(25), e_Grade(5){
    *this = P;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & P){
    (void)P;
    return (*this);
}