/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:24:27 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/16 20:24:27 by cel-mhan         ###   ########.fr       */
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
    public:
        Form();
        ~Form();
        Form(std::string name, int s_Grade, int e_Grade);
        Form(Form const & F);
        Form & operator=(Form const & F);
        bool    beSigned(Bureaucrat &);
        class GradeTooHighException: public std::exception{
			const char *what() const throw();
		};
		class GradeTooLowException: public std::exception{
			const char *what() const throw();
		};
        const std::string & getName();
        int getSign();
        int getSGrade();
        int getEGrade();
        void setSign(bool sign);
};

std::ostream & operator<<(std::ostream & os, Form & F);

#endif
