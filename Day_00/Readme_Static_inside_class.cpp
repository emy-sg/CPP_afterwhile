// The Cherno:
// 				https://www.youtube.com/watch?v=V-BFlMrBtqQ&ab_channel=TheCherno

/*
 
   			1- "Static variable"

 	if we use a "static" with a "variable", it means that they will be have just one instance 
	   of that variable across all the instances of the class.

==> This mean, that  if I make new class instances, I'm still only going to have one version of that variable
==> This also means, if one of the instances changes the "static variable", this change it's going to reflect all the instances of a class.
==> So, bcuz of that there's no point of referring to the variable through a class instance,
		bcuz it's like a global instance for that class.

			2- "Static method"
	
	Similar to "Static variable",
	 ==> A "Static methods", can be access it and called without a class instance.
	 ==> And inside the "Static method" you cannot write code wich refers to a class instancee,
	 		since you don't have that class instance to refer to.
*/

// Example    "Static variables:

#include <iostream>
class Entity
{
	public:
		static char x, y;
		void Print(){
			std::cout << x << " " << y << std::endl;
		}
};

// unresolved external symbols, bcuz
// 	we actually have to define those static variables somewhere
// 	and we can do so over here, by just writing 
char Entity::x;
char Entity::y;

/*int main()
{
	Entity e;
	
	e.x = 'x';
	e.y = 'y';

	Entity e1;
	e1.x = 'z';
	e1.y = 'w';
	e.Print();
	e1.Print();
}*/

// ==> we can refer "static variables" like this: "Class::StaticVarName)
// It's like there are two variables inside the Entity scope,
// 	two variables inside a namespace called Entity,
// 	They don't really belong to the Class, but they can be private or public
// 	Bacically they act, like there are just in a namespace and they have
// 	nothing to do with allocation when you create a new class instance
// 	or anything like that.

int main()
{
	Entity e;

	e.x = 'O';		// Entity::x = 'O';
	e.y = 'K';		// Entity::y = 'K';

	Entity e1;
	Entity::x = '2';
	Entity::y = '3';

	e.Print();
	e1.Print();
}

// ==> When you want to have variables across classes 
// you could of course just create:
// 		- global variable
// 		- better static global variable(it's not gonna be global in entire program)
// 	==> But if you have a piece of data that you want to be shared across
// 	all entity instances, it makes sense to actually store it inside
// 	the entity class, bcuz it's to do with entities  

//				---------------------------------------------------------------------------------------------------


// Example:		"Static Members"



