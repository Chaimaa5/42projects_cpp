/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:23:53 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/11 23:23:53 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type){
    // std::cout << "Character " << type << " Constructed\n";
}

AMateria::AMateria(){
    // std::cout << "AMateria Constructed\n";
}

AMateria::~AMateria(){
    // std::cout << "AMateria Destructed\n";
}

AMateria::AMateria(AMateria & A){
    // std::cout << "AMateria Copy Constructed\n";
    (*this) = A;
}

AMateria & AMateria::operator=(AMateria & A){
    // std::cout << "AMateria Assignment operator\n";
    this->type = A.type;
    return ((*this));
}

std::string const & AMateria::getType() const{
    return (this->type);
}

void AMateria::use(ICharacter & ){}
