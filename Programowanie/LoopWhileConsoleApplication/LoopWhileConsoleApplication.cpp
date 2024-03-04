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
void task2();
{
	int a;
	std::cout << "podaj pierwszą liczbe\n";
	std::cin >> a;


}

int main()
{
	//task1();
	task2();
}

