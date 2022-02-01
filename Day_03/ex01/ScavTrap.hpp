# ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	public:
		ScavTrap(void);
		ScavTrap(std::string Name);
		~ScavTrap(void);

		void attack(std::string const & target);
		void guardGate();
};

#endif
