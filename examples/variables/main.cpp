#include <cstdlib>
#include <iostream>
#include <string>

int main() {
	// this is a single line comment
	
	/*
	this is a multi line comment
	Operators:
		addition: +
		subtraction: -
		multiplication: *
		division: /
		modulus (remainder): %
	*/

	int myInt = 3;
	float myFloat = 3.3;
	double myDouble = 4.4444444;
	char myChar = 'g';
	bool myBool = true; // false

	std::string myString = "This is a string";

	std::cout << myInt << "lol" << std::endl;

	myInt = 3 + 3;
	int myMod = 5 % 2;

	std::cout << myMod << std::endl;

	return EXIT_SUCCESS;
}
