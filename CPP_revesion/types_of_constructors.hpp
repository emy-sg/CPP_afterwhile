/*
		Default Constructor
	
	- A "Consturctor" is a special member function of a class,
	 It's executed whenever we create new objects of that class.

	- A "Constructor" will have exact same name, as the "Class"
	 and it does not have any return type at all, not even "void".

	- "Constructor" can be very useful for "setting initial values"
	 for certain "member attributes".

*/

/*
		Destructor

	- A "Destructor" is a special member function of a class,
	 It's executed whenever an object of a class "goes out of scope"
	  or "delete the object (delete the pointer to that object)".
	
	- A "Destructor" will have exact same name as the class prefixed
	  with a tild (~), and it can neither return a value
	   or take any parameters.

	- "Destructor" can be very useful for "releasing resources"
	  before comming out of the program, like:
	  	* closing files
		* releasing memories
		* etc ...
*/

/*
		Parameterized Constructor

	- A "default Constructor" does not have any parameter,
	
	- If you need to assign initial value to an object
	   at the time of its creation, you can use a 
	   	"constructot with parameters".
   ==> In case of "parameterized constructor", you can use
   	the following syntax to initialize the "member attributes".

Example:
   If for class C, you have multiple fields X, Y, Z, use this syntax:

    CONSTRUCTOR::CONSTRUCTOR (int a, int b, int c) : X(a), Y(b), Z(c) {
 	}

*/

/*
		Copy Constructor

	- The "copy constructor" is a constructor which creates an object
		by initializing it with an object of the same class,
		which has been created previously.

	- The copy constructor is used to:
		- Initialize one object from another of the same type.
		- Copy an object to pass it as an argument to a function.
		- Copy an object to return it from a function.
	
    ==> If a copy constructor is not defined in a class, 
    	  the compiler itself defines one.
    ==> If the class has pointer variables and has some dynamic memory
	   allocations, then it is a must to have a copy constructor.

	- The most common form of copy constructor is shown here:
      	
	   	 classname (const classname &obj) {
	    		// body of constructor
	    	 }

*/

#include "types_of_constructors.hpp"

LINE::LINE(int num) {
	std::cout << "Normal constructor allocating ptr" << std::endl;

	ptr = new int;
	*ptr = num;
}

LINE::~LINE() {
	std::cout << "Freeing memory" << std::endl;
	delete ptr;
}

LINE::LINE (const LINE &obj) {
	std::cout << "Copy constructor allocating ptr" << std::endl;
	ptr = new int;
	*ptr = *obj.ptr;	
}

void	LINE::display()
{
	std::cout << "Line is equal " << *ptr << std::endl;
}

int	LINE::getptr()
{
	return *ptr;
}

void	display_str(LINE line) {

	std::cout << "ssss " << line.getptr() << std::endl;
}

int main(){

/*	LINE line(100);
	line.display();

	display_str(line);*/

	LINE line1(100);

	LINE line2 = line1;

	display_str(line1);
	display_str(line2);

	return (0);
}
