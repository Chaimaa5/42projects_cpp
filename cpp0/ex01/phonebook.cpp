#include "phonebook.hpp"

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


int main()
{
    Phonebook	phonebook;
	int 		i = 0;
	int 		x = 0;
	int			j = 0;
	int id;
	std::string str;

	while (str != "3" && str != "EXIT")
	{
		make_a_choice();
    	std::cin >> str;
    	if (str == "EXIT" || str  == "3")
    	    program_exit();
    	else if (str == "ADD" || str == "1")
		{
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
			if(j < 8)
				j++;
			if (i > 7)
				i = 0;
		}
    	else if (str == "SEARCH" || str == "2")
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
					std::cout << std::left << std::setw(10) << x;
					std::cout << "|" << std::left << std::setw(10) << phonebook.trim(phonebook.contact[x].getfirstname());
					std::cout << "|" << std::left <<  std::setw(10) << phonebook.trim(phonebook.contact[x].getlastname());
					std::cout << "|" << std::left <<  std::setw(10) << phonebook.trim(phonebook.contact[x].getnickname()) << "|" << std::endl;
					x++;
				}
				std::cout << "Please enter id of contact:";
    			std::cin >> str;
				while (str.length() > 1 || !isdigit(str[0]) || x - 1 < stoi(str))
				{
					std::cout << "id should be a digit from 0 to 7, ";
					std::cout << "Please enter id of contact:";
    				std::cin >> str;
					if (str.length() == 1 && (str[0] >= '0' && str[0] <= '9'))
					{
						id = stoi(str);
						if (id < x)
							break;
					}
				}
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