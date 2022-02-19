#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Default Constructor ScavTrap has been called" << std::endl; 
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str) {
	std::cout << "Parameterized Constructor ScavTrap has been called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap has been called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& instance) {
	std::cout << "Copy Constructor ScavTrap has been called" << std::endl;
}

ScavTrap& operator=(const ScavTrap& instance) {
	std::cout << "Copy Assignment Operator ScavTrap has been called" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (energy > 0 && hitpoints > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << " , " << "causing " << Attack_damage << " points of damage!" << std::endl;
		energy--;
	}
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " call guardGate() function" << std::endl;	
}

