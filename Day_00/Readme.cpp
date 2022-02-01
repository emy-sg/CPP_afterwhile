1- Namespace:
https://www.quora.com/What-is-the-importance-of-using-namespace-in-a-CPP-programming-code

The problem happens in header section, when we use "method" or "class" which have the same name with those which are included in header files.
==> In this case compiler will fail to compile.
So, This problem could be solved with usage of namespace, we can have "classes", "methods", "functions" with the same names in different namespaces.
==> So "Namespaces" allows us to avoid name clashes when linking code.

2- Class:
https://www.geeksforgeeks.org/c-classes-and-objects/?ref=lbp

Class: is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class (object).
- "Data members" are the data variables, and
   "member functions" are the functions used to manipulate these variables and together these "data members" and "member functions" defines the properties of the objects in a Class.

Object: is an instance of a Class.
When the class is defined, no memory is allocated but when it is instantiated (an object is created) memory is allocated.

	-----------------------------------

-Defining Class:
	
	class ClassName
	{
		Access specifier:
			//can be private, public or protected

		Data members;
			// Variables to be used
		
		Member Functions() {}
			// Methods to access data members
	
	};
		// Class name ends with a semicolon
	
-Declaring Object:

	ClassName  ObjectName;


	----------------------------------

-Member Functions in Classes:

There are 2 ways to define a member function:
	- Inside class definition.
	- Outside class definition.


	-----------------------------------

-Accessing Data Members:
https://www.geeksforgeeks.org/access-modifiers-in-c/


	----------------------------------

-Constructors:

-Destructors:


3- Member functions:


4- Stdio stream:
https://www.geeksforgeeks.org/io-redirection-c/?ref=lbp

- In C++, a stream is an object whose behavior is defined by a class.
==> Streams Objects in C++ are mainly of three types:

	- istream: "Stream object" of this type can only perform input operations from the stream.
	- ostream: these object, can only be used for output operations.
	- iostream: Can be used for both input and output operations.

- All these classes "(istream, ostream and iostream)", as well as "filestream classes", derived from the classes:
		ios and streambuf
==>Thus, "filestream" and "IO stream objects" behave similarly.

-Being an object-oriented programming language gives us the ability to not only define your own streams, but also redirect standard streams.

5- Initialization lists, static, const:

