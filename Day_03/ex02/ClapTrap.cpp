#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default Constructor ClapTrap has been called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor ClapTrap has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string str) {
	std::cout << "Parameterized Constructor ClapTrap has been called" << std::endl;
	name = str;
	hitpoints = 100;
	energy = 300;
	Attack_damage = 30;
}

// Copy Constructor
ClapTrap::ClapTrap(const ClapTrap& instance) {
	std::cout << "Copy Constructor ClapTrap has been called" << std::endl;
	name = instance.name;
	hitpoints = instance.hitpoints;
	energy = instance.energy;
	Attack_damage = instance.Attack_damage;
}

// Copy Assignment Operator
ClapTrap& ClapTrap::operator=(const ClapTrap& instance) {
	std::cout << "Copy Assignment Operator ClapTrap has been called" << std::endl;
	name = instance.name;
	hitpoints = instance.hitpoints;
	energy = instance.energy;
	Attack_damage = instance.Attack_damage;
	return (*this);
}


// Member functions:


//  Attacking cost 1 energy point
void ClapTrap::attack(const std::string& target) {
	if (energy > 0 && hitpoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << " , " << "causing " << Attack_damage << " points of damage!" << std::endl;
		energy--;
	}
}

// Repairing cost 1 energy point
void	ClapTrap::beRepaired(unsigned int amount) {
	if (energy > 0 && hitpoints > 0)
	{
		std::cout << "ClapTrap " << name << " gets " << amount << " hit points back." << std::endl;
		hitpoints += amount;
		energy--;
	}
}

// Lose amount of hit points(health points)
void	ClapTrap::takeDamage(unsigned int amount) {
	if (energy > 0 && hitpoints > 0)
	{
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
		hitpoints -= amount;
	}
}
