// LoopForConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void task5()
{
	int number;
	std::cout << "podaj liczbe dodatnią\n";
	std::cin >> number;

	// int i = 0;
	// while (i != number)
	// {
	//	std::cout << "hello word\n";
	// 	i++;
	// }
	for (int i = 0; i != number; i++)
	{
		std::cout << "hello word\n";
	}
}

int main()
{
	task5();
}

