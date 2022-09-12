#include "phonebook.hpp"
#include <iomanip>

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
    	if (!isdigit(phone[i]))
    	{
    	    std::cout << "The phone number should be in digits" << std::endl;
    	    return (1);
    	}
		i++;
	}
    return (0);
}


// void    find_contact_id(int	id)
// {
// 	while (contact[i])
// 	{
// 		if (i == id)
// 			print_contact(id);
// 		i++;
// 	}
// }

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
	phone = stoi(str);
}


int	Contact::getphone()
{
	return(phone);
}

void	Contact::setid(int str)
{
	phone = str;
}


int	Contact::getid()
{
	return(id);
}
void	Contact::setsecret(std::string str)
{
	secret = str;
}


std::string	Contact::getsecret()
{
	return(secret);
}

int main()
{
    Phonebook	phonebook;
	int 		i = 0;
	int 		x = 0;
	int id;
	std::string str;

	while (str != "3")
	{
		make_a_choice();
    	std::cin >> str;
    	if (str == "EXIT" || str  == "3")
    	    program_exit();
    	else if (str == "ADD" || str == "1")
		{
			phonebook.contact[i].setid(i);
			std::cout << "Please enter contact's first name: ";
    	    std::cin >> str;
			phonebook.contact[i].setfirstname(str);
			std::cout << "Please enter contact's last name: ";
    	    std::cin >> str;
			phonebook.contact[i].setlastname(str);
			std::cout << "Please enter contact's nickname: ";
    	    std::cin >> str;
			phonebook.contact[i].setnickname(str);
			std::cout << "Please enter contact's phone number: ";
			std::cin >> str;
			while (check_phone(str))
			{
				std::cout << " Please enter again : ";
				std::cin >> str;
			}
			phonebook.contact[i].setphone(str);
    	    std::cout << "Please enter contact's dark secret: ";
			std::cin >> str;
			phonebook.contact[i].setsecret(str);
			std::cout << "Contact added successfuly!" << std::endl;
			i++;
		}
    	else if (str == "SEARCH" || str == "2")
		{
			if (i > 0)
			{
				x = 0;
				std::cout << "Contact Details "<< std::endl;
				while (x < i)
				{
						std::cout << std::setw(10) << x;
						std::cout << "|" <<  std::setw(10) << phonebook.contact[x].getfirstname();
						std::cout << "|" <<  std::setw(10) << phonebook.contact[x].getlastname();
						std::cout << "|" <<  std::setw(10) << phonebook.contact[x].getnickname() << std::endl;
						x++;
				}
				std::cout << "Please enter id of contact:" << std::endl;
    			std::cin >> str;
				while (isdigit(id) || str.length() > 1)
				{
					std::cout << "id should be a digit from 0 to 7, ";
					std::cout << "Please enter id of contact:";
    				std::cin >> str;
				}
				id = stoi(str);
    			std::cout << "Contact Details " << std::endl;
				std::cout << "First Name: " <<  phonebook.contact[id].getfirstname() << std::endl;
				std::cout << "Last Name:  " <<  phonebook.contact[id].getlastname() << std::endl;
				std::cout << "Nickname:  " <<  phonebook.contact[id].getnickname() << std::endl;
				std::cout << "Phone number:  " << phonebook.contact[id].getphone() << std::endl; 
				std::cout << "Dark secret:  " << phonebook.contact[id].getsecret() << std::endl;  

			}
			else
				std::cout << "No records on the Phonebook";
		}	
    	else
    	    std::cout << "Sorry we didn't recognize your request!" << std::endl;
	}
    return (0);
}