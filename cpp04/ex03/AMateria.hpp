/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:23:56 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/12 17:26:46 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria{
    protected:
        std::string type;
        AMateria();
        AMateria(std::string const & type);
    public:
        virtual ~AMateria();
        AMateria(AMateria & A);
        AMateria & operator=(AMateria & A);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter & target);
};



#endif