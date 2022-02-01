# ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{
	std::string type;
	std::string const & getType();
	void setType(std::string type);
};

#endif
