							C++ Stream Classe Structure

https://www.geeksforgeeks.org/c-stream-classes-structure/

		------------------------------------------------------------------

	In C++ there are  number of stream Classes for defining various streams related with files 
and for doing input-output operations.
-All these classes are defined in the header file "iostream".

1- IOS class: is top most class in the stream classes hierarchy.
  It is the base for "istream", "ostream", and "streambuf" class.

2- "istream" and "ostream" serves the base classes for "iostream" class.
  The class "istream" is used for input and "ostream" for the output.

3- Class "ios" is indirectly inherited to "iostream" class using "istream" and "ostream".
	==> To avoid the duplicity of data and member functions of "ios" class,
	it is declared as virtual base class when inheriting in "istream" and "ostream" as

-duplicity("the state of being double").

==> The "_withassign classes" are provided with extra functionality for the Assignement
Operations, that's why "_withassign" classes.

				------------------------------------------------

-Facilities provided by these stream classes:

1- "The ios class": The ios class is responsible for providing all input and output 
facilities to all other stream classes.

2- "The istream class": This class is responsible for handling input stream.
 It provides number of function for handling "chars", "strings" and objects such as:
 "get", "getline", "read", "ignore", "putback" etc.

Example:
	#include <iostream>

	int main()
	{
		char x;

		std::cin.get(x);  // used to scan a single char

		std::cout << x;
	}

3- "The ostream class": This class is responsible for handling output stream.
  It provides number of function for handling "chars", "strings" and objects such as:
  "write", "put" etc.

Example:
	#include <iostream>

	int main()
	{
		char x;

		std::cin.get(x);   // used to scan a single char

		std::cout.put(x);   // used to put a single char onto the screen
	}

4- "The iostream class": This class is responsible for handling both input and output stream
  as both "istream class" and "ostream class" is inherited into it.
  It provides function of both "istream class" and "ostream class" for handling "chars", "strings" and "objects"
  such as "get", "getline", "read", "ignore", "putback", "put", "write" etc.

Example:
	#include <iostream>

	int main()
	{
		std::cout.write("geeksforgeeks", 5);   // This fct display ncount character from array
	}	

5- "istream_withassign class": This class is variant of "istream" that allows object assignement.
  The predefined object "cin" is an object of this class and thus may be reassigned at run time to 
  a different "istream object".

 Example:

6- "ostream_with_assign class": This class is variant of "ostream" that allows object assignement.
   The predined objects "cout", "cerr", "clog" are objects of this class and thus may be reassigned at
   run time to a different "ostream object".

 Example:



