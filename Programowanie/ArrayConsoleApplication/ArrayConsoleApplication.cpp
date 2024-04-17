// ArrayConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//napisz program obliczajcy srednia artmetyczna elementow tablicy liczb całkowitych
void task2()
{
	const unsigned int ARRAY_NUMBERS_SIZE = 5;
	int numbers[ARRAY_NUMBERS_SIZE];

	srand(time(NULL));
	std::cout << "liczby w kolekcij:\n";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		numbers[i] = rand() % 101;
		std::cout << numbers[i] << ",";
	}
	std::cout << "\n\n"
}

int main()
{
	task2();
}

