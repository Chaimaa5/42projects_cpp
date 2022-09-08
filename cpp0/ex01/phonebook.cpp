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

int    check_phone(int phone)
{
    if (isdigit(phone))
    {
        std::cout << "The phone number should be in digits";
        return (1);
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

int main()
{
    char		msg[512];
    Phonebook	phonebook;
	int 		i = 0;
	int			id;

	while (1)
	{
    make_a_choice();
    std::cin >> msg;
    if (!strcmp(msg, "EXIT") || !strcmp(msg, "3"))
        program_exit();
    else if (!strcmp(msg, "ADD") || !strcmp(msg, "1"))
	{
		std::cout << "Please enter contact's name: ";
        std::cin >> phonebook.contact[i].name;
        std::cout << "Please enter contact's age: ";
        std::cin >> phonebook.contact[i].age;
		if (isdigit(phonebook.contact[i].age))
			std::cout << "Age should be a digit" << std::endl;
        std::cout << "Please enter contact's phone number: ";
        std::cin >> phonebook.contact[i].phone;
		if (check_phone(phonebook.contact[i].phone))
		{
			std::cout << "Please enter contact's phone number: ";
        	std::cin >> phonebook.contact[i].phone;
		}
		else
		{
        	std::cout << "Contact added successfuly!";
			i++;
		}
	}
    else if (!strcmp(msg, "SEARCH") || !strcmp(msg, "2"))
	{
		if (phonebook.contact[0].age)
		{
			std::cout << "Contact Details "<< std::endl;
			for (size_t j = 0; j <= 7; j++)
			{
				if (phonebook.contact[j].age)
				{
					std::cout << "  " << phonebook.contact[j].id;
					std::cout << "  " << phonebook.contact[j].name;
					std::cout << "  " << phonebook.contact[j].age << std::endl;
				}
			}
			std::cout << "Please enter id of contact:" << std::endl;
    		std::cin >> msg;
			id = atoi(msg);
			if (isdigit(id))
				std::cout << "id should be a digit from 1 to 8" << std::endl;
			else
			{
    			std::cout << "Contact Details " << std::endl;
				std::cout << "Name: " << std::endl;
				std::cout << "Age:  " << std::endl;
				std::cout << "Phone number:  " << std::endl;  
			}
		}
		else
			std::cout << "No records on the Phonebook";
	}
    else
        std::cout << "Sorry we didn't recognize your request!" << std::endl;
	}
    return (0);
}