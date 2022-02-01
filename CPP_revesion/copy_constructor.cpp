#include <iostream>
#include <cstring>

using namespace std;

class String{
	private:
		char *s;
		int size;
	
	public:
		// Constructor
		String(const char *str = NULL);
		// Destructor
		~String() { delete [] s; }
		// Copy Constructor
		String(const String &obj);

		// Member Functions
		void print() { cout << s << endl; }
		void change(const char *);
};

// Constructor
String::String(const char *str) {
	size = strlen(str);
	s = new char[size+1];
	strcpy(s, str);
}

// Copy Constructor
String::String(const String &obj) {
	size = obj.size;
	s = new char[size+1];
	strcpy(s, obj.s);
}

void	String::change(const char *str) {
	delete [] s;
	size = strlen(str);
	s = new char[size+1];
	strcpy(s, str);
}

int main() {
	String str1("GeeksQuiz");
	String str2 = str1;

	str1.print();
	str2.print();
}
