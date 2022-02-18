#include <iostream>

class obj {
	private:
		int x;
	public:
		obj();
		int obj::*ptr_to_data;
		int getX() {
			return x;
		}
};

obj::obj() : ptr_to_data(&obj::x) {
}

int main() {
	obj emy;

	//emy.*ptr_to_data = 5;			// undeclared identifier "ptr_to_data"
	emy.*(emy.ptr_to_data) = 5;
	std::cout << emy.getX() << std::endl;
}
