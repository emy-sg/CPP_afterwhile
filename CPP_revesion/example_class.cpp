/*
 		Define C++ Objects

 *	An "object" is created from a "class".
 *	A "class" provides the "blueprints"(Model) for "objects".
    
 ==> We declare objects of a class, with exactly the same sort of 
 	declaration that we declare variables of "basic types"
    Example:
    		Box  Box1;	// Declare Box1 of type Box
		Box  Box2;	// Declare Box2 of type Box
 
 ==> Both of the "objects" Box1 and Box2, will have their own copy of 
 	"data members".

*/

/*
 		Accessing The Data Members

 * 	The "public data members" of "Objects", can be accessed using
		the "direct member access operator"(.).
	Example:
		Box1.i = 100;
		Box2.i = 1000;

 ==> It is important to note that "privat" and "protected" members,
	can not be accessed directly using "direct member access operator"(.).
		 
*/

/*
 		Interesting Concepts related to C++
			Classes and Objects
	
*	"Member function": it's a function that has its prototype within
		the class definition.
*	"Access modifiers": can be defined as "public", "private" or "protected"
		and by default "members" would be assumed as "private".
*	"Constructor": it's a "special function" in a class that is called, when
		a "new object" of the class is created.
*	"Destructor": it's a "special function" in a class that is called, when
		a created object is deleted.
*	"This pointer": Every object has a special pointer "this",
		which points to the object itself.
*	"Pointer to C++ classes": A "pointer to a class" is done exactly the
		same way as a "pointer to a structure".
	==> In fact, a "class" is really just a "structure with functions in it".
*/

#include "example_class.hpp"

int main()
{
	BOX box1;
	BOX box2;


	box1.i = 100;
	box2.i = 1000000;
	
	std::cout << "BOX1" << " " << box1.i << std::endl;
	std::cout << "BOX2" << " " << box2.i << std::endl;
	return (0);
}
