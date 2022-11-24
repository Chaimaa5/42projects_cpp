/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:25:07 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/24 15:32:53 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137){
    std::cout << "Shrubbery Creation Form Constructed\n"; 
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137){
    std::cout << "Shrubbery Creation Form Constructed\n";
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "Shrubbery Creation Form Destructed\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & S): Form("ShrubberyCreationForm", 145, 137){
    std::cout << "Shrubbery Creation Form Copied\n";
    *this = S;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & S){
    std::cout << "Shrubbery Assignment operator\n";
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
    if (executor.getGrade() <= this->getEGrade() && this->getSign() == 1)
        ExecuteCreation();
    else
        throw (GradeTooLowException());
}
