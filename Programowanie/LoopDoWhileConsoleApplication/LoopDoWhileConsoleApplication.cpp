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

//napisz program który wylosuje liczbe a nastepnie uzytkownik bedzie musiał ją obliczyc
void task2()
{
	int randomNumber;

	srand(time(0));
	randomNumber = rand() % 101;

	//std::cout << "liczba losowa " << randomNumber << "\n";

	int numberFromUser;
	/*
	std::cout << "podaj liczbe:\n";
	std::cin >> numberFromUser;
	if (numberFromUser != randomNumber)
	{
		std::cout << " podaj liczbe:\n";
		std::cin >> numberFromUser;
		if (numberFromUser != randomNumber)
		{
			std::cout << " podaj liczbe:\n";
			std::cin >> numberFromUser;
			if (numberFromUser != randomNumber)
			{
				//...
			}
		}
	}
	*/
	do
	{
		std::cout << "podaj liczbe:\n";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "za duza liczba\n";
		if (numberFromUser < randomNumber)
			std::cout << "za mała liczba\n";
	} while (numberFromUser != randomNumber);

	std::cout << "gratuluje!!!\n zgadłes liczbe\n";
}

int main()
{
	//task1();
	task2();
}