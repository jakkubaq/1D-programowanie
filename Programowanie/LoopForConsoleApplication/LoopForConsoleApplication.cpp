// LoopForConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void task1()
{
	int number;
	std::cout << "podaj liczbe dodatnią\n";
	std::cin >> number;

	// int i = 0;
	// while (i != number)
	// {
	//	std::cout << "hello word\n";
	// 	i++;
	// }
	for (int i = 0; i != number; i++)
	{
		std::cout << "hello word\n";
	}
}

/*
program który drukuje ma ekranie prostokąt z literek X. wysokosc i szerokosc prostokąta wczytuje,y z klawiatury.
ponizszy prostokąt ma wymiary szer = 10 , wys=4
XXXXXXXXXX
XXXXXXXXXX
XXXXXXXXXX
XXXXXXXXXX
*/
void task2()
{
	int width, height;
	std::cout << "podaj wysokosc \n";
	std::cin >> height;
	std::cout << "podaj szerokosc\n";
	std::cin >> width;
	
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << "X";
		}
		std::cout << "\n";
	}
}

/*
* Program obliczający sumę liczb od 1 do 100
* Program sprawdzający czy podana liczba jest liczbą doskonałą (czyli taką, której suma dzielników (z wyłączeniem samej siebie) jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
* Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
* Program obliczający n!.
* Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
* Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
* Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
* Program obliczający sumę kwadratów liczb od 1 do 10
* Program, który wczyta podstawę oraz wykładnik oraz wyliczy wynik.
* Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu (ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)

* Program, kóry wyświetli poniższe wzory:
	****     *       54321        121212        122333
	***     ***      65432        212121        223334444
	**     *****     76543        121212        333444455555
	*     *******    87654        212121        444455555666666

* Oblicz sumę szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Jeżeli się nie pomylisz, to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6 i spierwiastkowaniu powinieneś otrzymać wartość liczby π (suma szeregu jest równa π2/6). Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.

* Napisz program, który rozkłoży liczbę na czynniki pierwsze.

*/

//Program obliczający sumę liczb od 1 do 100
void task3()
{
	int amount = 0;
	for (int i = 1; i <= 100; i++)
	{
		amount += 1;
	}
	std::cout << "suma liczb od 1 do 100 wynosi:" << amount << "\n";
}

//Program sprawdzający czy podana liczba jest liczbą doskonałą (czyli taką, której suma dzielników (z wyłączeniem samej siebie) 
// jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
void task4()
{

}

//Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task5()
{
	for (int i = 1; i <= 10; ++i)
	{
		std::cout << "kwadrat liczby\n" << i << "to:" << i * i;
	}
}

//Program obliczający n!.
void task6()
{
	int n;
	std::cout << "podaj liczbe całkowitą\n";
	std::cin >> n;

	int factorial = 1;
	for (int i = 1; i < n; i++)
	{
		std::cout << "silnia \n" << n << "!=" << factorial;
	}
}

//Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
void task7()
{

}

//Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
void task8()
{
	for (int i = 1; i <= 9; i++){
		for(int j= 1; j <= 9; j++)
		{ 
			std::cout << i << "*" << j << "=" << (i * j) << "\t";
		}
	}
}

//Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task9()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			std::cout << "liczba podzielna przez 3 z zakresu 1 do 100" << " to:" << i << "\n";
		}
	}
}

//Program, który wczyta podstawę oraz wykładnik oraz wyliczy wynik.
void task10()
{ 
	double podstawa, wynik = 1;
	int wykladnik;

	std::cout << "podaj podstawe:\n";
	std::cin >> podstawa;

	std::cout << "podaj wykladnik:\n";
	std::cin >> wykladnik;

	for (int i = 0; i < wykladnik; i++)
	{
		wynik *= podstawa;
	}
	std::cout << "wynik potegowania :" << wynik << "\n";
}

//Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu (ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task11()
{
	int n = 0;
	int fib[n];
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i < n; ++i)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << fib[i] << " ";
	}
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
	//task8();
	//task9();
	//task10();
	//task11();
}

