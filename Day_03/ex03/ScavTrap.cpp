#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){
	std::cout << "ScavTrap Constructor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
	std::cout << "ScavTrap Parameterized Constructor is called" << std::endl;
	this->name = name;
	this->hitpoints = 100;
	this->energy = 50;
	this->Attack_damage = 20;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap Destructor is called" << std::endl;
}

void	ScavTrap::attack(std::string const & target){
	std::cout << "ScavTrap" << " " << this->name << " ";
	std::cout << "attack" << " " << target << "," << " ";
	std::cout << "causing" << " " << this->Attack_damage << " ";
	std::cout << "points of damage!" << std::endl;
}

