#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	std::cout << "ClapTrap Constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name){
	std::cout << "ClapTrap Parameterized Constructor is called" << std::endl;
	this->hitpoints = 10;
	this->energy = 10;
	this->Attack_damage = 0;
}

ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap Destructor is called" << std::endl;
}

void	ClapTrap::attack(std::string const & target){
	std::cout << "ClapTrap" << " " << this->name << " ";
	std::cout << "attack" << " " << target << "," << " ";
	std::cout << "causing" << " " << this->Attack_damage << " ";
	std::cout << "points of damage!" << std::endl;
}

