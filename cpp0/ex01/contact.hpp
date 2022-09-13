#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string.h>

class Contact{
private:
    int         id;
    std::string  lastname;
    std::string secret;
    std::string firstname;
    std::string nickname;
    std::string     phone;
public:
    void    print(void);
    
    //Setters
    void	setlastname(std::string str);
    void	setfirstname(std::string str);
    void	setnickname(std::string str);
    void	setphone(std::string str);
    void	setsecret(std::string str);

    //Getters
    std::string	getfirstname();
    std::string	getnickname();
    std::string	getlastname();
    std::string	getphone();
    std::string	getsecret();
};
#endif