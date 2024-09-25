#include <iostream>

//Napisz program kt�ry, wczyta od u�ytkownika liczb� dodatni�
void task1()
{
/*  int number;
	std::cout << "Podaj liczb�\n";
	std::cin >> number;

	if (number < 0)
	{
		std::cout << "Podaj liczb� dodatni�\n";
		std::cin >> number;
		if (number < 0)
		{
			std::cout << "Podaj liczb� dodatni�\n";
			std::cin >> number;
			if (number < 0)
			{
				std::cout << "Podaj liczb� dodatni�\n";
				std::cin >> number;
				if (number < 0)
				{
					//...
					//b��dny algorytm
				}
			}
		}
	}
	std::cout << "Podano liczb� " << number << "\n";
*/

	int number;
	do
	{
		std::cout << "Podaj liczb�\n";
		std::cin >> number;
	} while (number < 0);
	std::cout << "Podano liczb� " << number << "\n";
}

//Napisz program, kt�ry wylosuje liczb�, a nast�pnie u�ytkownik b�dzie musia� j� odgadn��
void task2()
{
	int randomNumber, numberFromUser, userAttempt;

	userAttempt = 0;
	srand(time(0));
	randomNumber = rand() % 101;

	std::cout << "Wylosowano liczb� z zakresu od 0 do 100 odgadnij j�.\n";
	
	do
	{
		std::cout << "Podaj liczb�: \n";
		std::cin >> numberFromUser;
		userAttempt++;

		if (numberFromUser < randomNumber)
			std::cout << "Liczba jest za ma�a\n";
		else if (numberFromUser > randomNumber)
			std::cout << "Liczba jest za du�a\n";
		else
			std::cout << "Zgad�e� " << "po " << userAttempt << " pr�b(ie)ach.\n" << "Wylosowan� liczb� jest: " << randomNumber << "\n";
	} while (numberFromUser != randomNumber);
}

//Napisz program wy�wietlaj�cy liczby ca�kowite z przedia�u <0; x>, x podaje u�ytkownik;
void task3()
{
	/*
	1.Nieprawid�owo
	int upperRange;
	
	std::cout << "Podaj g�rny zakres: ";
	std::cin >> upperRange;

	std::cout << "0, ";
	if (upperRange >= 1)
	{
		std::cout << "1, ";
		if (upperRange >= 2)
		{
			std::cout << "2, ";
			if (upperRange >= 3)
			{
				std::cout << "3, ";
				//......
			}
		}
	}
	*/

	//Prawid�owo
	long long upperRange;

	std::cout << "Podaj g�rny zakres: ";
	std::cin >> upperRange;

	int number = 0;
	do
	{
		std::cout << number << ", ";
		number++;
	}while (upperRange >= number);
}

//Napisz program, kt�ry policzy sum� cyfr podanej przez u�ytkownika liczby.
void task4()
{
	int number, rest, sumOfDigits = 0;

	do
	{
		std::cout << "Podaj liczb� dodatni�: \n";
		std::cin >> number;
	} while (number < 0);
	
	do
	{
		rest = number % 10;
		std::cout << rest << ", ";
		sumOfDigits = sumOfDigits + rest;
		number = number / 10;
	} while (number > 0);

	std::cout << "\nSuma cyfr wynosi: " << sumOfDigits;
}

//Napisz program, kt�ry poprosi u�ytkownika o wprowadzenie dowolnej liczby ca�kowitej.Nast�pnie program powinien obliczy� i wy�wietli� liczb� cyfr.
void task5()
{
	int number, numberOfDigits = 0, rest;

	do
	{
		std::cout << "Podaj liczb� dodatni�: \n";
		std::cin >> number;
	} while (number < 0);
	
	do
	{
		number = number / 10;
		numberOfDigits++;
	} while (number > 0);

	std::cout << "Ilo�� cyfr wynosi: " << numberOfDigits;
}

//Napisz program, kt�ry sprawdza czy wi�cej jest cyfr parzystych, czy nieparzystych we wczytanej liczbie.
void task6()
{
	int number, evenNumbers = 0, oddNumbers = 0, digit;

	do
	{
		std::cout << "Podaj liczb� dodatni�: \n";
		std::cin >> number;
	} while (number < 0);

	do
	{
		digit = number % 10;
		
		if (digit % 2 == 0)
			evenNumbers++;
		else
			oddNumbers++;
		number = number / 10;
	} while (number > 0);

	if (evenNumbers > oddNumbers)
		std::cout << "Wi�cej jest cyfr parzystych. Oto ile ich jest:" << evenNumbers << "\n";
	else if (oddNumbers > evenNumbers)
		std::cout << "Wi�cej jest liczb nieparzystych. Oto ile ich jest:" << oddNumbers << "\n";
	else
		std::cout << "Liczb parzystych i nieparzystych jest tyle samo." << "\n";

}

//Popro� u�ytkownika o podawanie liczb, a� wprowadzi zero. Oblicz sum� oraz �redni� arytmetyczn� wprowadzonych liczb.
void task7()
{
	int number, sum = 0, arithmeticAverage = 0, divider = 0;
	
	do
	{
		std::cout << "Podawaj liczby dodatnie: \n";
		std::cin >> number;
		sum += number;
		divider++;
	} while (number != 0);

	divider--;
	std::cout << "\nSuma liczb wynosi: " << sum;
	arithmeticAverage = sum / divider;
	std::cout << "\n�rednia arytmetyczna wynosi: " << arithmeticAverage;
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task6();
}