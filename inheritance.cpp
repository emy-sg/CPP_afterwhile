#include <iostream>

/*class A{
	public:
		int a;
	private:
		int b;
	protected:
		int c;
};

class B : public A{
	a = 1;
};

class C : private A{
	a = 2;
};

class D : protected A{
	a = 3;
};
*/

class color{
	public:
		std::string color;
		std::string range;
};

class age{
	public:
	int age;
	std::string range;
};

class person : public color, public age{
};

int main()
{
	person emy;
	emy.color = "marron";
	emy.color::range = "moyen";
	emy.age = 24;
	emy.age::range = "young";
	std::cout << "emy : " << emy.color << "  " << emy.color::range << std::endl << emy.age << "   " << emy.age::range << std::endl;
}
