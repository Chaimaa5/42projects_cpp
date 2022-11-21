/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:25:30 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/17 19:57:36 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    try{
        Intern intern1;
        Intern intern2;
        Intern intern3;
        Form* F1;
        Form* F2;
        Form* F3;

        Bureaucrat BS("Bureaucrat", 1);
        Bureaucrat BP("Bureaucrat", 5);
        Bureaucrat BR("Bureaucrat", 40);
        try{
            F1 = intern1.makeForm("Presidential", "El Presidente");
            F2 = intern2.makeForm("Shrubbery Creation Form", "Berry Berry");
            F3 = intern3.makeForm("Robotomy Request Form", "RobRob");

            F1->beSigned(BP);
            F1->Execute(BP);

            F2->beSigned(BS);
            F2->Execute(BS);

            F3->beSigned(BR);
            F3->Execute(BR);
        }
        catch(...)
        {
            std::cerr << "sir tqwed" << std::endl;
        }
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}