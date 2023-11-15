// VariableConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void task1()
{
	short ageFromUser;
	std::cout << "Podaj swój wiek.\n";
	std::cin >> ageFromUser;

	std::cout << "Masz " << ageFromUser << " lat.\n";
}

void task2()
{
	float lenghtInMeterFromUser, x, y;
	std::cout << "Podaj d³ugosc w metrach\n";
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


/*Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci boku a i b prostok¹ta, a nastêpnie obliczy i wyœwietli pole prostok¹ta.
*/

void task3()
{
	float sideA;
	std::cout << "podaj d³ugosc boku a\n";
	std::cin >> sideA;

	float sideB;
	std::cout << "podaj d³ugosc boku b\n";
	std::cin >> sideB;

	float area;
	area = sideA * sideB;
	std::cout << "pole prostok¹ta wynosi:" << area << "\n";
}

/*Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy i wysokoœci trójk¹ta, a nastêpnie obliczy pole tego trójk¹ta, wyœwietlaj¹c wynik.*/
void task4()
{
	float baseLength;
	std::cout << "podaj d³ugosc podstawy\n";
	std::cin >> baseLength;

	float heightLength;
	std::cout << "podaj d³ugosc wysokosci\n";
	std::cin >> heightLength;

	float areaOfTtriangle;
	areaOfTtriangle = baseLength * heightLength / 2;
	std::cout << "pole trójk¹ta wynosi:" << areaOfTtriangle << "\n";
}

/*Napisz program, który poprosi u¿ytkownika o podanie promienia ko³a i obliczy pole tego ko³a, wyœwietlaj¹c wynik.*/
void task5()
{
	float circleRadius;
	std::cout << "Podaj d³ugosc promienia ko³a\n";
	std::cin >> circleRadius;

	float areaOfaCircle;
	areaOfaCircle = circleRadius * 3.14;
	std::cout << "Pole wynosi:" << areaOfaCircle << "\n";
}

/*Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy a, podstawy b i wysokoœci h trapezu, a nastêpnie obliczy pole tego trapezu, wyœwietlaj¹c wynik.*/
void task6()
{
	float baseLengthA;
	std::cout << "Podaj d³ugosc Podsawy A:\n";
	std::cin >> baseLengthA;

	float baseLengthB;
	std::cout << "Podaj d³ugosc Podstawy B:\n";
	std::cin >> baseLengthB;

	float heightOfTheTrapezoidH;
	std::cout << "Podaj wysokosc tarapezu H:\n";
	std::cin >> heightOfTheTrapezoidH;

	float areaOfaTrapezoid;
	areaOfaTrapezoid = (baseLengthA + baseLengthB) * heightOfTheTrapezoidH / 2;
	std::cout << "Pole trapeza wynosi:\n" << areaOfaTrapezoid << "\n";
}

/*Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci krawêdzi szeœcianu i obliczy jego objêtoœæ, wyœwietlaj¹c wynik.*/
void task7()
{
	float edgeLength;
	std::cout << "Podaj d³ugoœci krawêdzi szeœcianu:\n";
	std::cin >> edgeLength;

	float areaOfCube;
	areaOfCube = edgeLength * edgeLength * edgeLength;
	std::cout << "Objetosc szescianu wynosi : \n" << areaOfCube << "\n";
}
/*Napisz program, który poprosi u¿ytkownika o podanie temperatury w stopniach Celsiusza, a nastêpnie przeliczy j¹ na stopnie Fahrenheita i wyœwietli wynik.*/
void task8()
{
	float tempC;
	std::cout << "Podaj temperature w celcjuszach\n";
	std::cin >> tempC;

	float tempF;
	tempF = 2 * tempC + 32;
	std::cout << "Temperatura w fahrenheit wynosi:\n" << tempF << "\n";
}

/*Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.*/
void task9()
{
	float PLN;
	std::cout << "podaj ilosc w PLN\n";
	std::cin >> PLN;

	float euro;
	euro = PLN / 4.42;
	std::cout << "Kwota w euro wynosi:\n" << euro << "\n";
}

/*Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb (a, b) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.*/
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

/*Napisz program, który poprosi u¿ytkownika o podanie trzech liczb(a, b, c) i obliczy œredni¹ arytmetyczn¹ tych liczb.Nastêpnie wyœwietli wynik.*/
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

/*Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.*/
void task12()
{
	
}

/*Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych. Nastêpnie wykona operacje (+, -, *, /) i wyœwietli wyniki.*/
void task13()
{
	float integerA;
	std::cout << "Podaj pierwsz¹ liczbe\n";
	std::cin >> integerA;

	float integerB;
	std::cout << "Podaj drug¹ liczbe\n";
	std::cin >> integerB;

	float additionResult;
	additionResult = integerA + integerB;
	std::cout << "Wynik dodawania wynosi:\n" << additionResult << "\n";

	float subtractionResult;
	subtractionResult = integerA - integerB;
	std::cout << "Wynik odejmowania wynosi:\n" << subtractionResult << "\n";

	float multiplicationResult;
	multiplicationResult = integerA * integerB;
	std::cout << "Wynik mno¿enia wynosi:\n" << multiplicationResult << "\n";

	float divisionResult;
	divisionResult = integerA / integerB;
	std::cout << "Wynik dzielenia wynosi:\n" << divisionResult << "\n";
}

/* Napisz program, który poprosi u¿ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyœwietlaj¹c wynik.*/
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
Algorytm - skoñczony zbiór instrukcij realizuj¹cy postawione przed nim zadanie.
Sposoby zapsiu:
* w punktach
* opis s³owny
* jêzyk programowania lub pseudokod
* zbiór rysunków
* schemat blokowy

zmienna - jest to pewnien obszar w pamiêci , s³ó¿¹cy do przechowywania danych. te dane mo¿na modyfikowaæ.
zmienna pozwala przechowywaæ tylko jedn¹ wartoœæ w danym momencie czasu.

Deklaracja zmiennej - moment jej utworzenia.

typ zmiennej nazwa_zmiennej;

typ zmiennej -  mówi o wielkoœci obszaru w pamiêci i o rodzaju przechowywania danych

short       liczby ca³kowite    2bajty   <-32 768; 32 767>
int         liczby ca³kowite    4bajty   <-2 147 483 648; 2 147 483 647>
long long   liczby ca³kowite  8bajty   <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

jezeli przed powyzszymi typami dodamy s³owo "unisigned" to zakres
jezeli od zera do podwojonego zakresu g³ownego plus 1

float       liczby rzeczywistej ze znakiem 4 bajty
double      liczby rzeczywistej ze znakiem 8 bajtów
long dauble liczby rzeczwistej ze znakiem  12 bajtów

Nazwa zmiennej - nazwa obszaru w pamiêci. Poprzez ta nazwê odwo³ujemy siê do tego obszaru

Wymagania kompilatora wzglêdem nazwy:
* uzycie tylko dozwolonych znaków
	-   alfabet anglieski a-z oraz A-Z
	-   cyfry arabskie 0-9
	-   podkreslenie (pod³oga) _
* pierwszym znakiem nie moze byc cyfra
* nie mo¿e to byæ s³owo kluczowe danego jêzyka
* musi byc unikalna w danej odpowiedzi


Wymagania programistów:
*jesli nazwa sk³ad sie z wielu wyrazów to zamiast spacji:
	- u¿ywamy znaku podkreslenie np.first_numer_from user
	-stosujemy camel case ,czyli piszemy wszystko razem a s³owo(zaczynamy od drugiego)
	zaczynamy z d³uzej liter np. firstnumerFromuser
*nazwa zmiennej musi oddawaæ charakter przechowywanych danych, czyli mieæ znaczenie
*nazwa po angielsku !!!!

*/

/*
* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci boku a i b prostok¹ta, a nastêpnie obliczy i wyœwietli pole prostok¹ta.

* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy i wysokoœci trójk¹ta, a nastêpnie obliczy pole tego trójk¹ta, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie promienia ko³a i obliczy pole tego ko³a, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy a, podstawy b i wysokoœci h trapezu, a nastêpnie obliczy pole tego trapezu, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci krawêdzi szeœcianu i obliczy jego objêtoœæ, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie temperatury w stopniach Celsiusza, a nastêpnie przeliczy j¹ na stopnie Fahrenheita i wyœwietli wynik.

* Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.

* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb (a, b) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

* Napisz program, który poprosi u¿ytkownika o podanie trzech liczb (a, b, c) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

* Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych. Nastêpnie wykona operacje (+, -, *, /) i wyœwietli wyniki.

* Napisz program, który poprosi u¿ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie wspó³rzêdnych (x1, y1) i (x2, y2) dwóch punktów w uk³adzie kartezjañskim, a nastêpnie obliczy odleg³oœæ miêdzy nimi, wyœwietlaj¹c wynik.


*/
