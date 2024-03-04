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

/*Napisz program, który poprosi użytkownika o wprowadzenie dowolnej liczby całkowitej.Następnie program powinien obliczyć i wyświetlić liczbę cyfr.*/
void task5()
{
	int number;
	std::cout << "podaj liczbe całkowita:\n";
	std::cin >> number;

	int amount_number = 0;
	int temp = number;

	do
	{
		temp /= 10;
		amount_number++;
	} while (temp != 0);
	std::cout << "liczba cyfr podanej liczbie to:" << amount_number << "\n";
}
/* Napisz program, który sprawdza czy więcej jest cyfr parzystych, czy nieparzystych we wczytanej liczbie.*/
void task6()
{
	int number;
	int even = 0;
	int odd = 0;

	std::cout << "podaj liczbe:\n";
	std::cin >> number;

	while (number != 0)
	{
		int cyfra = number % 10;
		
		if (cyfra % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		number /= 10;
	}
	if (even < odd)
		std::cout << "wiecej jest cyfr parzystych";
	if (even == odd)
		std::cout << "cyfr parzystych jest tyle samo co nieparzystch";
	else
		std::cout << "wiecej jest cyfr nie parzystych";
}

/*Poproś użytkownika o podawanie liczb, aż wprowadzi zero.Oblicz sumę oraz średnią arytmetyczną wprowadzonych liczb.*/
void task7()
{
	int number;
	int sum = 0;
	int amount = 0;

	std::cout << "podaj liczby (wpisz 0,aby zakonczyc)\n";

	do
	{
		std::cin >> number;
		sum += number;
		amount++;
	} while (number != 0);
	
	sum -= 0;
	amount--;
	
	if (amount > 0)
	{
		double srednia = static_cast<double>(sum) / amount;
		std::cout << "suma wprowadzonych liczb:" << sum << "\n";
		std::cout << "srednia arytmetyczna" << srednia << "\n";
	}
	else
	{
		std::cout << "nie wprwadzono zadnych liczb.\n";
	}
}

void task8()
{
	int number;
	do
	{
		std::cout << "podaj liczbe dodatnią \n";
		std::cin >> number;
	} while (number < 0);
	
	int numberOfDigits;
	if (number > 9)
	{
		do
		{
			number = number / 10;
			numberOfDigits++;
		} while (number > 9);
	}
	std::cout << "ilosc w liczbie to " << numberOfDigits << "\n";
}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	task8();
}
