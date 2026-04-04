# ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        const std::string   &getType(void);
        void                setType(std::string new_type);
        Weapon(std::string T);
        Weapon(void);
        ~Weapon(void);
};

# endif