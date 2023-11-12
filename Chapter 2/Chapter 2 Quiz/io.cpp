
#include <iostream>
#include "io.h"

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
	std::cout << "The sum of entered values is: " << x << '\n';

}