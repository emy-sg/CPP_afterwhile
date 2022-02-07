#include <iostream>
#include <iomanip>

//https://www.youtube.com/watch?v=4Ii9R_Km2uA&list=PLpkkuHWUW1o0KiL0_NKwrPIZ0DwResGf9&index=33&ab_channel=StartLearningUniversity

//int main()
//{
	/*int x = 54; // base(10) decimal

	std::cout << std::oct << x << std::endl;  // base(8) octal
	std::cout << std::hex << x << std::endl;  // base(16) hexadecimal
	*/

	/*int x = 54;

	std::cout << std::showbase;
	std::cout << std::oct << x << std::endl;   // 066 base(16) hex
	std::cout << std::hex << x << std::endl;   // 0x36 base(8) octal
	std::cout << std::dec << x << std::endl;   // 54 base(10) dec

	*/

	/*int x = 54;

	std::cout << std::showbase;
	std::cout << std::setbase(8) << x << std::endl;
	std::cout << std::setbase(16) << x << std::endl;
	std::cout << std::setbase(10) << x << std::endl;

	*/
	//return (0);
//}

/*
	setw(), setfill(), setprecision()
	left(), right()
	scientific(), fixed()

 */

//int main()
//{
	/*std::cout << std::setw(10) << 92.4 << std::endl;
	std::cout << std::setw(10) << "Hello World" << std::endl;
	
	*/

	//---------------------------------------------------------

	/*std::cout << std::setw(10) << std::setfill('*') << 92.4 << std::endl;
	std::cout << std::setfill('*') << std::setw(10) << 92.4 << std::endl;
	std::cout << std::setw(10) << std::setfill('\'') << "Hello" << std::endl;
	std::cout << std::setw(10) << "Hello" << std::setfill('*') <<std::endl; //nonfunctional
	std::cout << std::setw(10) << std::setfill('*') << "Hello" << std::endl;

	*/

	//---------------------------------------------------------
	
	/*std::cout << std::left << std::setw(10) << std::setfill('*') << 19.94 << std::endl;
	std::cout << std::right << std::setw(10) << std::setfill('\'') << 19.94 << std::endl;  // par default it's right 

	*/
//}


int main()
{
	long double x = 16.3254816584791949;
	long double y = 2.3e+10;

	/*std::cout << x << std::endl;	// default in C++, display 6 digits
	std::cout << std::scientific << x << std::endl; // display 1.632548e+01

	*/

	//--------------------------------------------

	/*std::cout << std::fixed << x << std::endl; // display the all number after dot.
	std::cout << std::fixed << y << std::endl; 

	*/

	//---------------------------------------------
	
	/*std::cout << x << std::endl;   // default in C++, is to display 6 digits
	std::cout << std::setprecision(10) << std::fixed << x << std::endl;

	*/
}

