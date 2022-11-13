/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:24:11 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/11 23:24:11 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
// #include "ICharacter.hpp"
class Ice: public AMateria{
     public:
        Ice();
        ~Ice();
        Ice & operator=(Ice & I);
        Ice(Ice & I);
        Ice(std::string const &type);
        std::string const & getType() const;
         AMateria* clone() const;
         void use(ICharacter & target);
};
#endif