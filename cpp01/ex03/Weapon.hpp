#include <iostream>

class Weapon{
    private:
        std::string type;
    public:
        void setType(std::string type);
        const std::string & getType();
        Weapon();
        Weapon(std::string type);
        ~Weapon();
};