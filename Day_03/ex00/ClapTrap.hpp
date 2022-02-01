# ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	std::string Name;
	int Hitpoints = 10;
	int Energy_points = 10;
	int Attack_damage = 0;
	
	public:
		ClapTrap();
		ClapTrap(std::string);
		~ClapTrap();
		
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
