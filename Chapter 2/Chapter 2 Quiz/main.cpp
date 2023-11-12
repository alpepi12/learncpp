// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int readNumber();
void writeAnswer(int x);

int main()
{
	// Get value from user
	int input { readNumber() };

	//output value to console
	writeAnswer(input);

	return 0;
}

int readNumber()
{
	std::cout << "Enter an integer value: ";
	
	int inputVal{};
	std::cin >> inputVal;

	std::cout << '\n';

	return inputVal;
}

void writeAnswer(int x)
{
	std::cout << "The entered value is: " << x << '\n';


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
