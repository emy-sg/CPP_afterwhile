#include "main.h"

/*
 			diff btw cin and getline():

  1- cin :					// it's an object of the class "iostream", that accepts input from the standard input device

	  int main()
	{
		std::cout << "Please enter a word: \n";
		std::string str;
		std::cin >> str;
		std::cout << "You entered " << str << std::endl;
	}

  2- getline();  			// C++ provides a standard library, "getline" is a standard library function in the "string" header file

	  int main()
	{
		std::cout << "Please enter a line: \n";
		std::string str;
		std::getline(std::cin, str);
		std::cout << "You entered " << str << std::endl;
	}

*/

// No dynamic allocation && can't store more than 8 contacts.
// ==> If a ninth contact is added, replace the oldest contact.
// ADD command, SEARCH command, EXIT command.

Phonebook::Phonebook(){
}

Phonebook::~Phonebook(){
}

int Phonebook::count = 0;

void Phonebook::add(){
	contacts[Phonebook::get_count()%8].index = Phonebook::get_count()%8;

	std::cout << "The first name: ";
	//std::cin >> contacts[Phonebook::get_count()%8].first_name;    // ==>  cin take just the first word of line
	std::getline(std::cin, contacts[Phonebook::get_count()%8].first_name);

	std::cout << "The last name: ";
	//std::cin >> contacts[Phonebook::get_count()%8].last_name;    // ==> cin take just the first word of line
	std::getline(std::cin, contacts[Phonebook::get_count()%8].last_name);

	std::cout << "The nickname: ";
	//std::cin >> contacts[Phonebook::get_count()%8].nickname;	  // ==> cin take just the first word of line
	std::getline(std::cin, contacts[Phonebook::get_count()%8].nickname);

	std::cout << "The phone number: ";
	//std::cin >> contacts[Phonebook::get_count()%8].phone_number;	 // ==> cin take just the first word of line
	std::getline(std::cin, contacts[Phonebook::get_count()%8].phone_number);

	std::cout << "The darkest secret: ";
	//std::cin >> contacts[Phonebook::get_count()%8].darkest_secret;	 // ==> cin take just the first word of line
	std::getline(std::cin, contacts[Phonebook::get_count()%8].darkest_secret);
}

void Phonebook::search(){
	int i = 0;
	int j = 8;
	Contact contact;

	if (Phonebook::get_count() < 8)
		j = Phonebook::get_count();

	if (j == 0)
		return ;
	std::cout
		<< std::left << std::setw(10) << "Index"
		<< "|" << "First name"
		<< "|" << "Last name "
		<< "|" << "Nickname  "
		<< "|" << std::endl;

	while (i < j)
	{
		contact = contacts[i];
		std::cout << std::left << std::setw(10) << contact.index << "|";
		display(contact.first_name);
		display(contact.last_name);
		display(contact.nickname);
		std::cout << std::endl;
		i++;
	}
}
