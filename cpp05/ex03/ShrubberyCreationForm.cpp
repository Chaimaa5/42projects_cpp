#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137){

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137){
    this->target = target;
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
    std::ofstream file(target + "_shrubbery");
    file << "                                              ." << std::endl;
    file << "                                   .         ;" << std::endl;
    file << "      .              .              ;%     ;;" << std::endl;
    file << "        ,           ,                :;%  %;" << std::endl;
    file << "         :         ;                   :;%;'     .," << std::endl;
    file << ",.        %;     %;            ;        %;'    ,;" << std::endl;
    file << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
    file << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
    file << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
    file << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
    file << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
    file << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
    file << "           `@%:.  :;%.         ;@@%;'" << std::endl;
    file << "             `@%.  `;@%.      ;@@%;" << std::endl;
    file << "               `@%%. `@%%    ;@@%;" << std::endl;
    file << "                 ;@%. :@%%  %@@%;" << std::endl;
    file << "                   %@bd%%%bd%%:;" << std::endl;
    file << "                     #@%%%%%:;;" << std::endl;
    file << "                     %@@%%%::;" << std::endl;
    file << "                     %@@@%(o);  . '" << std::endl;
    file << "                     %@@@o%;:(.,'" << std::endl;
    file << "                 `.. %@@@o%::;" << std::endl;
    file << "                    `)@@@o%::;" << std::endl;
    file << "                     %@@(o)::;" << std::endl;
    file << "                    .%@@@@%::;" << std::endl;
    file << "                    ;%@@@@%::;." << std::endl;
    file << "                   ;%@@@@%%:;;;." << std::endl;
    file << "               ...;%@@@@@%%:;;;;,..    " << std::endl;
}

void    ShrubberyCreationForm::Execute(Bureaucrat const & executor) const{
    if (executor.getGrade() <= e_Grade && sign == 1)
        ExecuteCreation();
    else
        throw (GradeTooLowException());
}
