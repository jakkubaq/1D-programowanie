#include <iostream> 
#include <fstream>  
#include <vector>

bool isPrime(int num)
{
	if (num < 2) 
		return false;

	for (int i = 2; i * i <= num; i++) 
	{
		if (num % i == 0) 
			return false;
	}
	return true;
}

int reverseNumber(int num)
{
	int reversed = 0; 
	while (num > 0) 
	{
		reversed = reversed * 10 + (num % 10); // Dodaje ostatnią cyfrę do odwróconej liczby
		num = num / 10; // Usuwa ostatnie cyfry
	}
	return reversed; 
}

int main()
{
	setlocale(LC_CTYPE, "Polish"); 
	std::ifstream inputFile("przyklad.txt"); 
	std::vector<int> allNumbers; // Wektor na wszystkie liczby
	int currentNumber; // Zmienna tymczasowa do wczytywania liczb

	while (inputFile >> currentNumber) 
	{
		allNumbers.push_back(currentNumber); // Dodawanie liczby do wektora
	}

	// Zadanie 4.1 - wypisz odwrócone liczby podzielne przez 17
	for (int num : allNumbers) 
	{
		int reversed = reverseNumber(num);
		if (reversed % 17 == 0)
		{
			std::cout << reversed << "\n"; 
		}
	}

	// Zadanie 4.2 - znajdź liczbę z największą różnicą między nią a jej odwróceniem
	int maxDiff = 0; // Maksymalna różnica
	int numberWithMaxDiff = 0; // Liczba o największej różnicy

	for (int num : allNumbers) 
	{
		int reversed = reverseNumber(num); 
		int diff = std::abs(num - reversed); // Obliczanie roznicy

		if (diff > maxDiff) //jesli większa od dotychczasowej
		{
			maxDiff = diff; // Zapisuje nową maksymalną różnicę
			numberWithMaxDiff = num; 
		}
	}

	std::cout << numberWithMaxDiff << " " << maxDiff << "\n"; 

	// Zadanie 4.3 - wypisz liczby, które są pierwsze i ich odwrócenie 
	for (int num : allNumbers) 
	{
		int reversed = reverseNumber(num); 
		if (isPrime(num) && isPrime(reversed)) // Obie muszą być pierwsze
		{
			std::cout << num << "\n"; 
		}
	}

	// Zadanie 4.4 - zliczanie unikalnych liczb i tych, które są 2 lub 3 razy
	std::vector<int> uniqueValues; // Unikalne liczby
	std::vector<int> valueCounts;  // Liczba wystąpień

	for (int i = 0; i < allNumbers.size(); i++) 
	{
		bool alreadyExists = false; // Czy liczba już była

		for (int j = 0; j < uniqueValues.size(); j++) // Sprawdzanie unikalnych liczb
		{
			if (uniqueValues[j] == allNumbers[i]) // Jeśli już była
			{
				valueCounts[j]++; // Zwiększamy licznik
				alreadyExists = true; 
				break; // Wychodzi z pętli
			}
		}
		if (!alreadyExists) // Jeśli jest nowa liczba
		{
			uniqueValues.push_back(allNumbers[i]); // Dodaje do unikalnych
			valueCounts.push_back(1); // Ustawia licznik na 1
		}
	}

	int totalUnique = uniqueValues.size(); // Liczba unikalnych liczb
	int countOfTwos = 0, countOfThrees = 0; 

	for (int i = 0; i < valueCounts.size(); i++) 
	{
		if (valueCounts[i] == 2) countOfTwos++; 
		if (valueCounts[i] == 3) countOfThrees++; 
	}

	std::cout << totalUnique << " " << countOfTwos << " " << countOfThrees << "\n"; 
}
