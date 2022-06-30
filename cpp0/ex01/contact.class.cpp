#include "contact.class.hpp"

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{
    return;
}
//print contact after id search
Contact::print(int id)
{
    for (int i = 0; i <= id; i++)
    {
        if (i == id)
        {
			std::cout << "Name: << contact.name << " << std::endl;
			std::cout << "Age: << contact.age << " << std::endl;
			std::cout << "Phone number: << contact.phone << " << std::endl;
		}    
    }
}