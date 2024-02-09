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

//napisz program wyswoetlający liczby całkowite z przedziału <0,x) (wartosc x podaje uzytkownik)
void task3()
{
	int upperRange;
	std::cout << "podaj górny zakres:\n";
	std::cin >> upperRange;

	
	/*	std::cout << "0, ";
	if (upperRange >= 1)
	{
		std::cout << "1, ";
		if (upperRange >= 2)
		{
			std::cout << "2, ";
			if(upperRange >=3)
			{
					//...
			}
		}
	}
	*/
	int number = 0;
	do
	{
		std::cout << number << ", ";
		number++;
	} while (upperRange >= number);

}

int main()
{
	//task1();
	task3();
}
