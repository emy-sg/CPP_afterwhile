#include <iostream>

// 1- "Input functions" in String class:

/*int main()
{
	std::string str;

	getline(std::cin, str);  // store a stream of characters

	str.push_back('/');		// add character to the end of the string
	str.push_back('3');

	std::cout << str << std::endl;

	str.pop_back();			// delete the last character from the string
	str.pop_back();

	std::cout << str << std::endl;
}

*/

// 2- "Capacity functions" in String class:

/*int main()
{
	std::string	str = "Hey you";

	std::cout << str << std::endl;

	std::cout << "The length of the string: ";
	std::cout << str.length() << std::endl;		// This fct finds the length of the string

	std::cout << "The capacity of the string :";
	std::cout << str.capacity() << std::endl;	// returns the capacity allocated to the string

	str.resize(13);								// change the size (length of string)

	std::cout << "The capacity after resizing the string to 13:";
	std::cout << str.capacity() << std::endl;
	
	std::cout << "The length of string after resizing it to 13:";
	std::cout << str.length() << std::endl;
	
	str.shrink_to_fit();						// This fct decreases the capacity of the string,
												//  and makes it equal to the minimum capacity of the string.

	std::cout << "The capacity after shrinking the string:";
	std::cout << str.capacity() << std::endl;
	
	std::cout << "The length of string after shrinking:";
	std::cout << str.length() << std::endl;
}

int main()
{
    // Initializing string
	std::string str = "geeksforgeeks is for geeks";

    // Displaying string
	std::cout << "The initial string is : ";
	std::cout << str << std::endl;

    // Displaying capacity of string
	std::cout << "The capacity of string is : ";
	std::cout << str.capacity() << std::endl;

	// Resizing string using resize()
    str.resize(13);

    // Displaying string
	std::cout << "The string after resize operation is : ";
	std::cout << str << std::endl;

    // Displaying capacity of string
	std::cout << "The capacity of string is : ";
	std::cout << str.capacity() << std::endl;

    //Displaying length of the string
	std::cout<<"The length of the string is :"<<str.length()<< std::endl;

    // Decreasing the capacity of string
    // using shrink_to_fit()
    str.shrink_to_fit();

    // Displaying string
	std::cout << "The new capacity after shrinking is : ";
	std::cout << str.capacity() << std::endl;

    return 0;

}

*/

// 3- "Iterator functions" in String class: // iterators is like pointers

/*int main()
{
	std::string str = "geeksforgeeks";

	// Declaring iterator
	std::string::iterator it;
	// Declaring reverse iterator
	std::string::reverse_iterator it_rev;


	// Displaying string
	std::cout << "The string using forward iterators is : ";
	for (it = str.begin(); it != str.end(); it++)
		std::cout << *it;

	std::cout << std::endl;


	// Displaying reverse string
	std::cout << "The reverse string using reverse iterators is :";
	for (it_rev = str.rbegin(); it_rev != str.rend(); it_rev++)
		std::cout << *it_rev;

	std::cout << std::endl;
	
	return (0);
}

*/

// 4- "Manipulating functions" in String class:

/*int main()
{
	std::string str1 = "geeksforgeeks is for geeks";
	std::string str2 = "geeksforgeeks rocks";

	char ch[80];

	str1.copy(ch, 13, 0);
	
	std::cout << "The new copied character array is : ";
	std::cout << ch << std::endl;

	std::cout << "The 1st string: " << str1 << std::endl;
	std::cout << "The 2nd string: " << str2 << std::endl;

	str1.swap(str2);

	std::cout << "After swapping" << std::endl;

	std::cout << "The 1st string: " << str1 << std::endl;
	std::cout << "The 2nd string: " << str2 << std::endl;
}

*/

