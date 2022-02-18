#include <iostream>

/*
	Ressource:
				https://www.tutorialspoint.com/cplusplus/cpp_polymorphism.htm

	- "Polymorphism" occurs(happened) when there is a hierarchy of classes, and they are related by inheritance.
	- "C++ polymorphism" means the call to a "member function" will cause a different function to be executed
			on the type of "object" that invokes the function.	


*/

// Example 1:

/*class Shape {
	protected:
		int width;
		int height;

	public:
		Shape(int, int);
		int area();
};	


Shape::Shape(int a, int b) : width(a), height(b) {
}

int Shape::area() {
	std::cout << "Parent class area :" << std::endl;
	return 0;
}

// -----------------------------------------------------------

class Rectangle: public Shape {
	public:
		Rectangle(int, int);
		int area();
};

Rectangle::Rectangle(int a, int b) : Shape(a, b) {
}

int Rectangle::area() {
	std::cout << "Rectangle class area :" << std::endl;
	return (width * height);
}

// -------------------------------------------------------------

int main() {
	Rectangle rec(10, 7);

	Shape *shape;
	// store the address of Rectangle
	shape = &rec;

	// call rectangle area
	shape->area();
}
*/

// Example 2:

/*
	The reason for the "incorrect output" is that the call of the "function area()", is being:
	  		"set" once "by the compiler" as the version defined in the "base class".
	
	==> This is called "static resolution" of the function call, "static linkage".
	==> "Static linkage" (is when the function call is fixed before the program is executed).
	==> This is also sometimes called "early binding" bcuz the "area()" is set during the compilation of the program.
	
*/

class Shape {
	protected:
		int width;
		int height;

	public:
		Shape(int, int);
		virtual int area();
};

Shape::Shape(int a, int b) : width(a), height(b) {
}

int Shape::area() {
	std::cout << "Parent class area :" << std::endl;
	return(0);
}

//  ---------------------------------------------------

class Rectangle : public Shape {
	public:
		Rectangle(int, int);
		int area();
};

Rectangle::Rectangle(int a, int b) : Shape(a, b) {
}

int Rectangle::area() {
	std::cout << "Rectangle class area :" << std::endl;
	return(width*height);
}

//  -------------------------------------------------

int main() {
	Rectangle rec(10, 5);

	Shape *shape = &rec;

	std::cout << shape->area() << std::endl;
}

