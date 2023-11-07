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
	float lenghtInMeterFromUser;
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

int main()
{
	//task1();
	task2();
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