// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// 1.4 - VARIABLE ASSIGNMENT AND INITIALIZATION
		[[maybe_unused]] int a; //default initialization, takes random value
		int b = 1; //copy initialization

		//list initalization (preferred)
		int c{};			//zero initialzation, takes default zero or empty value depending on type
		int d = { 5 };		//copy list initialization
		int e{ 6 };			//direct list initialization

		int f = 0.1; //shortcoming of non-list init., compiler will allow this and .5 will be lost. Not possible with list init.

		std::cout << "non-list initialization will cause narrowing conversion: " << f << std::endl << std::endl;
	
	// 1.5 - IOSTREAM
		std::cout << "Always good practice to end outputs with newline, so no unexpected behaviour later" << '\n';
		//std::cout is a buffered output

		//std::endl moves cursor to new line AND flushes buffer (not efficient)
		// \n only moves cursor, this lets buffer flush itself efficiently as designed

		// std::cin >> x >> y; // get two numbers and store in variable x and y respectively
	
	
		std::cout << "Enter a number: "; // ask user for a number
		int x{}; // define variable x to hold user input
		std::cin >> x; // get number from keyboard and store it in variable x
		std::cout << "You entered " << x << '\n';
	
	
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
