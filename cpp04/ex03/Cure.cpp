/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:24:04 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/11 23:24:04 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
    // std::cout << "Cure Constructed\n";
    this->type = "cure";
}

Cure::~Cure(){
    // std::cout << "Cure Destructed\n";
}

Cure & Cure::operator=(Cure & C){
    // std::cout << "Cure Assignment Operator\n";
    this->type = C.type;
    return ((*this));
}

Cure::Cure(Cure & C){
    // std::cout << "Copy Constructed\n";
   this->type = C.type;
    (*this) = C;
}

Cure::Cure(std::string const &type){
    this->type = type;
}

std::string const & Cure::getType() const{
    return (this->type);
}

AMateria* Cure::clone() const{
    AMateria *C = new Cure(this->type);
    return (C);    
}

void Cure::use(ICharacter & target){
    std::cout <<  "Cure: * heals " << target.getName() << "'s wounds *" <<std::endl;
}