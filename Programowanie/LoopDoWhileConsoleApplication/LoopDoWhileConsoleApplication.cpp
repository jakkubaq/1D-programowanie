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

/*
* Napisz program, który poprosi użytkownika o wprowadzenie dowolnej liczby całkowitej. Następnie program powinien obliczyć i wyświetlić liczbę cyfr.
* Napisz program, który sprawdza czy więcej jest cyfr parzystych, czy nieparzystych we wczytanej liczbie.
* Poproś użytkownika o podawanie liczb, aż wprowadzi zero. Oblicz sumę oraz średnią arytmetyczną wprowadzonych liczb.
*/

void task5()
{
	int number;
	std::cout << "Podaj liczbe całkowitą";
	std::cin >> number;
	
	int sumOfDigits;
	int sumOfDigits = number.lenght();

	std::cout << "liczba cyfr w liczbie" << sumOfDigits << "\n";

}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	task5();
}
