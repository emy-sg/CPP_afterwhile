# ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	public:
		// Orthodox Canonical form:  
		ScavTrap(void);				// default constructor
		ScavTrap(std::string str); // parameterized constructor
		~ScavTrap(void);			// destructor

		ScavTrap(const ScavTrap&);	// copy constructor
		ScavTrap& operator=(const ScavTrap&);	// Copy assignment operator

		void attack(const std::string& target);
		void guardGate();
};

#endif
