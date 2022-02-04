# ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>    // IO Manipulators: https://www.cplusplus.com/reference/iomanip/
						// (header providing parametric manipulators, like : setfill() and setw() and setprecision(), etc)
#include <string>    // std::getline() :  https://www.journaldev.com/39743/getline-in-c-plus-plus

#include "main.h"

class Contact
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

		Contact();
		~Contact();
		int index;
};

class Phonebook{
	public:
		Contact contacts[8];

		Phonebook();
		~Phonebook();
		static int count;
		static int get_count(){
			return count;
		}
		static void set_count(){
			count++;
		}
		void add();
		void search();
};

//int	Phonebook::count = 0;        ==> error linker : duplicate symbol 'Phonebook::count' 

#endif
