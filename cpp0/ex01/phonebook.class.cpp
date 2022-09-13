#include "phonebook.hpp"

std::string Phonebook::trim(std::string str)
{
	std::string strr;

	if (str.length() > 10)
	{
		strr = str.erase(9, str.length());
		strr += '.';
	}
	else
		strr = str;
	return (strr);
}

void	Phonebook::print(Contact contact)
{
	std::cout << "Contact Details " << std::endl;
	std::cout << "First Name: " <<  contact.getfirstname() << std::endl;
	std::cout << "Last Name:  " <<  contact.getlastname() << std::endl;
	std::cout << "Nickname:  " <<  contact.getnickname() << std::endl;
	std::cout << "Phone number:  " << contact.getphone() << std::endl; 
	std::cout << "Dark secret:  " << contact.getsecret() << std::endl;  
				
}
