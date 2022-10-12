/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:54:26 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/09/23 15:54:26 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string.h>
#include <cstdlib>
#include <iostream>
#include "contact.hpp"
#include <iomanip>

class Phonebook{
    public: 
        Contact contact[8];
        std::string trim(std::string str);
        void	print(Contact contact);

};

#endif