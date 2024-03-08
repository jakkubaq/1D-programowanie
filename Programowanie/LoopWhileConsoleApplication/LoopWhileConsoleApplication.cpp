// LoopWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void task1()
{
	int number;
	do
	{
		std::cout << "podaj liczbe dodatnią\n";
		std::cin >> number;
	} while (number < 0);

	
		int numberOfDigit = 1;
		/*
	if (number > 0)
	{
		number = number / 10;
		numberOfDigit++;
			if (number > 9)
			{
				number = number / 10;
				numberOfDigit++;
					if (number > 9)
					{
						//...
					}
			}
	}
	*/

	while (number > 9)
	{
		number = number / 10;
		numberOfDigit++;
	}
	std::cout << "ilosc cyfr w liczbie to: " << numberOfDigit << "\n";
}

//napisz program, który policzy NWD dwóch liczb
//nwd(a,b) = a jesli b = 0
//nwd(a,b) = nwd(b , a%b0 jesli b != 0
void task2()
{
	int a;
	std::cout << "podaj pierwszą liczbe\n";
	std::cin >> a;

	int b;
	std::cout << "podaj drugą liczbe\n";
	std::cin >> b;
	/*
	if (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;
		if (b != 0)
		{
			//...
		}
	}
	*/
	while (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;

	}

	std::cout << "NWD = " << a << "\n";
}

//Miasto T. ma obecnie 100 tys. mieszkańców, ale jego populacja rośnie co roku o 3% rocznie. 
//Miasto B. ma 300 tys. mieszkańców i ta liczba rośnie w tempie 2% na rok.
// Wykonaj symulację prezentującą liczbę mieszkańców w obu miastach i zatrzymującą się, 
// gdy liczba mieszkańców miasta T. przekroczy liczbę z miasta B.

void task3()
{
	double cityT = 100;
	double cityB = 300;
	
	double increaseT = 0.03;
	double increaseB = 0.02;

	int year = 2024;
	do
	{
		cityT = cityT + (cityT * 0, 03);
		cityB = cityB + (cityB * 0, 02);

		year++;

		std::cout << "rok" << year << "\n";
		std::cout << "liczba mieszkanców w miescie T w tysiacach" << cityT << "\n";
		std::cout << "liczba mieszkanców w miescie B w tysiacach" << cityB << "\n";
	} while (cityT < cityB);
}

//sprawdz czy liczba jest palindoromem
void task4()
{
	int number;
	std::cout << "podaj liczbe dodatnią\n";
	std::cin >> number;

	int tmpNumber = number;
	int reverseNumber = 0;
	while (tmpNumber > 0)
	{
		int rest = tmpNumber % 10;
		reverseNumber = reverseNumber * 10 + rest;
		tmpNumber = tmpNumber / 10;
	}
	if (number == reverseNumber)
		std::cout << "liczba jest palidromem\n";
	else
		std::cout << "liczba nie jest palidromem\n";
}

void task5()
{
	int number;
	std::cout << "podaj liczbe dodatnią\n";
	std::cin >> number;
	
	int counter = 0;
	while (counter != number)
	{
		std::cout << "hello word\n";
			counter++;
	}
}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	task5();
}

