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

void ShrubberyCreationForm::ExecuteCreation() const
{
    std::ofstream ofs(target + "_shrubbery");

    ofs << "ASCII trees";
}

void    ShrubberyCreationForm::Execute(Bureaucrat const & executor) const{
    if (executor.getGrade() <= e_Grade && sign == 1)
        ExecuteCreation();
    else
        throw (GradeTooLowException());
}
