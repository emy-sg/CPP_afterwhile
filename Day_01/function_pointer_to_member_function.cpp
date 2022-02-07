// The syntax of a "member pointer" is a different type category from a "ordinary pointer".
// The "memory pointer" will have to be used together with an object of its class:

// int (*x) (...) : is not a pointer to member function.
// A pointer to member function is written like this: int (A::*x) (void) = &A::f;


#include <iostream>

class A
{
	public:
		int fct();			// return_type name_of_fct(args);
		int (A::*fctx)();	// return_type Class::*name_of_fct(args);
};

int	A::fct() {
	return 1;
}

int main() {
	A obj;

	obj.fctx = &A::fct;					// obj.*(obj.name_of_fctx) ())
	printf("%d\n", (obj.*(obj.fctx))()); // use together with an object of its class
}
