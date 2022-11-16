/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:25:42 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/16 20:25:42 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
class PresidentialPardonForm: public Form{
    private:
       std::string target;
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const & P);
        PresidentialPardonForm & operator=(PresidentialPardonForm const & P);
        std::string getTarget() const;
        void ExecutePardon() const;
        void Execute(Bureaucrat const & executor) const;
        
};