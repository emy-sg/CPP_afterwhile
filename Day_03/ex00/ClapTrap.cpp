#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default Constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string str) {
	std::cout << "Parameterized Constructor has been called" << std::endl;
	name = str;
	hitpoints = 10;
	energy = 10;
	Attack_damage = 0;
}

// Copy Constructor
ClapTrap::ClapTrap(const ClapTrap& instance) {
	std::cout << "Copy Constructor has been called" << std::endl;
	name = instance.name;
	hitpoints = instance.hitpoints;
	energy = instance.energy;
	Attack_damage = instance.Attack_damage;
}

// Copy Assignment Operator
ClapTrap& ClapTrap::operator=(const ClapTrap& instance) {
	std::cout << "Copy Assignment Operator has been called" << std::endl;
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
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
	std::cout << "Call takeDamage function" << std::endl;
	hitpoints -= amount;
}
