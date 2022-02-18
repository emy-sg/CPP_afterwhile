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

ClapTrap::ClapTrap(const ClapTrap& instance) {
	name = instance.name;
	hitpoints = instance.hitpoints;
	energy = instance.energy;
	Attack_damage = instance.Attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& instance) {
	name = instance.name;
	hitpoints = instance.hitpoints;
	energy = instance.energy;
	Attack_damage = instance.Attack_damage;
	return (*this);
}

// Attack it causes to lose hit points, Attacking cost 1 energy point
void ClapTrap::attack(const std::string& target) {
	if (energy > 0 && hitpoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << " , " << "causing " << Attack_damage << " points of damage!" << std::endl;
		energy--;
	}
}

// ClapTrap repairs itself, repairing cost 1 energy point
void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "Call beRepaired function" << std::endl;
	if (energy > 0 && hitpoints > 0)
	{
		hitpoints += amount;
		energy--;
	}
}

// ClapTrap takeDamage,
void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "Call takeDamage function" << std::endl;
	hitpoints -= amount;
}
