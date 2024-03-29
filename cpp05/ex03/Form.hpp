/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:25:24 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/24 15:34:51 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form{
    private:
        const       std::string Name;
        bool        sign;
        const int   s_Grade;
        const int   e_Grade;
        Form();
    public:
    //Canonical Form
        ~Form();
        Form(std::string, int, int);
        Form(Form const & F);
        Form & operator=(Form const & F);
    //Accessors
        const std::string getName() const;
        int     getSign() const;
        int     getSGrade() const;
        int     getEGrade() const;
        bool    beSigned(Bureaucrat &);
    //Methods
        virtual void Execute(Bureaucrat const & executor) const = 0;
    //Exception classes
        class GradeTooHighException: public std::exception{
			const char *what() const throw();
		};
		class GradeTooLowException: public std::exception{
			const char *what() const throw();
		};
};

std::ostream & operator<<(std::ostream & os, Form & F);

#endif
