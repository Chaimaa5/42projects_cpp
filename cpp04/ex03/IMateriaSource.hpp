/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:24:16 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/11 23:24:16 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"
class AMateria;
class IMateriaSource{
    public:
        virtual ~IMateriaSource(){}
        virtual void learnMateria(AMateria *) = 0;
        virtual AMateria *createMateria(std::string const & type) = 0;
};
#endif