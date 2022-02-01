				Inheritance in C++
https://www.geeksforgeeks.org/inheritance-in-c/
			-----------------------------------------

A class that is derived from another class is called a "subclass",  "derived class", "extended class", or "child class".
The class from which the "subclass" is derived from is called a "superclass", "base class", or "parent class".
			
			----------------------------------------

 - Inheritance: Is the capability of a class to "derive properties and characteristics from another class".
 "Inheritance": is one of the most important feature of Object Oriented Programming.
 "Sub Class": is the class that inherits properties from another class.
 "Super Class": is the class whose properties are inherited by "Sub Class".

1- Why and When to use inheritance?

 Consider a group of vehicles: Bus, Car and Truck.
 The methods "fuelAmount()", "capacity()", "applyBrakes()" will be same 
 for all of the three classes.
 If we create these three classes avoiding inheritance then we have
 to write all of these functions in each of the three classes.

==> You can clearly see that above process results in "duplication" of same code 3 times, this increases the chances of "error" and "data redundancy".

==> To avoid this type of situation, inheritance is used.
 - Using inheritance, we have to write the functions only one time
 instead of three times, and the three classes inherited from the bass class.

" By creating the class Vehicle and write these three functions in it, and inheriting the three classes from the Vehicule Class, then we did avoid the duplication of data and increase re-usability".

       		---------------------------------------
		  Implementing inheritance in C++

 -For creating a "sub-class" which is inherited from the "base-class" we have
to follow the below syntax.

	Syntax:
		
	 class "subclass_name" : access_mode "base_class_name"
	 {
	 	//body of subclass
	 };

==> A derived class doesn't inherit "access" to "private data members".

	------------------------------------------------------------

https://www.quora.com/How-do-you-inherit-private-members-in-C

"By definition, you always inherit private members, cuz they are part of the derived object".

==> "You just can't access the members directly, becuz they are private to the base class".

==> "If you need to be able to access those private members of the base class from an inherited class, there are a few options:"

	- The baseClass needs to change those members from private to protectedso that they are still not visible outside the class hierarchy, but are visible
down through the hierarchy.

	--------------------------------------------------------------

     Example:

	#include <iostream>

     	class Parent
	{
		public:
			int id_p;
	};

	class Child: public Parent
	{
		public:
			int id_c;
	};

	int main()
	{
		child	obj1;

		obj1.id_c = 7;	
		obj1.id_p = 91;
		

		std::cout << "Child id is " << obj1.id_c << std::endl;
		std::cout << "Parent id is " << obj1.id_p << std::endl;
	}

	-----------------------------------------------------------

			Modes of Inheritance

 1- Public mode: If we derive a "sub class" from a public base class.


