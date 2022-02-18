#include <iostream>

class obj {
	private:
		int x;

	public:
		obj () : ptr_to_x(&obj::x) {
		}
		int obj::*ptr_to_x;
		void getX() {
			std::cout << "Value x is:" << x << std::endl;
		}
};

int main() {
	//declare pointer to member
	//int obj::*ptr_to_x = &obj::x;

	// declare instance of obj
	obj emy;

	emy.*(emy.ptr_to_x) = 100;
	std::cout << emy.*(&(emy.ptr_to_x)) << std::endl;
	
	emy.getX();
}

// declare pointer to member
//	return_type class::*name_of_ptr = &class::name_of_member
// use pointer to member
//	name_of_instance_of_class.*name_of_ptr = 100;
