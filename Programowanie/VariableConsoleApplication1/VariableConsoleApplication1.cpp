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
	std::cout << "pole prostok�ta wynosi:" <<area<< "\n";
}

/*Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy i wysoko�ci tr�jk�ta, a nast�pnie obliczy pole tego tr�jk�ta, wy�wietlaj�c wynik.*/
void task4()
{
	float baselength;
	std::cout << "podaj d�ugosc podstawy\n";
	std::cin >> baselength;

	float heightlength;
	std::cout << "podaj d�ugosc wysokosci\n";
	std::cin >> heightlength;

	float areaofatriangle;
	areaofatriangle = baselength * heightlength/2;
	std::cout << "pole tr�jk�ta wynosi:" << areaofatriangle << "\n";
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	task4();
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
