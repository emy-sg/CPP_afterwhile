#include <iostream>

int main(){
	std::string str = "HI THIS IS BRAIN";

	// A pointer to the string
	std::string *stringPTR;
	*stringPTR = str;

	std::cout << &stringPTR << std::endl;
	std::cout << stringPTR << std::endl;

	*stringPTR = "hello";

	std::cout << &stringPTR << std::endl;
	std::cout << stringPTR << std::endl;
	
	std::cout << "=====> " <<str << std::endl;
	
	// A reference to the string
	std::string & stringREF = str;


	// Output
	std::cout << &str << std::endl;
	std::cout << & stringREF << std::endl;
	std::cout << stringREF << std::endl;

	std::cout << "---------------------------------" << std::endl;	
	
	std::cout << &str << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << stringPTR << std::endl;

	return (0);
}
