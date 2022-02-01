								std::string class in C++
https://www.geeksforgeeks.org/stdstring-class-in-c/?ref=lbp
						------------------------------------------		

	In C++: "string" is a way to represent "sequence of characters as an object of class".
==> "String": is a class called "std::string".
==> "String class" stores the characters as a sequence of bytes,
	with a functionality of allowing "access to single byte character".

						-------------------------------------------

							"std::string"  Vs "character Array"

- A "character Array" is simply an array of characters can terminated by a null character.
A "string" is a "class which defines objects" that be represented as "stream of characters".

		- Size of the "character array" has to "allocted statically", more memory cannot be allocated at "run time" if required,
		    and unused allocated memory is "waste" in case of character array.
		- In case of "strings", memory is "allocated dynamically", more memory can be allocated at run time on demand.
		    As no memory is "preallocated", no memory is wasted.

		- There is "array decay" in case of "character array".
			As "strings" are represented as objects, no array decay occurs(happens).

		- Implementation of "character array" is faster than std::string.
		 "Strings" are slower when compared to implementation than "character array".

		 - "Character array" do not offer much inbuild functions to manipulate strings.
		   "String class" defines a number of functionalities which allow manifold operations on strings.

						------------------------------------------
								Operations on strings
1- Input Functions:
	- "getline()": This function is used to "store a stream of characters" as entered by the user in the object memory.
	- "push_back()": This function is used to "input" a character at the "end of the string".
	- "pop_back()": Introduced for Strings, this function is used to "delete the last character" from the string.

2- Capacity Functions:
	- "length()": This function "finds the length of the string".
	- "resize()": This function "changes the size(length) of string", the size can be "increased" or "decreased".

	- "capacity()": This function returns the capacity allocated to the string, which can be 
			"equal to or more than the size" of the string, cuz additional space is allocated so that when
			 the new characters are added to the string, the "operations can be done efficiently".
	- "shrink_to_fit()": This function "decreases the capacity" of the string and makes it equal to the minimum capacity of the string.
		This operation is "useful to save additional memory" if we are sure that no further addition of characters have to be made.

3- Iterator Functions:
	- "begin()": This function returns an "iterator" bo "beginning" of the string.
	- "end()": This function returns an "iterator" to "end" of the string.
	- "rbegin()": This function returns a "reverse iterator" pointing at the "end" of string.
	- "rend()": This function returns a "reverse iterator" pointing at the "beginning" of string.

4- Manipulations Functions:
	- "copy("char array", len, pos)": This function "copies the substring in target "character array"" mentioned in its arguments.
	  It takes 3 arguments, "target char array", "length to be copied" and "starting position in string to start copying".
	- "swap()": This function swaps one string with other.




