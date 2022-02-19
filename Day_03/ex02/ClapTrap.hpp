# ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	protected:
		std::string	name;
		int			hitpoints;
		int			energy;
		int			Attack_damage;

	public:
		/*   Orthodox Canonical Form:

		 			-Default constructor
					-Copy constructor: initialize an object from another object of the same class.
					-Copy assignement operator
					-Destructor
		*/

		//default constructor
		ClapTrap();
		
		//Destructor
		~ClapTrap();

		//Copy constructor
		ClapTrap(const ClapTrap&);

		//Copy assignement operator
		ClapTrap& operator=(const ClapTrap&);

		//parameterized constructor
		ClapTrap(std::string str);

		void attack(const std::string& target);

		void takeDamage(unsigned int amount);

		void beRepaired(unsigned int amount);
};

#endif
