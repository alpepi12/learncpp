#include <iostream>

//Ask the user to enter two integers.
//Provide sum and difference of those numbers
int main()
{
	//Prompt for 1st integer
	std::cout << "Enter an integer: ";

	int firstInt{}; //to store 1st integer
	std::cin >> firstInt;

	//Prompt for 2nd integer
	std::cout << "Enter another integer : ";

	int secondInt{}; //to store second integer
	std::cin >> secondInt;

	//Output sum
	std::cout << firstInt << " + " << secondInt << " is "
		<< (firstInt + secondInt) << '\n';

	//Output difference
	std::cout << firstInt << " - " << secondInt << " is "
		<< (firstInt - secondInt) << '\n';

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
