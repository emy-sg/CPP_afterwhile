#include <iostream>

int main() {
	double res;
	res = 3.14;

 	int raw = res * (1 << 8);
	
	
	std::cout << raw << '\n';

	res = static_cast<float>(raw) / (1 << 8) ;
	std::cout << res << '\n';
}
