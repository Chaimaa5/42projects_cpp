/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:54:11 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/09/23 15:54:11 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::setfirstname(std::string str)
{
	firstname = str;
}

std::string	Contact::getfirstname()
{
	return(firstname);
}
void	Contact::setnickname(std::string str)
{
	nickname = str;
}

std::string	Contact::getnickname()
{
	return(nickname);
}

void	Contact::setlastname(std::string str)
{
	lastname = str;
}

std::string	Contact::getlastname()
{
	return(lastname);
}

void	Contact::setphone(std::string str)
{
	phone = str;
}

std::string	Contact::getphone()
{
	return(phone);
}

void	Contact::setsecret(std::string str)
{
	secret = str;
}

std::string	Contact::getsecret()
{
	return(secret);
}
