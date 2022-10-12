/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:54:21 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/09/23 15:54:21 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <fstream>
void    make_a_choice(void) 
{
    std::cout << "Please enter your request ADD, SEARCH or EXIT:" << std::endl;
    std::cout << "1) ADD" << std::endl;
    std::cout << "2) SEARCH" << std::endl;
    std::cout << "3) EXIT" << std::endl;
}

void    program_exit(void)
{
    std::cout << "Thank you for using PhoneBook!" << std::endl;
    return ;
}

int    check_phone(std::string phone)
{
	int i;

	i = 0;
	while (phone[i])
	{
    	if (!std::isdigit(phone[i]))
    	{
    	    std::cout << "The phone number should be in digits" << std::endl;
    	    return (1);
    	}
		i++;
	}
    return (0);
}

int main()
{
    Phonebook	phonebook;
	int 		i = 0;
	int 		x = 0;
	int			j = 0;
	int id;
	std::string str;
	while (str != "EXIT" && !std::cin.eof())
	{
		make_a_choice();
    	std::getline(std::cin, str);
    	if (str == "EXIT" || str  == "3")
    	    program_exit();
    	else if (str == "ADD")
		{
			std::cout << "Please enter contact's first name: ";
    	    std::getline(std::cin, str);
			phonebook.contact[i].setfirstname(str);
			std::cout << "Please enter contact's last name: ";
    	    std::getline(std::cin, str);
			phonebook.contact[i].setlastname(str);
			std::cout << "Please enter contact's nickname: ";
    	    std::getline(std::cin, str);
			phonebook.contact[i].setnickname(str);
			std::cout << "Please enter contact's phone number: ";
			std::getline(std::cin, str);
			while (check_phone(str) && !std::cin.eof())
			{
				std::cout << " Please enter again : ";
				std::getline(std::cin, str);
			}
			phonebook.contact[i].setphone(str);
    	    std::cout << "Please enter contact's dark secret: ";
			std::getline(std::cin, str);
			phonebook.contact[i].setsecret(str);
			std::cout << "Contact added successfuly!" << std::endl;
			i++;
			if(j < 8)
				j++;
			if (i > 7)
				i = 0;
		}
    	else if (str == "SEARCH")
		{
			if (j > 0)
			{
				x = 0;
				std::cout << "--------------- PHONEBOOK ----------------"<< std::endl;
				std::cout << std::left << std::setw(10) << "id"
				<< "|" << std::left << std::setw(10) << "First name"
				<< "|" << std::left <<  std::setw(10) << "Last name"
				<< "|" << std::left <<  std::setw(10) << "Nick name\n" << std::endl;
				while (x < j)
				{
					std::cout << std::right << std::setw(10) << x;
					std::cout << "|" << std::right << std::setw(10) << phonebook.trim(phonebook.contact[x].getfirstname());
					std::cout << "|" << std::right <<  std::setw(10) << phonebook.trim(phonebook.contact[x].getlastname());
					std::cout << "|" << std::right <<  std::setw(10) << phonebook.trim(phonebook.contact[x].getnickname()) << "|" << std::endl;
					x++;
				}
				std::cout << "Please enter id of contact:";
    			std::getline(std::cin, str);
				while (str.length() > 1 || !std::isdigit(str[0]) || x - 1 < std::stoi(str))
				{
					std::cout << "id should be a digit from 0 to 7, ";
					std::cout << "Please enter id of contact:";
    				std::getline(std::cin, str);
					if (str.length() == 1 && (str[0] >= '0' && str[0] <= '9'))
					{
						id = std::stoi(str);
						if (id < x)
							break;
					}
				}
				id = std::stoi(str);
    			phonebook.print(phonebook.contact[id]);
			}
			else
				std::cout << "No records on the Phonebook" << std::endl;
		}	
    	else
    	    std::cout << "Sorry we didn't recognize your request!" << std::endl;
	}
    return (0);
}