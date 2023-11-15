// VariableConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void task1()
{
	short ageFromUser;
	std::cout << "Podaj sw�j wiek.\n";
	std::cin >> ageFromUser;

	std::cout << "Masz " << ageFromUser << " lat.\n";
}

void task2()
{
	float lenghtInMeterFromUser, x, y;
	std::cout << "Podaj d�ugosc w metrach\n";
	std::cin >> lenghtInMeterFromUser;

	float lenghtInCentimeter;
	lenghtInCentimeter = lenghtInMeterFromUser * 100;

	float lenghInMilimeter = lenghtInCentimeter * 10;

	float lenghtInKilometer = lenghtInMeterFromUser / 1000;

	std::cout << "metry" << lenghtInMeterFromUser << "\n";
	std::cout << "centymetry" << lenghtInCentimeter << "\n";
	std::cout << "milimetry" << lenghInMilimeter << "\n";
	std::cout << "kilometry" << lenghtInKilometer << "\n";
}


/*Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci boku a i b prostok�ta, a nast�pnie obliczy i wy�wietli pole prostok�ta.
*/

void task3()
{
	float sideA;
	std::cout << "podaj d�ugosc boku a\n";
	std::cin >> sideA;

	float sideB;
	std::cout << "podaj d�ugosc boku b\n";
	std::cin >> sideB;

	float area;
	area = sideA * sideB;
	std::cout << "pole prostok�ta wynosi:" << area << "\n";
}

/*Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy i wysoko�ci tr�jk�ta, a nast�pnie obliczy pole tego tr�jk�ta, wy�wietlaj�c wynik.*/
void task4()
{
	float baseLength;
	std::cout << "podaj d�ugosc podstawy\n";
	std::cin >> baseLength;

	float heightLength;
	std::cout << "podaj d�ugosc wysokosci\n";
	std::cin >> heightLength;

	float areaOfTtriangle;
	areaOfTtriangle = baseLength * heightLength / 2;
	std::cout << "pole tr�jk�ta wynosi:" << areaOfTtriangle << "\n";
}

/*Napisz program, kt�ry poprosi u�ytkownika o podanie promienia ko�a i obliczy pole tego ko�a, wy�wietlaj�c wynik.*/
void task5()
{
	float circleRadius;
	std::cout << "Podaj d�ugosc promienia ko�a\n";
	std::cin >> circleRadius;

	float areaOfaCircle;
	areaOfaCircle = circleRadius * 3.14;
	std::cout << "Pole wynosi:" << areaOfaCircle << "\n";
}

/*Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy a, podstawy b i wysoko�ci h trapezu, a nast�pnie obliczy pole tego trapezu, wy�wietlaj�c wynik.*/
void task6()
{
	float baseLengthA;
	std::cout << "Podaj d�ugosc Podsawy A:\n";
	std::cin >> baseLengthA;

	float baseLengthB;
	std::cout << "Podaj d�ugosc Podstawy B:\n";
	std::cin >> baseLengthB;

	float heightOfTheTrapezoidH;
	std::cout << "Podaj wysokosc tarapezu H:\n";
	std::cin >> heightOfTheTrapezoidH;

	float areaOfaTrapezoid;
	areaOfaTrapezoid = (baseLengthA + baseLengthB) * heightOfTheTrapezoidH / 2;
	std::cout << "Pole trapeza wynosi:\n" << areaOfaTrapezoid << "\n";
}

/*Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci kraw�dzi sze�cianu i obliczy jego obj�to��, wy�wietlaj�c wynik.*/
void task7()
{
	float edgeLength;
	std::cout << "Podaj d�ugo�ci kraw�dzi sze�cianu:\n";
	std::cin >> edgeLength;

	float areaOfCube;
	areaOfCube = edgeLength * edgeLength * edgeLength;
	std::cout << "Objetosc szescianu wynosi : \n" << areaOfCube << "\n";
}
/*Napisz program, kt�ry poprosi u�ytkownika o podanie temperatury w stopniach Celsiusza, a nast�pnie przeliczy j� na stopnie Fahrenheita i wy�wietli wynik.*/
void task8()
{
	float tempC;
	std::cout << "Podaj temperature w celcjuszach\n";
	std::cin >> tempC;

	float tempF;
	tempF = 2 * tempC + 32;
	std::cout << "Temperatura w fahrenheit wynosi:\n" << tempF << "\n";
}

/*Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.*/
void task9()
{
	float PLN;
	std::cout << "podaj ilosc w PLN\n";
	std::cin >> PLN;

	float euro;
	euro = PLN / 4.42;
	std::cout << "Kwota w euro wynosi:\n" << euro << "\n";
}

/*Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb (a, b) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.*/
void task10()
{
	float numberA;
	std::cout << "Podaj liczbe A\n";
	std::cin >> numberA;

	float numberB;
	std::cout << "Podaj liczbe B\n";
	std::cin >> numberB;

	float arithmeticAverage;
	arithmeticAverage = (numberA + numberB) / 2;
	std::cout << "Sredia artmetyczna wynosi:\n" << arithmeticAverage << "\n";
}

/*Napisz program, kt�ry poprosi u�ytkownika o podanie trzech liczb(a, b, c) i obliczy �redni� arytmetyczn� tych liczb.Nast�pnie wy�wietli wynik.*/
void task11()
{
	float numberA;
	std::cout << "Podaj liczbe A\n";
	std::cin >> numberA;

	float numberB;
	std::cout << "Podaj liczbe B\n";
	std::cin >> numberB;

	float numberC;
	std::cout << "Podaj liczbe C\n";
	std::cin >> numberC;

	float arithmeticAverage;
	arithmeticAverage = (numberA + numberB + numberC) / 3;
	std::cout << "Sredia artmetyczna wynosi:\n" << arithmeticAverage << "\n";
}

/*Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.*/
void task12()
{
	
}

/*Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych. Nast�pnie wykona operacje (+, -, *, /) i wy�wietli wyniki.*/
void task13()
{
	float integerA;
	std::cout << "Podaj pierwsz� liczbe\n";
	std::cin >> integerA;

	float integerB;
	std::cout << "Podaj drug� liczbe\n";
	std::cin >> integerB;

	float additionResult;
	additionResult = integerA + integerB;
	std::cout << "Wynik dodawania wynosi:\n" << additionResult << "\n";

	float subtractionResult;
	subtractionResult = integerA - integerB;
	std::cout << "Wynik odejmowania wynosi:\n" << subtractionResult << "\n";

	float multiplicationResult;
	multiplicationResult = integerA * integerB;
	std::cout << "Wynik mno�enia wynosi:\n" << multiplicationResult << "\n";

	float divisionResult;
	divisionResult = integerA / integerB;
	std::cout << "Wynik dzielenia wynosi:\n" << divisionResult << "\n";
}

/* Napisz program, kt�ry poprosi u�ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wy�wietlaj�c wynik.*/
void task14()
{
	float seconds;
	std::cout << "Podaj Sekundy\n";
	std::cin >> seconds;
	
	float minutes;
	minutes = seconds * 01;
	std::cout << "sekundy w przeliczeniu na minuty wynosi\n" << minutes << "\n";


}

int main()
{
	setlocale(LC_CTYPE, "polish");
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
	task14();
}


/*
Algorytm - sko�czony zbi�r instrukcij realizuj�cy postawione przed nim zadanie.
Sposoby zapsiu:
* w punktach
* opis s�owny
* j�zyk programowania lub pseudokod
* zbi�r rysunk�w
* schemat blokowy

zmienna - jest to pewnien obszar w pami�ci , s��cy do przechowywania danych. te dane mo�na modyfikowa�.
zmienna pozwala przechowywa� tylko jedn� warto�� w danym momencie czasu.

Deklaracja zmiennej - moment jej utworzenia.

typ zmiennej nazwa_zmiennej;

typ zmiennej -  m�wi o wielko�ci obszaru w pami�ci i o rodzaju przechowywania danych

short       liczby ca�kowite    2bajty   <-32 768; 32 767>
int         liczby ca�kowite    4bajty   <-2 147 483 648; 2 147 483 647>
long long   liczby ca�kowite  8bajty   <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

jezeli przed powyzszymi typami dodamy s�owo "unisigned" to zakres
jezeli od zera do podwojonego zakresu g�ownego plus 1

float       liczby rzeczywistej ze znakiem 4 bajty
double      liczby rzeczywistej ze znakiem 8 bajt�w
long dauble liczby rzeczwistej ze znakiem  12 bajt�w

Nazwa zmiennej - nazwa obszaru w pami�ci. Poprzez ta nazw� odwo�ujemy si� do tego obszaru

Wymagania kompilatora wzgl�dem nazwy:
* uzycie tylko dozwolonych znak�w
	-   alfabet anglieski a-z oraz A-Z
	-   cyfry arabskie 0-9
	-   podkreslenie (pod�oga) _
* pierwszym znakiem nie moze byc cyfra
* nie mo�e to by� s�owo kluczowe danego j�zyka
* musi byc unikalna w danej odpowiedzi


Wymagania programist�w:
*jesli nazwa sk�ad sie z wielu wyraz�w to zamiast spacji:
	- u�ywamy znaku podkreslenie np.first_numer_from user
	-stosujemy camel case ,czyli piszemy wszystko razem a s�owo(zaczynamy od drugiego)
	zaczynamy z d�uzej liter np. firstnumerFromuser
*nazwa zmiennej musi oddawa� charakter przechowywanych danych, czyli mie� znaczenie
*nazwa po angielsku !!!!

*/

/*
* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci boku a i b prostok�ta, a nast�pnie obliczy i wy�wietli pole prostok�ta.

* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy i wysoko�ci tr�jk�ta, a nast�pnie obliczy pole tego tr�jk�ta, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie promienia ko�a i obliczy pole tego ko�a, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy a, podstawy b i wysoko�ci h trapezu, a nast�pnie obliczy pole tego trapezu, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci kraw�dzi sze�cianu i obliczy jego obj�to��, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie temperatury w stopniach Celsiusza, a nast�pnie przeliczy j� na stopnie Fahrenheita i wy�wietli wynik.

* Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.

* Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb (a, b) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie trzech liczb (a, b, c) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.

* Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

* Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych. Nast�pnie wykona operacje (+, -, *, /) i wy�wietli wyniki.

* Napisz program, kt�ry poprosi u�ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie wsp�rz�dnych (x1, y1) i (x2, y2) dw�ch punkt�w w uk�adzie kartezja�skim, a nast�pnie obliczy odleg�o�� mi�dzy nimi, wy�wietlaj�c wynik.


*/
