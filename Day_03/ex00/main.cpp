#include "ClapTrap.hpp"

int main() {
	ClapTrap player1("emy");
	ClapTrap player2("hss");

	player1.attack("hss");
	player2.takeDamage(5);
	player2.beRepaired(5);

}
