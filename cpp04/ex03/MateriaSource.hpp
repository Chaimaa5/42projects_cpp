/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:24:25 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/13 17:31:33 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>
class AMateria;
class IMateriaSource;
class MateriaSource: public IMateriaSource{
    private:
        AMateria* inventory[4];
    public:
        ~MateriaSource();
        MateriaSource();
        MateriaSource(MateriaSource & M);
        MateriaSource & operator=(MateriaSource & M);
         void learnMateria(AMateria *);
         AMateria *createMateria(std::string const & type);
};

#endif