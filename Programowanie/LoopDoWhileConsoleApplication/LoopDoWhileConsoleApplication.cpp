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

//napisz program który policzy sumę cyfr podanej przez uzytkownika liczby
void task4()
{
	int number;
	do
	{
		std::cout << "podaj liczbe dodatnią\n";
		std::cin >> number;
	} while (number < 0);
	
	int tmpNumber;

	tmpNumber = 0;
	if (number - tmpNumber % 10 != 0)
	{
		tmpNumber++;
		if (number - tmpNumber % 10 != 0)
		{

			tmpNumber++;
			if (number - tmpNumber % 10 != 0)
			{
				//...
			}
		}
	}
	std::cout << tmpNumber << ",";

	number = number / 10;
	if (number > 0)
	{

	}
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
	//task2();
	//task3();
	task4();
}
	//task1();
	task3();
}
