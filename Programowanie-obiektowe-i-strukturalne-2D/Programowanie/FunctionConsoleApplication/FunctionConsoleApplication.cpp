#include <iostream>

/*
Funkcja - zbi�r instrukcji. Definicja/deklaracja funkcji sk�ada si� z dw�ch cz�ci:
* nag�wek - spos�b u�ycia funkcji
	- typ zwracany
	- nazwa (poprawny identyfikator)
	- parametr�w w nawiasie (nieobowi�zkowe)
* cia�o - zbi�r instrukcji

typZwracany nazwaFuncji(parametry)
{
	//cia�o funkcji
}
*/

void showHello()
{
	std::cout << "Hello World\n";
}

void showHelloMaciek()
{
	std::cout << "Witaj Maciej\n";
}

void showHelloJan()
{
	std::cout << "Witaj Jan\n";
}

void showWelcome(std::string n)
{
	std::cout << "Witaj " << n << "\n";
}

void showWelcome(std::string n, int w)
{
	std::cout << "Witaj " << n << ". Wiek tej osoby to: " << w << " lat." << "\n";
}

void showWelcome(std::string n, int w, std::string a)
{
	showWelcome(n, w);
	std::cout << "Adres to: " << a << "\n";
}

void parameterTest(int& p) //przez referencje, je�li by�oby przez warto�� to warto�� variable po wykonaniu funkcji wynosi�a by dalej 5
{
	std::cout << "Warto�� parametru: " << p << "\n";
	p++;
	std::cout << "Warto�� parametru: " << p << "\n";
}

int sum(int firstNumber, int secondNumber)
{
	int r;
	r = firstNumber + secondNumber;
	return r;
}

unsigned long long strong(int n)
{
	unsigned long long s = 1;
	for (int i = 1; i <= n; i++)
	{
		s = s * i;
	}
	return s;
}

//algorytm rekurencyjny
unsigned long long strongv2(int n)
{
	unsigned long long s = 1;
	if (n <= 1)
		s = 1;
	else
		s = n * strongv2(n - 1); 
	return s;
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	/*
	showHello();
	//jaki� kod
	showHello();
	showHelloMaciek();
	showHelloJan();
	std::cout << "\n";
	std::string name;
	name = "Mackiek";
	showWelcome(name);
	name = "Jan";
	showWelcome(name);
	showWelcome("Anna");
	int age = 10;
	showWelcome("Damian", age, "ul.Krakowska 1");
	*/

	//kolejno�� parametr�w, kolejno�� deklaracji w funkcji np. void showWelcomeAndAge(std::string n, int w) -> "dasd", 4
	//przeci��enie funkcji - ta sama nazwa funkcji r�nica w parametrach
	//dodanie przestrzeni

	/*
		namespace nazwaPrzestrzeni
		{
			np.funkcja
		}
		odwo�anie sie do ptzestrzeni nazwaPrzestrzeni::funkcja();
		je�li s� w sobie namespace to wtedy p1::p2::funkcja();
		p1 - przestrze� 1

		przekazanie do parametru przez warto�� lub referencje czyli odwo�anie aby u�y� referencji nale�y u�y� typ& nazwa parametru
		referencja = przekazanie orygina�u 
		warto�� = kopia
		sta�ej nie przeka�e przez referencje
		zwracanie przez parametr wyniku
	*/

	/* Zasady
		DRY - don't repeat yourself - nie powtarzaj si�
		KISS - Keept it simple, stupid - trzymaj prostot� g�upcze
		YAGNI - you aren't gonna need it - nie potrzebujesz tego
		SOLID
		S - single responsibility - pojedy�cza odpowiedzialno��
	*/

	/*
	int variable = 5;
	std::cout << "Warto�� zmiennej przed funkcj�: " << variable << "\n";
	parameterTest(variable);
	std::cout << "Warto�� zmiennej po funkcji: " << variable << "\n";

	int result;
	result = sum(15, 7) + 2;
	std::cout << "Wynik sumowania to : " << result << "\n";
	*/

	/*
	int silnia;
	std::cout << "Podaj z jakiej liczby chcesz uzyska� silnie.\n";
	std::cin >> silnia;
	std::cout << "Silnia z " << silnia << " wynosi: " << strongv2(silnia) << "\n";
	*/
}