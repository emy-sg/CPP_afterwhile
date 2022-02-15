// Basically "function pointer" are just a way to assigne a fct to a "variable"

/*
    Ressouces:
				https://www.ibm.com/docs/en/i/7.4?topic=only-pointers-members-c
			
		
				Why we use the pointer to member function in cpp ?

	Pointers to members allow you to refer to nonstatic members of class objects.		
==> You cannot use a pointer to member to point to a "static class member"
	 bcuz the address of a "static member" is not associated with any particular object.
==> To point to a static class member, you must use a normal pointer.

*/

/*#include <iostream>

class x {
	public:
		int		a;
		void	f(int b);
};

void	x::f(int b) {
	std::cout << "The value of b is " << b << std::endl;
}

int main() {
	
	int x::*ptiptr = &x::a;			// declare pointer to data member
	
	void (x::*ptfptr) (int) = &x::f;  // declare a pointer to member function

	x obj;

	obj.*ptiptr = 100;				// initialize data member
	
	std::cout << "The value of a is " << obj.*ptiptr << std::endl;

	(obj.*ptfptr) (2);				// call member function

}
*/

/*
	==> To reduce complex syntax, you can declare a "typedef" to be a pointer to a member.

*/

#include <iostream>

class x {
	public:
		int 	a;
		void	f(int b);
};

void	x::f(int b) {
	std::cout << "The value of b is " << b << std::endl;
}

typedef	int	x::*my_ptr_to_data;
typedef void (x::*my_ptr_to_fct) (int);

int main() {
	my_ptr_to_data ptiptr = &x::a;
	my_ptr_to_fct 	ptfptr = &x::f;

	x obj;

	obj.*ptiptr = 10;
	std::cout << "The value of a is " << obj.*ptiptr << std::endl;
	(obj.*ptfptr) (20);
}

/*
==> The pointer to member operators .* and ->* are used to bind a pointer to a 
		member of a specific class object.

==> () : (function call operator) is higher than .* and .->
		so you must use parentheses to call the function pointed to by ptf.

==> Pointer-to-member conversion, can occur when pointers to members are:
				initialized
				assigned or compared
==>>>>> Note that pointer to a member is not the same as a pointer to an a function.
 */

// The syntax of a "member pointer" is a different type category from a "ordinary pointer".
// The "memory pointer" will have to be used together with an object of its class:

// int (*x) (...) : is not a pointer to member function.
// A pointer to member function is written like this: int (A::*x) (void) = &A::f;


/*#include <iostream>

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
*/
