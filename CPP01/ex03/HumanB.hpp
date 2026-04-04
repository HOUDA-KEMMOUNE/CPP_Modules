# ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon  *weapon;

    public:
        void    attack(void);
        HumanB(std::string n_name);
        void    setWeapon(Weapon &n_weapon);
};

# endif