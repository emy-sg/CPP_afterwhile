# ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	protected:
		std::string name;
		int	hitpoints;
		int	energy;
		int	Attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string);
		~ClapTrap();

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
