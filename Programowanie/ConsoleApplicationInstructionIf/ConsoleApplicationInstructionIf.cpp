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

int main()
{
	//task1();
	task2();
}

