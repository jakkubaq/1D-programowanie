#include <iostream>

/*
Piorytety operatorów:
* /
+ - 
>< >= <= == !=
&&
||
=

operatory porowania:
> wiekszosci
< mniejszosci 
>= wiekszy b¹d¿ rowny
<= mniejszy b¹d¿ rowny
== równe
!= rózne

operatory logiczne:

|| or/lub
&& and/i
!  not/nie

A	B		A||B	A && B	  !A
f	f		 f		  f		   t
f	t		 t        f		   
t	f		 t        f		   f
t	t		 t        t
*/

//Napisz program, który pobierze liczbê od uzytkownika i wyswietli czy jest ona dodatnia czy nie
void task1()
{
	int number;
	std::cout << "Podaj liczbe\n";
	std::cin >> number;

	//wersja 1
	if (number > 0)
	{
		std::cout << "Liczba jest dodatnia\n";
	}

	if (number <= 0)
	{
		std::cout << "liczba jest ujemna\n";
	}

	//wersja 2
	if (number > 0)
	{
		std::cout << "Liczba jest dodatna\n";
	}
	else
	{
		std::cout << "liczba jest ujemna lub rowna zero\n";
	}
}

//napisz program, który wczyta liczbe i sprawdzi czy jest ona z zakresu <1;10)
void task2()
{
	int number;
	std::cout << "Podaj liczbe\n";
	std::cin >> number;
	
	if (number >= 1)
	{
		if (number < 10)
		{
			std::cout << "liczba nalezy do przedzia³u\n";
		}
		else
		{
			std::cout << "liczba nie nalezy do przedzia³u\n";
		}
	}
	else
	{
		std::cout << "liczba nie jest w przedziale\n";
	}

	//wersja2
	if (number >= 1 && number < 10)
	{
		std::cout << " liczba jest w zakresie\n";
	}
	else
	{
		std::cout << " liczba nie jest w zakresie\n";
	}
}

//napisz program, który wczyta jedn¹ liczbe i wyswietli wieksza z nich
void task3()
{
	int firstNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;

	std::cout << "Najwieksza wartosc to " << firstNumber << "\n";
}

//napisz program, który wczyta dwie liczby i wyswietli wieksza z nich
void task4()
{
	int secondNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> secondNumber;
	int firstNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;

	if (secondNumber > firstNumber)
		std::cout << "Najwieksza wartosc to" << secondNumber << "\n";
	else
		std::cout << "Najwieksza wartosc to" << firstNumber << "\n";
}

//napisz program, który wczyta trzy liczby i wyswietli wieksza z nich
void task5()
{
	int secondNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> secondNumber;
	int firstNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;
	int thirdNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> thirdNumber;

	if (thirdNumber > firstNumber && thirdNumber > secondNumber)
		std::cout << "Najwieksza wartosc to" << thirdNumber << "\n";
	else
	{
		if (thirdNumber > firstNumber && thirdNumber > secondNumber)
			std::cout << "Najwieksza wartosc to" << secondNumber << "\n";
		else
			std::cout << "Najwieksza wartosc to" << firstNumber << "\n";
	}
}

void task6()
{
	int firstNumber, secondNumber, thirdNumber, fourthNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> thirdNumber;
	std::cout << "podaj liczbe\n";
	std::cin >> fourthNumber;

	if (fourthNumber > firstNumber
		&& fourthNumber > secondNumber
		&& fourthNumber > thirdNumber)
		std::cout << "Najwieksza wartosc to" << fourthNumber << "\n";
	else
	{
		if (thirdNumber > firstNumber && thirdNumber > secondNumber)
			std::cout << "Najwieksza wartosc to" << thirdNumber << "\n";
		else
		{
			if (thirdNumber > firstNumber && thirdNumber > secondNumber)
				std::cout << "Najwieksza wartosc to" << secondNumber << "\n";
			else
				std::cout << "Najwieksza wartosc to" << firstNumber << "\n";
		}
	}
}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	task6();
}