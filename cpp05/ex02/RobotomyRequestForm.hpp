/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:25:05 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/16 20:25:05 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include <cstdlib>
class RobotomyRequestForm: public Form{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const & R);
        RobotomyRequestForm & operator=(RobotomyRequestForm const & R);
        std::string getTarget() const;
        void ExecuteNoise() const;
        void    Execute(Bureaucrat const & executor) const;
};