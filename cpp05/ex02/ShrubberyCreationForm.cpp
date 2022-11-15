#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137){

}
ShrubberyCreationForm::~ShrubberyCreationForm(){

}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & S): Form("ShrubberyCreationForm", 145, 137){
    this->target = S.target;
}
ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & S){
    this->target = S.target;
    return (*this);
}

std::string ShrubberyCreationForm::getTarget() const{
    return (target);
}