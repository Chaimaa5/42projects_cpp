#include "HumanA.hpp"

class HumanB{
    private:
        std::string name;
        Weapon      *weapon;
    public:
        void    attack();
        HumanB(std::string name);
}