#include <iostream>

int main()
{
//	char x;
//	char *str;

//	std::cin.get(x);
//	std::cout << x;


	char x;

	std::cin.get(x);
	std::cout.put(x)<<std::endl;

	char str[20] = "geeks for geeks";

	std::cout.write(str, 8);
}
