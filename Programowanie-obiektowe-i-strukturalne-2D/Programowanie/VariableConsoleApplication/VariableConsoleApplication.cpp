#include <iostream>

//Napisz program, kt�ry wczyta od u�ytkownika jego wiek a nast�pnie wy�wietli go na konsoli
void task1()
{
	short ageFromUser;

	std::cout << "Podaj swoj wiek: ";
	std::cin >> ageFromUser;

	std::cout << "Masz " << ageFromUser << " lat.\n";
}

//Stw�rz program, kt�ry pobiera od u�ytkownika d�ugo�� w metrach i przelicza j� na centymetry, milimetry i kilometry. Wy�witetl wynik.
void task2()
{
	float  lenghtInMeterFromUser;

	std::cout << "Podaj dlugosc w metrach: ";
	std::cin >> lenghtInMeterFromUser;

	float  lenghtInCentimiterFromUser;
	lenghtInCentimiterFromUser = lenghtInMeterFromUser * 100;

	float  lenghtInMilimiterFromUser;
	lenghtInMilimiterFromUser = lenghtInCentimiterFromUser * 10;

	float  lenghtInKilometerFromUser;
	lenghtInKilometerFromUser = lenghtInMeterFromUser / 1000;

	std::cout << "Metry: " << lenghtInMeterFromUser << "\n";
	std::cout << "Centymetry: " << lenghtInCentimiterFromUser << "\n";
	std::cout << "Milimetry: " << lenghtInMilimiterFromUser << "\n";
	std::cout << "Kilometry: " << lenghtInKilometerFromUser << "\n";

}

//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci boku a i b prostok�ta, a nast�pnie obliczy i wy�wietli pole prostok�ta.
void task3()
{
	float sideLengthA, sideLenghtB, area;

	std::cout << "Program oblicza pole prostok�ta" << "\n";
	std::cout << "Podaj d�ugo�� boku a: " << "\n";
	std::cin >> sideLengthA;
	std::cout << "Podaj d�ugo�� boku b: " << "\n";
	std::cin >> sideLenghtB;
	std::cout << "\n";

	area = sideLengthA * sideLenghtB;

	std::cout << "Pole tego prostok�ta wynosi: " << area << "\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy i wysoko�ci tr�jk�ta, a nast�pnie obliczy pole tego tr�jk�ta, wy�wietlaj�c wynik.
void task4()
{
	float sideLengthA, sideLenghtH, area;

	std::cout << "Program oblicza pole tr�jk�ta" << "\n";
	std::cout << "Podaj d�ugo�� boku a: " << "\n";
	std::cin >> sideLengthA;
	std::cout << "Podaj d�ugo�� boku h: " << "\n";
	std::cin >> sideLenghtH;

	area = sideLengthA * sideLenghtH / 2;

	std::cout << "\n";
	std::cout << "Pole tego tr�jk�ta wynosi: " << area;
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie promienia ko�a i obliczy pole tego ko�a, wy�wietlaj�c wynik.
void task5()
{
	float area, pi_number = 3.14, radius_from_user;

	std::cout << "Program oblicza pole powierzchni ko�a" << "\n";
	std::cout << "Podaj d�ugo�� promienia: " << "\n";
	std::cin >> radius_from_user;

	area = pi_number * radius_from_user;

	std::cout << "Pole tego ko�a wynosi: " << area << "\n";
}


//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy a, podstawy b i wysoko�ci h trapezu, a nast�pnie obliczy pole tego trapezu, wy�wietlaj�c wynik.
void task6()
{
	float sideLengthA, sideLengthB, sideLengthH, area;

	std::cout << "Program oblicza pole powierzchni trapezu";
	std::cout << "Podaj d�ugo�� podstawy a: " << "\n";
	std::cin >> sideLengthA;
	std::cout << "Podaj d�ugo�� podstawy b: " << "\n";
	std::cin >> sideLengthB;
	std::cout << "Podaj d�ugo�� podstawy h: " << "\n";
	std::cin >> sideLengthH;

	area = (sideLengthA + sideLengthB) * sideLengthH / 2;

	std::cout << "Pole tego trapezu wynosi: " << area << "\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci kraw�dzi sze�cianu i obliczy jego obj�to��, wy�wietlaj�c wynik.
void task7()
{
	float sideOfTheCubeFromUser, volume;

	std::cout << "Program oblicza obj�to�� szes�ianu" << "\n";
	std::cout << "Podaj kraw�d� sze�cianu: " << "\n";
	std::cin >> sideOfTheCubeFromUser;

	volume = sideOfTheCubeFromUser * sideOfTheCubeFromUser * sideOfTheCubeFromUser;

	std::cout << "Obj�to�� tego sze�cianu wynosi: " << volume << "\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie temperatury w stopniach Celsiusza, a nast�pnie przeliczy j� na stopnie Fahrenheita i wy�wietli wynik.
void task8()
{
	float degreesCelciusFromUser, degreesFarenheit;

	std::cout << "Program przelicza temperature ze stopni Celcjusza na stopnie Farenheita" << "\n";
	std::cout << "Podaj temperature w stopniah celcjusza: " << "\n";
	std::cin >> degreesCelciusFromUser;

	degreesFarenheit = 1.8 * degreesCelciusFromUser + 32;

	std::cout << "Temperatura w stopniach Farenheit wynosi: " << degreesFarenheit << "\n";
}

//Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.
void task9()
{
	float amountInPln, amountInEuroFromUser;

	std::cout << "Program konwertuje kwot� w euro na z�ot�wki" << "\n";
	std::cout << "Podaj kwote w euro: " << "\n";
	std::cin >> amountInEuroFromUser;

	amountInPln = amountInEuroFromUser * 4.42;

	std::cout << "Kwota w z�ot�wkach wynosi: " << amountInPln << "\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb (a, b) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.
void task10()
{
	float variableA, variableB, arithmeticAverage;

	std::cout << "Program wylicza �redni� arytmetyczn� dw�ch liczb" << "\n";
	std::cout << "Podaj liczb� a: " << "\n";
	std::cin >> variableA;
	std::cout << "Podaj liczb� b: " << "\n";
	std::cin >> variableB;

	arithmeticAverage = (variableA + variableB) / 2;

	std::cout << "�rednia arytmetyczna tych liczb wynosi: " << arithmeticAverage << "\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie trzech liczb (a, b, c) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.
void task11()
{
	float variableA, variableB, variableC, arithmeticAverage;

	std::cout << "Program wylicza �redni� arytmetyczn� dw�ch liczb" << "\n";
	std::cout << "Podaj liczb� a: " << "\n";
	std::cin >> variableA;
	std::cout << "Podaj liczb� b: " << "\n";
	std::cin >> variableB;
	std::cout << "Podaj liczb� c: " << "\n";
	std::cin >> variableC;

	arithmeticAverage = (variableA + variableB + variableC) / 3;

	std::cout << "�rednia arytmetyczna tych liczb wynosi: " << arithmeticAverage << "\n";
}

//Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
void task12()
{
	float variableA, variableB, variableC, weightedArithmeticAverage;

	std::cout << "Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3." << "\n";
	std::cout << "Podaj liczb� a: " << "\n";
	std::cin >> variableA;
	std::cout << "Podaj liczb� b" << "\n";
	std::cin >> variableB;
	std::cout << "Podaj liczb� c: " << "\n";
	std::cin >> variableC;

	weightedArithmeticAverage = (1 * variableA + 2 * variableB + 3 * variableC) / 3;

	std::cout << "�rednia wa�ona tych liczb wynosi: " << weightedArithmeticAverage << "\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych. Nast�pnie wykona operacje (+, -, *, /) i wy�wietli wyniki.
void task13()
{
	float variableA, variableB, result1, result2, result3, result4;

	std::cout << "Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych. Nast�pnie wykona operacje (+, -, *, /) i wy�wietli wyniki." << "\n";
	std::cout << "Podaj liczb� a: " << "\n";
	std::cin >> variableA;
	std::cout << "Podaj liczb� b: " << "\n";
	std::cin >> variableB;

	result1 = variableA + variableB;
	result2 = variableA - variableB;
	result3 = variableA * variableB;
	result4 = variableA / variableB;

	std::cout << "Oto wyniki operacji (+, -, *, /): " << "\n" << result1 << "\n" << result2 << "\n" << result3 << "\n" << result4 << "\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wy�wietlaj�c wynik.
void task14()
{
	float numberOfSecond, numberOfMinutes, numberOfHours;

	std::cout << "Podaj liczb� sekund: " << "\n";
	std::cin >> numberOfSecond;

	numberOfMinutes = numberOfSecond / 60;
	numberOfHours = numberOfMinutes / 60;

	std::cout << "Liczba minut wynosi: " << numberOfMinutes << "\n";
	std::cout << "Liczba godzin wynosi: " << numberOfHours << "\n";
}

// Napisz program, kt�ry poprosi u�ytkownika o podanie wsp�rz�dnych (x1, y1) i (x2, y2) dw�ch punkt�w w uk�adzie kartezja�skim, a nast�pnie obliczy odleg�o�� mi�dzy nimi, wy�wietlaj�c wynik.
void task15()
{
	int variable_x1, variable_y1, variable_x2, variable_y2, result;

	std::cout << "Podaj warto�� x1: " << "\n";
	std::cin >> variable_x1;
	std::cout << "Podaj warto�� y1: " << "\n";
	std::cin >> variable_y1;
	std::cout << "Podaj warto�� x2: " << "\n";
	std::cin >> variable_x2;
	std::cout << "Podaj warto�� y2: " << "\n";
	std::cin >> variable_y2;

	result = (variable_x2 - variable_x1);

	std::cout << "Odleg�o�� mi�dzy nimi wynosi: " << result << "\n";
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
	//task15();
}



/*
Algorytm - sko�czony zbi�r instrukcji realizuj�cy postawione przed nim zadanie. Kolejno�� instrukcj w zbiorze jest okre�lona.
Sposoby zapisu algorytmu:
* W punktach
* Opis s�owny
* J�zyk programowania lub pseudokod
* Schemat blokowy

Zmienna - jest to pewien obszar pami�ci, s��cy do przechowywania danych, te dane mo�na modyfikowa�
Zmienna pozwala przechowywa� tylko jedn� warto�� w danym momencie czasu

Deklaracja zmiennej - moment jej utworzenia
typ_zmiennej nazwa_zmiennej;
Typ zmiennej - m�wi o wielko�ci obszaru w pami�ci i o rodzaju przechowywanych danych

short		liczby ca�kowite ze znakiem		2 bajty -> 16 bit�w		<-32 768; 32 767>
int/long	liczby ca�kowite ze znakiem		4 bajty -> 32 bity		<-2 147 483 648; 2 147 483 647> od - 2 miliard�w do 2 miliard�w
long long	liczby ca�kowite ze znakiem		8 bajt�w -> 64bity		<-9 223 372 036 854 775 808; 9 223 372 036 854 775 807> -9 trylion�w do 9 trylion�w

Je�eli przed powy�szymi typami danych  dodamy s�owo "unsigned" to
zakres jest od 0 do podwojonego zakresu g�rnego plus 1 (short->32 767*2 + 1)

float			liczby rzeczywiste ze znakiem 4 bajty
double			liczby rzeczywiste ze znakiem 8 bajt�w
long double		liczby rzeczywiste ze znakiem 12 bajt�w

Nazwa zmiennej jest to nazwa obszaru pami�ci. Poprzez t� nazw� odwo�ujemy si� do tego obszaru.
Wymagania kompilatora wzgl�dem nazwy:
* u�ycie tylko dozwolonych znak�w - alfabet angielsk a-z oraz A-Z
* cyfry arabskie	0-9
* podkre�lenie (pod�oga)_	(nie trzeba u�ywa� wszystkiego)

- pierwszym znakiem nie mo�e by� cyfra
- nie mo�e by� s�owem kluczowym w danym j�zyku programowania
- musi by� unikalny w danej widoczno��i (dana widoczno�� - zakres widoczno�ci zmiennej)

Wymagania programist�w:
- je�li nazwa sk�ada si� z wielu wyraz�w to zamiast spacji:
	* U�ywamy znaku podkre�lenia first_number_from_user
	* stosujemy camel case, czyli piszemy wszystko razem a s�owa (zaczynamy od drugiego)
	* zaczynamy z du�ej litery np.firstNumberFromUser
- nazwa zmiennej musi oddwa� charakter przechowywanych danych, czyli mie� znaczenie
- nazwy zmiennych po angielsku

Filtr na zdj�cia o ma�ym rozmiarze w np. 1kb lub 1MB. zdj�cia dodaje si� poprzez klikni�cie w projekt a nast�pnie Open folder in explorer dodajemy zdj,
*/