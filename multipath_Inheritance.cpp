#include <iostream>

class classA{
	public:
		int a;
};

class classB : public classA{
	public:
		int b;
};

class classC : public classA{
	public:
		int c;
};

class classD : public classB, public classC{
	public:
		int d;
};

int main()
{
	classD obj;

	obj.classC::a = 10;

	std::cout << "a = " << obj.classC::a << std::endl;

	obj.classC.classA::a = 20;

	std::cout << "a = " << obj.classB::a << std::endl;
	
	return (0);
}
