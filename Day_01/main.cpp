#include <iostream>

int y = 9;

class x {
	private:
		int& var;

	public:
		x(int& y);
		int	getVar();
};

x::x(int& y) : var(y){			// you should use the initializer to initiaise the reference 
//	var = y;					// here you assign a value 
}

int	x::getVar() {
	return (int)var;
}

int main() {
	x obj(y);
	std::cout << obj.getVar() << std::endl;
}

