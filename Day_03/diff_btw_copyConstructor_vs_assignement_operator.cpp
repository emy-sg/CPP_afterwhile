#include <iostream>

// Copy Constructor: "initialize" an object using another object of the same class.
// Copy Assignment operator: "create" new object using another object of the same class.

/*
			Orthodox Canonical Form:
		
				- Default constructor
				- Copy constructor
				- Copy Assignment operator (it can be: void operator=(const class&) OR class& operator=(const class&))
					==> the only difference btw them is:
						- In case of "void": class a = b = c = d; // wont work, let's tested :)
						- So it would be better and best practise to use "class&", in this case: class a = b = c; // work just fine
				- Destructor

*/

/*
				Diff btw "Copy Constructor" vs "Copy Assignment Operator"

	Ressource:
				https://www.geeksforgeeks.org/copy-constructor-vs-assignment-operator-in-c/
*/

/*
	Let's talk about "Copy Assignment Operator":
						class& operator=(const class&)

	Ressource:
					https://www.ibm.com/docs/en/zos/2.1.0?topic=only-copy-assignment-operators


//		==> Error: 	reference to stack memory associated with local variable 'emy' returned

*/


/*
					Copy Assignement Operator

  The copy assignment operator lets you create a new object from an existing one by "initialization".
A copy assignment operator of a class A is not a nonstatic non-template member function that has one of the following forms:
	- A::operator=(A)
	- A::operator=(A&)
	- A::operator=(const A&)
	- A::operator=(volatile A&)
	- A::operator=(const volatile A&)

If you do not declare a "copy assignment operator" for a class, the compiler will implicitly declare one for you that is "inline public".

The assignement " x = y " calls the implicitly defined "copy assignement operator".

The implicitly declared "copy assignment operator" returns an lvalue reference to the operator's argument.

*/


// Example1:

/*class obj{
	private:
		int x;

	public:
		obj() {
		}
		obj(int i) : x(i) {
			std::cout << "Parameterized Constructor has been called" << std::endl;
		}

		obj(const obj& instance) {
			std::cout << "Copy Constructor has been called" << std::endl;
			x = instance.x;
		}

		~obj() {
			std::cout << "Destructor has been called" << std::endl;
		}

		void operator=(const obj& instance) {
			std::cout << "Copy assignement operator has been called" << std::endl;
			x = instance.x;
		}
};

int main() {
	obj emy(5), hss, msn;

	hss = msn = emy;	// error
}
*/


// Example2:

/*class obj {
	private:
		int x;

	public:
		obj() {
		}

		obj(int i) {
			std::cout << "Parameterized Constructor has been called" << std::endl;
			x = i;
		}

		obj(const obj& instance) {
			std::cout << "Copy Constructor has been called" << std::endl;
			x = instance.x;
		}

		~obj() {
			std::cout << "Destructor has been called" << std::endl;
		}

		obj& operator=(const obj& instance) {
			std::cout << "Copy Assignement operator has been called" << std::endl;
			x = instance.x;
			return (*this);
		}
};

int main() {
	obj emy(9), hss, msn;

	hss = msn = emy;	// Now we don't get an error
}*/


