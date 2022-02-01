						C++ Classes and Objects
https://www.geeksforgeeks.org/c-classes-and-objects/?ref=lbp
				-------------------------------------------

					Definition to Class and Object

Class: A Class in C++ is the building block that leads to Object-Oriented programming.

A Class is a user-defined data type, which holds its own data members and member functions,
which can be accessed and used by creating an instance of that Class (Object).

	- A Class is a user defined data-type which has data members and member functions.
	- "Data members" are the data variables and "member functions" are the function used to
		manipulate these variables and member fuctions defines the properties and behavior
	    of the objects in a Class.

	- Example:
		Class of "Cars", there is many cars with different names and brand.

Object: An Object is an instance of a Class.

==> When a class is defined, no memory is allocated but when a Class is instantiated
 (an object is created) memory is allocated.

 				-----------------------------------------

				Defining Class and Declaring Objects

1- Defining a Class:

 - A Class is defined in C++ using keyword "class" followed by the name of Class.
 - The body of Class is defined inside the curly brackets and terminated by a semicolon at the end.


		class	ClassName
		{
			"Access specifier 		";		// can be: private, public or protected

			"Data members 			";		// Variables to be used

			"Member Functions()  {} ";		// Methods to access data members

		};									// Class name ends with a semicolon

2- Declaring Objects:

 - When a Class is defined, only the specification for the object is defined; no memory or storage is allocated.
 - To use the data and access functions defined in the class, you need to create objects.

 	Syntax:
 				ClassName ObjectName;

  ==> Accessing "data members" and "member functions":
  		The "data members" and "member functions" of class can be accessed using the dot('.') operator with the object.

				----------------------------------------------

					Accessing Data Members

- The public "data members" are also accessed via the dot ('.') operator,
  however the private "data members" are not allowed to be accessed directly by the object.

==> Accessing a "data member" depends on the access control of that data member.

	Example:

		# include <iostream>

		class	Geeks
		{
			public:			// Access specifier
			
			string geekname;	// Data Members
		
			void printname()			// Member Functions()
			{
				std::cout << "Geekname is: " << geekname;
			}
		};

		int main()
		{
			Geeks  obj1;			// Declare an object of class geeks

			obj1.geekname = "SOUL";	// accessing data member

			obj1.printname();		// accessing member function

			return (0);
		}

				----------------------------------------------
				
					Member Functions in Classes

 ==> There are 2 ways to define a member function:
 		- Inside class definition
		- Outside class definition


