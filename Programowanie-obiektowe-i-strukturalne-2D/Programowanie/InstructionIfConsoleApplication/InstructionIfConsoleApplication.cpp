#include <iostream>

/*

Priorytety operator�w:

* /
+ -
> < >= <= == !=
&&
||
=

Operatory por�wnania:
>   wi�kszo�ci
<   mniejszo�ci
>=  wieksze b�d� r�wne
<=  mniesze b�d� r�wne
==  r�wne
!=  r�ne

Operatory logiczne:

||  or/lub
&&  and/i
!   not/nie


 A  B   A || B      A && B      !A
 f  f      f           f         t
 f  t      t           f
 t  f      t           f         f
 t  t      t           t


*/

//Napisz program, kt�ry pobierze liczb� od u�ytkownika i wy�wietli czy jest ona dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "Podaj liczb� \n";
	std::cin >> number;

	//wersja 1
	if (number > 0)
	{
		std::cout << "Liczba jest dodatnia\n";
	}

	if (number <= 0)
	{
		std::cout << "Liczba jest ujemna\n";
	}

	//wersja 2
	if (number > 0)
	{
		std::cout << "Liczba jest dodatnia\n";
	}
	else
	{
		std::cout << "Liczba jest ujemna\n";
	}


}

//Napisz program, kt�ry wczyta liczb�
//i sprawdzi czy jest ona z zakresu <1;10).
void task2()
{
	int number;
	std::cout << "Podaj liczb� \n";
	std::cin >> number;

	//wersja 1
	if (number >= 1)
	{
		if (number < 10)
		{
			std::cout << "Liczba jest w zakresie\n";
		}
		else
		{
			std::cout << "Liczba nie jest w zakresie\n";
		}
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie\n";
	}

	//wersja 2
	if (number >= 1 && number < 10)
	{
		std::cout << "Liczba jest w zakresie\n";
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie\n";
	}
}

void task3()
{
	int firstNumber, secondNumber, thirdNumber, fourthNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> thirdNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> fourthNumber;

	if (fourthNumber > firstNumber && fourthNumber > secondNumber && fourthNumber > thirdNumber)
	{
		std::cout << "Najwi�ksza warto�� to " << fourthNumber << "\n";
	}
	else
	{
		if (thirdNumber > firstNumber && thirdNumber > secondNumber)
			std::cout << "Najwi�ksza warto�� to " << thirdNumber << "\n";
		else
		{
			if (secondNumber > firstNumber)
				std::cout << "Najwi�ksza warto�� to " << secondNumber << "\n";
			else
				std::cout << "Najwi�ksza liczba to " << firstNumber << "\n";
		}
	}
}

//Napisz program, kt�ry wczyta jedn� liczb� i wy�wietli j� w kolejno�ci rosn�cej.
void task4()
{
	int firstNumber;
	std::cout << "Podaj liczb�\n";
	std::cin >> firstNumber;

	std::cout << "Liczby w kolejno�ci rosn�cej:\n";
	std::cout << firstNumber;
	std::cout << "\n";
}


//Napisz program, kt�ry wczyta dwie liczby i wy�wietli je w kolejno�ci rosn�cej.
void task5()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczb�\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczb�\n";
	std::cin >> secondNumber;

	std::cout << "Liczby w kolejno�ci rosn�cej:\n";
	if (firstNumber > secondNumber)
		std::cout << secondNumber << "," << firstNumber;
	else
		std::cout << firstNumber << "," << secondNumber;
}

//Napisz program, kt�ry wczyta trzy liczby i wy�wietli je w kolejno�ci rosn�cej.
void task6()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczb�\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczb�\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczb�\n";
	std::cin >> thirdNumber;

	std::cout << "Liczby w kolejno�ci rosn�cej:\n";
	if (thirdNumber < firstNumber
		&& thirdNumber < secondNumber)
	{
		std::cout << thirdNumber << ", ";
		if (secondNumber < firstNumber)
			std::cout << secondNumber << ", " << firstNumber;
		else
			std::cout << firstNumber << ", " << secondNumber;
	}
	else
	{
		if (secondNumber < firstNumber)
		{
			std::cout << secondNumber << ", ";
			if (thirdNumber < firstNumber)
				std::cout << thirdNumber << ", " << firstNumber;
			else
				std::cout << firstNumber << ", " << thirdNumber;
		}
		else
			std::cout << firstNumber << ", ";
		if (thirdNumber < secondNumber)
			std::cout << thirdNumber << ", " << secondNumber;
		else
			std::cout << secondNumber << ", " << thirdNumber;
	}

}

//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i sprawdzi, czy s� one r�wne.Wy�wietl odpowiedni komunikat.
void task7()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj dwie liczby ca�kowite, aby sprawdzi� czy s� r�wne";
	std::cout << "Podaj pierwsz� liczb�:\n";
	std::cin >> firstNumber;
	std::cout << "Podaj drug� liczb�:\n";
	std::cin >> secondNumber;

	if (firstNumber == secondNumber)
		std::cout << "Liczby s� sobie r�wne";
	else
		std::cout << "Liczby s� r�ne";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona parzysta. Wy�wietl odpowiedni komunikat.
void task8()
{
	int numberFromUser;
	std::cout << "Podaj liczb�, aby sprawdzi� czy jest parzysta";
	std::cout << "Podaj liczb�:\n";
	std::cin >> numberFromUser;

	if (numberFromUser % 2 == 0)
		std::cout << "Liczba jest parzysta";
	else
		std::cout << "Liczba nie jest parzysta";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona podzielna zar�wno przez 3, jak i przez 5. Wy�wietl odpowiedni komunikat.
void task9()
{
	int numberFromUser;
	std::cout << "Program sprawdza czy liczba jest podzielna przez 3 i przez 5\n";
	std::cout << "Podaj liczb�:\n";
	std::cin >> numberFromUser;

	if (numberFromUser % 3 == 0 && numberFromUser % 5 == 0)
		std::cout << "Liczba jest podzielna przez 3 i przez 5";
	else
		std::cout << "Liczba nie jest podzielna przez te liczby";
}

/*Napisz program, kt�ry poprosi u�ytkownika o podanie masy cia�a(w kilogramach) i wzrostu(w metrach).
Na podstawie tych danych oblicz wska�nik BMI(Body Mass Index) i wy�wietl odpowiedni komunikat informuj�cy o stanie zdrowia.
BMI = masa / wzrost ^ 2
poni�ej 16 - wyg�odzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowag�
18.5 - 24.99 - wag� prawid�ow�
25.0 - 29.9 - nadwag�
30.0 - 34.99 - I stopie� oty�o�ci
35.0 - 39.99 - II stopie� oty�o�ci
powy�ej 40.0 - oty�o�� skrajn�
*/
void task10()
{
	float heightFromUser, weightFromUser, BMI;
	std::cout << "Program oblicza BMI\n";
	std::cout << "Podaj sw�j wzrost\n";
	std::cin >> heightFromUser;
	std::cout << "Podaj swoj� wag�\n";
	std::cin >> weightFromUser;

	BMI = weightFromUser / (heightFromUser * heightFromUser);

	if (BMI < 16)
		std::cout << "Jeste� wyg�odzony";
	else if (BMI >= 16 && BMI <= 16.99)
		std::cout << "Jeste� wychudzony";
	else if (BMI >= 17 && BMI <= 18.49)
		std::cout << "Masz niedowag�";
	else if (BMI >= 18.5 && BMI <= 24.99)
		std::cout << "Masz prawid�ow� wag�";
	else if (BMI >= 25 && BMI <= 29.9)
		std::cout << "Masz nadwag�";
	else if (BMI >= 30 && BMI <= 34.99)
		std::cout << "Masz I stopie� oty�o�ci";
	else if (BMI >= 35 && BMI <= 39.99)
		std::cout << "Masz II stopie� oty�o�ci";
	else
		std::cout << "Masz skrajn� oty�o��";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia.
void task11()
{
	int numberFromUser;
	std::cout << "Podaj liczb� ca�kowit� od 1 do 7\n";
	std::cin >> numberFromUser;

	if (numberFromUser == 1)
		std::cout << "Poniedzia�ek";
	else if (numberFromUser == 2)
		std::cout << "Wtorek";
	else if (numberFromUser == 3)
		std::cout << "�roda";
	else if (numberFromUser == 4)
		std::cout << "Czwartek";
	else if (numberFromUser == 5)
		std::cout << "Pi�tek";
	else if (numberFromUser == 6)
		std::cout << "Sobota";
	else if (numberFromUser == 7)
		std::cout << "Niedziela";
	else
		std::cout << "Nie ma takiego dnia tygodnia";

	switch (numberFromUser)
	{
	case 1:
		std::cout << "Poniedzia�ek";
		break;
	case 2:
		std::cout << "Wtorek";
		break;
	case 3:
		std::cout << "�roda";
		break;
	case 4:
		std::cout << "Czwartek";
		break;
	case 5:
		std::cout << "Pi�tek";
		break;
	case 6:
		std::cout << "Sobota";
		break;
	case 7:
		std::cout << "Niedziela";

	default:
		std::cout << "Nie ma takiego dnia tygodnia";
		break;
	}
}

//switch je�li jest szereg if�w kt�re maj� tylko "=="
//(ko�cowy else) deafult

//Napisz program, kt�ry wczyta numer miesi�ca i wy�wietli jego s�owny odpowiednik.
void task12()
{
	int numberFromUser;
	std::cout << "Podaj liczb� ca�kowit� od 1 do 12\n";
	std::cin >> numberFromUser;

	if (numberFromUser == 1)
		std::cout << "Stycze�";
	else if (numberFromUser == 2)
		std::cout << "Luty";
	else if (numberFromUser == 3)
		std::cout << "Marzec";
	else if (numberFromUser == 4)
		std::cout << "Kwiecie�";
	else if (numberFromUser == 5)
		std::cout << "Maj";
	else if (numberFromUser == 6)
		std::cout << "Czerwiec";
	else if (numberFromUser == 7)
		std::cout << "Lipiec";
	else if (numberFromUser == 8)
		std::cout << "Sierpie�";
	else if (numberFromUser == 9)
		std::cout << "Wrzesie�";
	else if (numberFromUser == 10)
		std::cout << "Pa�dziernik";
	else if (numberFromUser == 11)
		std::cout << "Listopad";
	else if (numberFromUser == 12)
		std::cout << "Grudzie�";
	else
		std::cout << "Nie ma takiego miesi�ca";

	switch (numberFromUser)
	{
	case 1:
		std::cout << "Stycze�";
		break;

	case 2:
		std::cout << "Luty";
		break;

	case 3:
		std::cout << "Marzec";
		break;

	case 4:
		std::cout << "Kwiecie�";
		break;

	case 5:
		std::cout << "Maj";
		break;

	case 6:
		std::cout << "Czerwiec";
		break;

	case 7:
		std::cout << "Lipiec";
		break;

	case 8:
		std::cout << "Sierpie�";
		break;

	case 9:
		std::cout << "Wrzesie�";
		break;

	case 10:
		std::cout << "Pa�dziernik";
		break;

	case 11:
		std::cout << "Listopad";
		break;

	case 12:
		std::cout << "Grudzie�";
		break;

	default:
		std::cout << "Nie ma takiego miesi�ca";
		break;
	}
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie roku i sprawdzi, czy jest to rok przest�pny. Wy�wietl odpowiedni komunikat.
void task13()
{
	long yearFromUser;
	std::cout << "Podaj rok\n";
	std::cin >> yearFromUser;

	if (yearFromUser % 4 == 0 && yearFromUser % 100 != 0)
		std::cout << "Rok jest przest�pny";
	else
		std::cout << "Rok nie jest przest�pny";
}


//Napisz program, kt�ry poprosi u�ytkownika o podanie wieku i sprawdzi, czy osoba jest pe�noletnia. Wy�wietl odpowiedni komunikat.
void task14()
{
	int ageFromUser;
	std::cout << "Podaj sw�j wiek\n";
	std::cin >> ageFromUser;

	if (ageFromUser >= 18)
		std::cout << "Jeste� pe�noletni";
	else
		std::cout << "Nie jeste� pe�noletni";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie oceny w skali 100-punktowej i przeliczy j� na ocen� procentow� w przedziale od 0 do 100. Wy�wietl wynik.
void task15()
{
	float amountOfPoints, precentageRating;
	std::cout << "Podaj ilo�� punkt�w\n";
	std::cin >> amountOfPoints;

	precentageRating = amountOfPoints / 100 * 100;

	std::cout << "Ocena to: " << precentageRating << "%";
}

//Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
void task16()
{
	int numerFromUser;
	std::cout << "Podaj swoj� ocen�\n";
	std::cin >> numerFromUser;

	if (numerFromUser == 6)
		std::cout << "Celuj�cy";
	else if (numerFromUser == 5)
		std::cout << "Bardzo dobry";
	else if (numerFromUser == 4)
		std::cout << "Dobry";
	else if (numerFromUser == 3)
		std::cout << "Dostateczny";
	else if (numerFromUser == 2)
		std::cout << "Dopuszczaj�cy";
	else
		std::cout << "Niedostateczny";
}


//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t. Wy�wietl odpowiedni komunikat.
void task17()
{
	float firstSide, secondSide, thirdSide;
	std::cout << "Podaj d�ugo�� trzech odcink�w, aby sprawdzi� czy da si� zbudowa� z nich tr�jk�t\n";
	std::cout << "Podaj d�ugo�� pierwszego odcinka\n";
	std::cin >> firstSide;
	std::cout << "Podaj d�ugo�� drugiego\n";
	std::cin >> secondSide;
	std::cout << "Podaj d�ugo�� trzeciego odcinka\n";
	std::cin >> thirdSide;

	if (firstSide < secondSide + thirdSide && secondSide < firstSide + thirdSide && thirdSide < firstSide + secondSide)
		std::cout << "Da si� stworzy� taki tr�jk�t";
	else
		std::cout << "Nie da si� stworzy� takiego tr�jk�ta";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i obliczy jej warto�� bezwzgl�dn�. Wy�wietl wynik.
void task18()
{
	int numberFromUser;
	std::cout << "Podja liczb� ca�kowit�, aby obliczy� warto�� bezwzgl�dn�\n";
	std::cin >> numberFromUser;

	if (numberFromUser < 0)
		std::cout << "Warto�� bezwzgl�dna tej liczby to: " << numberFromUser * (-1);
	else
		std::cout << "Warto�� bezwzgl�dna tej liczby to:" << numberFromUser;
}

//Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
void task19()
{
	int day, month, year;
	std::cout << "Program sprawdzi czy podana data jest poprawna\n";
	std::cout << "Podaj dzie�:\n";
	std::cin >> day;
	std::cout << "Podaj miesi�c:\n";
	std::cin >> month;
	std::cout << "Podaj rok:\n";
	std::cin >> year;

	std::cout << "Oto twoja data:\n";
	std::cout << day << "." << month << "." << year;
	std::cout << "\nTeraz zostanie ona zweryfikowana\n";

	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day >= 1 && day <= 31)
		std::cout << "Poprawna data\n";
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day >= 1 && day <= 30)
		std::cout << "Poprawna data\n";
	else if (month == 2 && day >= 1 && day <= 28 && ((year % 4) != 0 || ((year % 100) == 0 && (year % 400) != 0)))
		std::cout << "Poprawna data\n";
	else if (month == 2 && day >= 1 && day <= 29)
		std::cout << "Poprawna data\n";
	else
		std::cout << "Niepoprawna data\n";
}

//Napisz program, kt�ry na podstawie wsp�czynnik�w r�wnania kwadratowego (a, b, c) sprawdzi, czy to r�wnanie ma rozwi�zania rzeczywiste, i je�li tak, to je obliczy.
void task20()
{
	//idk
}


int main()
{
	setlocale(LC_CTYPE, "polish");
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
	//task15();
	//task16();
	//task17();
	//task18();
	//task19();
	//task20();
	
}