/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:24:08 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/11 23:24:08 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
    // std::cout <<"Ice Constructed\n";
    this->type = "ice";
}

Ice::Ice(std::string const &type){
    this->type = type;
}

Ice::~Ice(){
    // std::cout <<"Ice Destructed\n";
}

Ice & Ice::operator=(Ice & I){
    // std::cout <<"Ice Assignment Operator\n";
    this->type = I.type;
    return ((*this));
}

Ice::Ice(Ice & I){
    // std::cout <<"Ice Copy Constructor";
    (*this) = I;
}

std::string const & Ice::getType() const{
    return (this->type);
}

AMateria* Ice::clone() const{
    AMateria *I = new Ice(this->type);
    return (I);    
}

void Ice::use(ICharacter & target){
    std::cout <<  "Ice: * shoots an ice bolt at " << target.getName() << " *" <<std::endl;
}