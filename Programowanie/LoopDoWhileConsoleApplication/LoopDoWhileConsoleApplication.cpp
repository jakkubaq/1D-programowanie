// LoopDoWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void task1()
{
	int number;
	/*
	std::cout << "podaj liczbe dodatnia\n";
	std::cin >> number;

	if (number < 0)
	{
		std::cout << "podaj liczbe dodatnia\n";
		std::cin >> number;
		if (number > 0)
		{
			std::cout << "podaj liczbe dodatnia\n";
			std::cin >> number;
			if (number > 0)
			{
					std::cout << "podaj liczbe dodatnia\n";
					std::cin >> number;
					if (number > 0)
					{
						//....
					}
			}
		}
		*/
	do
	{
		std::cout << "podaj liczbe dodatnia\n";
		std::cin >> number;
	} while (number < 0);
	std::cout << "podana liczbe " << number << "\n";
}

int main()
{
	task1();
}
