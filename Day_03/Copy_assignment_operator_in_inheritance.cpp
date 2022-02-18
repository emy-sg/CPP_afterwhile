/*
	Ressource:
				https://www.ibm.com/docs/en/zos/2.1.0?topic=only-copy-assignment-operators

*/

#include <iostream>

class A {
	A& operator=(const A&)
};
