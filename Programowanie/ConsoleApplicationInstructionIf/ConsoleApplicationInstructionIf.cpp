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

//Napisz program który wczyta jedn¹ liczby i wyswieli je w kolejnosci rosn¹cej 
void task7()
{
	int firstNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;

	std::cout << "Liczby w kolejnosci rosn¹cej:\n";
	std::cout << firstNumber;

	std::cout << "\n";

}

//Napisz program który wczyta dwie liczby i wyswieli je w kolejnosci rosn¹cej 
void task8()
{

	int firstNumber, secondNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;
	std::cin >> secondNumber;
	std::cout << "Podaj liczbe\n";

	std::cout << "Liczby w kolejnosci rosn¹cej:\n";
	
	if (firstNumber > secondNumber)
		std::cout << secondNumber << ", " << firstNumber;
	else
		std::cout << firstNumber << ", " << secondNumber;
	
	std::cout << "\n";

}

//Napisz program który wczyta trzy liczby i wyswieli je w kolejnosci rosn¹cej
void task9()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> thirdNumber;

	std::cout << "liczby w kolejnosci rosn¹cej:\n";
	if (thirdNumber < firstNumber
		&& thirdNumber < secondNumber)
	{
		std::cout << thirdNumber << ", ";
		if (secondNumber < firstNumber)
			std::cout << secondNumber << " ," << firstNumber;
		else
			std::cout << firstNumber << " ," << secondNumber;
	}
	else
	{
		if (secondNumber < firstNumber)
		{
			std::cout << secondNumber << " ,";
			if (thirdNumber < firstNumber)
				std::cout << thirdNumber << " , ";
			else
				std::cout << firstNumber << " ," << thirdNumber;
		}
		else
		{
			std::cout << firstNumber << " ," << thirdNumber;
			if (thirdNumber < secondNumber)
				std::cout << thirdNumber << " ," << secondNumber;
			else
				std::cout << secondNumber << ", " << thirdNumber;
		}
	}
	std::cout << "\n";
}




/*
* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe. Wyœwietl odpowiedni komunikat.
* Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona parzysta. Wyœwietl odpowiedni komunikat.
* Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.

* Napisz program, który poprosi u¿ytkownika o podanie masy cia³a (w kilogramach) i wzrostu (w metrach).
Na podstawie tych danych oblicz wskaŸnik BMI (Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.
BMI = masa/wzrost^2
poni¿ej 16 - wyg³odzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowagê
18.5 - 24.99 - wagê prawid³ow¹
25.0 - 29.9 - nadwagê
30.0 - 34.99 - I stopieñ oty³oœci
35.0 - 39.99 - II stopieñ oty³oœci
powy¿ej 40.0 - oty³oœæ skrajn¹

* Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.
* Napisz program, który wczyta numer miesi¹ca i wyœwietli jego s³owny odpowiednik.
* Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny. Wyœwietl odpowiedni komunikat.
* Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹. Wyœwietl wynik.
* Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia. Wyœwietl odpowiedni komunikat.
* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci trzech odcinków i sprawdzi, czy mo¿na zbudowaæ z nich trójk¹t. Wyœwietl odpowiedni komunikat.
* Napisz program, który poprosi u¿ytkownika o podanie oceny w skali 100-punktowej i przeliczy j¹ na ocenê procentow¹ w przedziale od 0 do 100. Wyœwietl wynik.
* Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
* Napisz program, który na podstawie wspó³czynników równania kwadratowego (a, b, c) sprawdzi, czy to równanie ma rozwi¹zania rzeczywiste, i jeœli tak, to je obliczy.
* Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)



*/



//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe.Wyœwietl odpowiedni komunikat.

void task10()
{
	int firstNumber, secondNumber;
	std::cout << "podaj liczbe\n";
	std::cin >> firstNumber;

	std::cout << "podaj liczbe\n";
	std::cin >> secondNumber;
	
	if (secondNumber == firstNumber)
		std::cout << "liczby sa takie same";
	else
		std::cout << "liczby nie sa takie same";
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona parzysta.Wyœwietl odpowiedni komunikat.
void task11()
{
	int number;
	std::cout << "podaj liczbe\n";
	std::cin >> number;

	int rest = number % 2;

	if (rest == 0)
		std::cout << "liczba jest parzysta\n";
	else
		std::cout << "liczba nie jest parzysta\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
void task12()
{
	int number;
	std::cout << "podaj liczbe\n";
	std::cin >> number;

	int rest = number % (3 && 5);

	if (rest == 0)
		std::cout << "liczba jest parzysta\n";
	else
		std::cout << "liczba nie jest parzysta\n";
}


/*Napisz program, który poprosi u¿ytkownika o podanie masy cia³a(w kilogramach) i wzrostu(w metrach).
Na podstawie tych danych oblicz wskaŸnik BMI(Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.
BMI = masa / wzrost ^ 2
poni¿ej 16 - wyg³odzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowagê
18.5 - 24.99 - wagê prawid³ow¹
25.0 - 29.9 - nadwagê
30.0 - 34.99 - I stopieñ oty³oœci
35.0 - 39.99 - II stopieñ oty³oœci
powy¿ej 40.0 - oty³oœæ skrajn¹
*/

void task13()
{
	double weight, height, bmi;
	std::cout << "podaj swój wzrost w metrach\n";
	std::cin >> height;
	std::cout << "podaj swoj¹ wage\n";
	std::cin >> weight;

	bmi = weight / (height * height);
	std::cout << "\n";
	std::cout << "twoje bmi wynosi:" << bmi << "\n";

	if (bmi <= 15.99)
	{
		std::cout << "wyg³odzenie";
	}
	else
	{
		if (bmi >= 16 && bmi <= 16.99)
		{
			std::cout << "wychudzenie";
		}
		else
		{
			if (bmi >= 17 && bmi <= 18.49)
			{
				std::cout << "niedowagê";
			}
			else
			{
				if (bmi >= 18.5 && bmi <= 24.99)
				{
					std::cout << "wagê prawid³ow¹";
				}
				else
				{
					if (bmi >= 25 && bmi <= 29.9)
					{
						std::cout << "nadwagê";
					}
					else
					{
						if (bmi >= 30 && bmi <= 34.9)
						{
							std::cout << "I stopieñ oty³oœci";
						}
						else
						{
							if (bmi >= 35.0 && bmi <= 39.99)
							{
								std::cout << "II stopieñ oty³oœci";
							}
							else
							{
								if (bmi >= 35.0 && bmi <= 40.0)
								{
									std::cout << "oty³oœæ skrajn¹";
								}
							}
						}
					}
				}
			}
		}
	}
}

/*Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.*/
void task14()
{
	int dayOfTheWeek;
	std::cout << "podaj liczbe\n";
	std::cin >> dayOfTheWeek;

	if (dayOfTheWeek == 1)
	{
		std::cout << "poniedzia³ek";
	}
	else
	{
		if (dayOfTheWeek == 2)
		{
			std::cout << "wtorek";
		}
		else
		{
			if (dayOfTheWeek == 3)
			{
				std::cout << "sroda";
			}
			else
			{
				if (dayOfTheWeek == 4)
				{
					std::cout << "czwartek";
				}
				else
				{
					if (dayOfTheWeek == 5)
					{
						std::cout << "pi¹tek";
					}
					else
					{
						if (dayOfTheWeek == 6)
						{
							std::cout << "sobota";
						}
						else
						{
							if (dayOfTheWeek == 7)
							{
								std::cout << "niedziela";
							}
						}
					}
				}
			}
		}
	}
}

/*Napisz program, który wczyta numer miesi¹ca i wyœwietli jego s³owny odpowiednik.*/
void task15()
{
	int mounth;
	std::cout << "podaj liczbe\n";
	std::cin >> mounth;

	if (mounth == 1)
	{
		std::cout << "styczen";
	}
	else
	{
		if (mounth == 2)
		{
			std::cout << "luty";
		}
		else
		{
			if (mounth == 3)
			{
				std::cout << "marzec";
			}
			else
			{
				if (mounth == 4)
				{
					std::cout << "kwiecien";
				}
				else
				{
					if (mounth == 5)
					{
						std::cout << "maj";
					}
					else
					{
						if (mounth == 6)
						{
							std::cout << "czerwiec";
						}
						else
						{
							if (mounth == 7)
							{
								std::cout << "lipiec";
							}
							else
							{
								if (mounth == 8)
								{
									std::cout << "sierpien";
								}
								else
								{
									if (mounth == 9)
									{
										std::cout << "wrzesien";
									}
									else
									{
										if (mounth == 10)
										{
											std::cout << "padziernik";
										}
										else
										{
											if (mounth == 11)
											{
												std::cout << "listopad";
											}
											else
											{
												if (mounth == 12)
												{
													std::cout << "grudzien";
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
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
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
	//task13();
	//task14();
	task15();
}