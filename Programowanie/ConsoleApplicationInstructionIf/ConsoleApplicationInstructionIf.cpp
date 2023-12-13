#include <iostream>

/*
> wiekszosci
< mniejszosci 
>= wiekszy b¹d¿ rowny
<= mniejszy b¹d¿ rowny
== równe
!= rózne
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
		std::cout << "liczba jest ujemna\n";
	}
}

int main()
{
	task1();
}