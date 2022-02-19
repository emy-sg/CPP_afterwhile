#include <iostream>

/* Ressource:

		Type of inheritance:
				https://www.geeksforgeeks.org/inheritance-in-c/?ref=lbp

		Order of Constructor/Destructor Call in c++:
				https://www.geeksforgeeks.org/order-constructor-destructor-call-c/#:~:text=For%20multiple%20inheritance%20order%20of,then%20the%20derived%20class's%20constructor.	
*/
class obj {
	public:
		const int x;
		obj();
		~obj();
};

obj::obj() : x(5) {
	std::cout << "Constructor has been called" << std::endl;
}

obj::~obj() {
	std::cout << "Destructor has been called" << std::endl;
}

//	---------------------------------------------

class heart : public obj {
};

int main() {
	heart my;
}

