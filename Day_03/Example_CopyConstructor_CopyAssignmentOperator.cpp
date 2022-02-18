#include <iostream>

class obj{
	public:
		int x;
		// default constructor
		obj();

		// parameterized constructor
		obj(int);

		// copy constructor
		obj(const obj&);

		// copy assignment operator
		//void operator=(const obj&);
		obj& operator=(const obj&);

		// destructor
		~obj();
};

obj::obj() {
	
	std::cout << "Constructor has been called" << std::endl;
	x = 0;	
}

obj::obj(int x) {

	std::cout << "Parameterized Constructor has been called" << std::endl;
	this->x = x;
}

obj::obj(const obj& instance) {

	std::cout << "Copy Constructor has been called" << std::endl;
	x = instance.x;
}

// First error: it's not an error of compilation but it want change the value of x, obviously
// 		Error: 	reference to stack memory associated with local variable 'emy' returned
/*
void obj::operator=(const obj& instance) {

	std::cout << "Copy assignment Constructor has been called" << std::endl;
	obj new_instance;
	new_instance.x = instance.x;
}*/

// The problem of this method is it will not work, in this case: a = b = c = d
//  cuz it work exactly the same as copy constructor
/*void obj::operator=(const obj& instance) {

	std::cout << "Copy assignment Constructor has been called" << std::endl;
	x = instance.x;
}*/


// This is the best implementation of Copy assignment operator,
// 	 and it will work in this case: a = b = c = d

obj& obj::operator=(const obj& instance) {
	
	std::cout << "Copy assignment operator  has been called" << std::endl;
	x = instance.x;
	return (*this);
}

obj::~obj() {

	std::cout << "Destructor has been called" << std::endl;
}

int main() {
	obj emy(5), hss, msn;

	std::cout << "The value of emy is: " << emy.x << std::endl;
	std::cout << "The value of hss is: " << hss.x << std::endl;

	hss = msn = emy;


	std::cout << "The value of hss is: " << hss.x << std::endl;
	std::cout << "The value of msn is: " << msn.x << std::endl;
}

