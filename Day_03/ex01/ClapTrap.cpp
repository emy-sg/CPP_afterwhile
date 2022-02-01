#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	std::cout << "Constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : Name(Name){
	std::cout << "Parameterized Constructor is called" << std::endl;
}

ClapTrap::~ClapTrap(void){
	std::cout << "Destructor is called" << std::endl;
}

void	ClapTrap::attack(std::string const & target){
	std::cout << "ClapTrap" << " " << this->Name << " " << "attack" << " " << target << "," << " " << "causing" << " " << this->Attack_damage << " " << "points of damage!" << std::endl;
}

