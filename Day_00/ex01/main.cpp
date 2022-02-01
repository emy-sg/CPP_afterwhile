#include <iostream>
#include <iomanip>

// No dynamic allocation && can't store more than 8 contacts.
// ==> If a ninth contact is added, replace the oldest contact.
// ADD command, SEARCH command, EXIT command.

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

Contact::Contact(){
}

Contact::~Contact(){
}

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

Phonebook::Phonebook(){
}

Phonebook::~Phonebook(){
}


void Phonebook::add(){
	contacts[Phonebook::get_count()%8].index = Phonebook::get_count()%8;
	std::cout << "The first name: ";
	std::cin >> contacts[Phonebook::get_count()%8].first_name;
	std::cout << "The last name: ";
	std::cin >> contacts[Phonebook::get_count()%8].last_name;
	std::cout << "The nickname: ";
	std::cin >> contacts[Phonebook::get_count()%8].nickname;
	std::cout << "The phone number: ";
	std::cin >> contacts[Phonebook::get_count()%8].phone_number;
	std::cout << "The darkest secret: ";
	std::cin >> contacts[Phonebook::get_count()%8].darkest_secret;
}

void display(std::string name){
	if (name.length() > 10)
	{
		std::string str = name.substr(0, 9);
		std::cout << std::left << std::setw(9) << str << '.' << "|";
	}
	else
		std::cout << std::left << std::setw(10) << name << "|";

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

int Phonebook::count = 0;

int main()
{
	Phonebook phonebook;

	while (1)
	{
		std::string command;

		std::cin >> command;
		if (command.compare("EXIT") == 0)
			return (0);
		else if (command.compare("SEARCH") == 0)
			phonebook.search();
		else if (command.compare("ADD") == 0)
		{
			phonebook.add();
			Phonebook::set_count();
		}
		else
		{
			std::cout << "ERROR ARGUMENT" << std::endl;
			return (1);
		}
	}
	return (0);
}
