#include <iostream>

/*
> wiekszosci
< mniejszosci 
>= wiekszy b�d� rowny
<= mniejszy b�d� rowny
== r�wne
!= r�zne
*/

//Napisz program, kt�ry pobierze liczb� od uzytkownika i wyswietli czy jest ona dodatnia czy nie
void task1()
{
	int number;
	std::cout << "Podaj liczbe\n";
	std::cin >> number;

	if (number > 0)
	{
		std::cout << "Liczba jest dodatnia\n";
	}
	//std::cout << "gsdfas";
}

int main()
{
	task1();
}