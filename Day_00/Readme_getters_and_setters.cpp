// https://www.youtube.com/watch?v=O3WZ4X2R-9g&t=40s&ab_channel=McProgramming

// Example1:

	#include <iostream>
	#include <string>

	class Car{
		private:
			std::string make;
			std::string model;
			std::string color;
			int	year;
	
		
		public:
			void		setMake(std::string str);
			std::string	getMake();
			void		startEngine();
			void		paintCar(std::string str);
			std::string	getColor();
	};

	std::string Car::getMake() {
		return make;
	}

	void	Car::setMake(std::string str) {
		make = str;
	}

	void	Car::startEngine() {
		std::cout << "Engine Started" << std::endl;
	}

	void	Car::paintCar(std::string newcolor) {
		color = newcolor;
	}

	std::string Car::getColor() {
		return color;
	}


int main(){
	Car	emyCar;

	emyCar.setMake("Toyata");
	std::cout << emyCar.getMake() << std::endl;
}


//							------------------------------------------------------------------

// Example2:

/*

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
*/
