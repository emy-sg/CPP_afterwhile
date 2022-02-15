/*
	Ressource:
				https://www.ibm.com/docs/en/i/7.4?topic=only-pointers-members-c

	Ressource:
					Pointer-to-private-member-function array
				https://stackoverflow.com/questions/10405705/pointer-to-private-member-function-array
*/


#include <iostream>
typedef int hello;
hello a = 5;
class box {
	private:
		int x;

	public:
		box() : ptr_to_mbr(&box::x) {
		
		}
	typedef int box::*my_ptr_to_memeber;
		my_ptr_to_memeber ptr_to_mbr;				// helio var1;
		int getVar() {
			return x;
		} 
	/*	int i;
		void fct(int var) {
			std::cout << "I am the fct number " << var << std::endl;
			}
		*/
};



/*int main() {
	// declare a pointer to member
	int box::*ptr_to_data = &box::i;

	box obj;

	// initialize data member
	obj.*ptr_to_data = 5;

	// call member function
	std::cout << "The value of i is " << obj.*ptr_to_data << std::endl;
	return (0);
}*/

/*int main() {
	//declare a pointer to member fct
	void	(box::*ptr_to_fct) (int) = &box::fct;

	box obj;

	// call member function
	(obj.*ptr_to_fct) (20);
}*/

int main() {
	box obj;
	
	/*box::my_ptr_to_memeber ptr = obj.ptr_to_mbr;  // helio new = obj.var1
	obj.*(ptr) = 100;*/

	obj.*(obj.ptr_to_mbr) = 100;
	std::cout << obj.getVar() << std::endl;
}
