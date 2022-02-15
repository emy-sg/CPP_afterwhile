/*
	Ressource:
				https://www.youtube.com/watch?v=4fJBrditnJU&t=2s&ab_channel=TheCherno


	Const keyword doesn't really do much in the scope of changes
		like visibility for classes and structs to make our look a little bit cleaner

	Const is like a promise that you give in which you promised that something will be constant
		and not going to change however it's just promise that you give in which you can bypass that hole promise.
	 
*/

#include <iostream>
#include <string>

// Example

/*int main() {

	int a = 5;

	a =6;						
	std::cout << a << std::endl;
}
*/

/*int main() {

	const int a = 5;

	a =6;							// Error compilation
	std::cout << a << std::endl;
}*/

/*
	So this is probably the most simple example for: How Const can be used 
	A simple way to say: I'm declaring a variable and I'm not going to modify this variable 
	 the term variable implies that it can change, where Const stands for constant
	 so you're basically declaring a constant instead of a variable.(smth that will not change)
*/

// ---------------------------------------------------------------

//		Other uses for Const: let's talk about them first one applies with pointers
			
// Example:

	 
/*int main() {
	const int MaxAge = 90;

	int* a = new int;
	
	// we can do two things here

	*a = 2;					// Normal stuff

	a = (int *)&MaxAge;			// To bypass the whole Const thing, I can cast this Const to a normal pointer
								// Not something you should usually do remember, but you can kinda
								// break the Const promise, this is one of the the ways
								//
								// If you try this, in this case, you can see we've declared a Const MaxAge
								// as an actual constant.
								
								
	*a = 222;					// Chances are the compile is actually going to treat that as kind of
								// read-only constant and if you try and dereference this
								// actually write to it you'll probably get a crash however 
								// for this purpose it will still work.


	std::cout << *a << std::endl;

	std::cout << MaxAge << std::endl;	// Why it still display MaxAge = 90
										// What we've actually done here is reassigned the pointer 
										// so we can do two things we can change the contents of the pointer
										// so the contents of the pointer 

}
*/

/*int	main() {
	int a = 5;
	int *b;

	b = &a;

	*b = 4;
	std::cout << *b << std::endl;	
	std::cout << a << std::endl;
}*/

// =========> 1

/*int main() {
	const int MaxAge = 90;

	const int* a = new int;		// Put Const at the front 
								// That means that you cannot modify the contents of that pointer
								// If you put Const before the point like :
								// 			int const * int
								// 	Here basically it's the same of:
								// 			 const int* 
								
	*a = 2;			// We cannot change the value of a pointer : Error Compilation Read-only Variable is not assignable
	
	a = (int*)&MaxAge;	// I'm not getting any kind of error when I try and actually change the pointer point to
						// The only problem is that I can't change the contents of that pointer, so the data at that address

	std::cout << *a << std::endl;

}*/

//	=========> 2

/*int main() {
	const	int MaxAge = 90;

	int* const a = new int;		// Put Const at the end
								// This does the opposite of putting Const at the front
								// I can change the contents of the pointer
								// But I can't reassign the the actual pointer to point to something else

	*a = 2;

	a = (int*)&MaxAge;			// Error compilation: a is const

	std::cout << *a << std::endl;
}*/

// ============> 3

/*int main() {
	const int MaxAge = 90;

	const int* const a = new int;	// In this case I cannot change the contents of the pointer 
									// And I can't change the actual pointer to point to something else
}*/



//   ------------------------------------------------------------------------------------


/*class  Entity {
	private:
		int x, y;
	
	public:
	
		// I'm actually going to put Const on the right of the method name 
		// so any parameters that we may taking 
		// This is kind of a third usage and this only works in a class 
		// And this means that this is not going to modify any of the actual 
		// So you can see we cannot modify class member variables if I try 
		// Like this we promised that this method is not going to modify the actual class 
		// It's just kind of a read-only method, it's just gonna read data

		int	GetX() const
		{
			return x;
		}
	
		void SetX(int x)		// Don't use Const at the end of the method name 
		{
			this->x = x;	
		}
};

int main() {
	Entity obj;

	obj.SetX(5);
	std::cout << obj.GetX() << std::endl;
	return (0);
} */


//		--------------------------------------------------------------------------------

/*class Entity {
	private:
		int *x, y;

	public:
		Entity() {
			x = new int;	// important to initialze the pointer
		}

		// It means that we are returning a pointer that cannot
		// be modified the contents of the pointer 
		// And this method cannot modify the actual entity class
		// So yeah that's alot of restrictions we've put onto this method

		const int* const GetX() const
		{
			return x;
		}

		void	SetX(int x) 
		{
			*this->x = x; 
		}
};

int main() {
	Entity obj;

	obj.SetX(5);
	std::cout << *(obj.GetX()) << std::endl;
	return (0);
}*/


//			----------------------------------------------------------------------

class Entity {
	private:
		int x, y;	

	public:
		int getX() const {
			return x;
		}

		void setX(int x) {
			this->x = x;
		} 
};

// Reasonable function here, I want to be able to pass this by constant reference 
// bcuz I don't want to copy the Class object ==> so we use reference. 

void	PrintEntity(const Entity& e)
{
	// Just like with pointers : const Entity* e
	// if this was a pointer I can modify what it's pointing towards
	// so I can modify this:
	
	e.setX(5);
	std::cout << e.setX() << std::endl;
}

int	main() {
	Entity obj;
	PrintEntity(&obj);
}

//			-----------------------------------------------------------------------

// Ressources:
//					https://www.geeksforgeeks.org/const-keyword-in-cpp/



