// https://www.youtube.com/watch?v=O3WZ4X2R-9g&t=40s&ab_channel=McProgramming

#include <iostream>
#include <string>

class	abo
{
public:
	int		getStat( void )
	{
		return (x);
	}
	void	setStat( int n )
	{
		x = n;
	}
	static int func()
	{
		std::cout << "i'm here" << std::endl;
		return (0);
	}

private:
		static int x;
};

int		abo::x = 5;

int		main(void)
{
	//abo 	obj;
	//abo		obj2;

	//obj2.setStat(1337);
	std::cout << abo::func() << std::endl;
	return (0);
}

