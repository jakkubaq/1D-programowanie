﻿#include <iostream>

//Napisz program który pobierze znak od użytkownika i wyświeli go.
void task1()
{
	char characterFromUser;
	std::cout << "Podaj jeden znak:\n";
	std::cin >> characterFromUser;

	std::cout << "Podano: " << characterFromUser << "\n";

	characterFromUser = characterFromUser + 1;

	std::cout << "Podano: " << characterFromUser << "\n";

	characterFromUser = 97;
	characterFromUser = 'a';
	characterFromUser = 'a' + 1; // 'b'
}

// Napisz program, który wczyta znak z klawiatury i sprawdzi czy jest to mała litera alfabetu.
void task2()
{
	char characterFromUser;
	std::cout << "Podaj jeden znak:\n";
	std::cin >> characterFromUser;

	//wersja 1
	if (characterFromUser == 'a'
		|| characterFromUser == 'b'
		|| characterFromUser == 'c'
		|| characterFromUser == 'd'
		//...
		|| characterFromUser == 'z')
	{
		std::cout << "Podałes małą literę alfabetu\n";
	}
	else
	{
		std::cout << "Podałeś inny znak\n";
	}

	//wersja 2
	if (characterFromUser >= 97
		&& characterFromUser <= 122)
	{
		std::cout << "Podałes małą literę alfabetu\n";
	}
	else
	{
		std::cout << "Podałeś inny znak\n";
	}

	//wersja 3
	if (characterFromUser >= 'a'
		&& characterFromUser <= 'z')
	{
		std::cout << "Podałes małą literę alfabetu\n";
	}
	else
	{
		std::cout << "Podałeś inny znak\n";
	}
}

//Napisz program, który poprosi cie o twoje imię i cię przywita.
void task3()
{
	std::string userName;
	std::cout << "Podaj swoje imię\n";
	std::cin >> userName;

	std::cout << "Witaj " << userName << " tutaj.\n";

	userName = "To jest nowy tekst";
}

//Program sprawdzający czy podane hasło jest poprawne 
// (np. jeśli hasło jest "abc123", 
// program powinien wyświetlić "hasło poprawne",
//  jeśli jest inne, powinien wyświetlić "hasło niepoprawne").
void task4()
{
	std::string password;
	std::cout << "Podaj hasło\n";
	std::cin >> password;

	if (password == "abc123")
	{
		std::cout << "Hasło poprawne\n";
	}
	else
		std::cout << "Hasło niepoprawne\n";
}

//Napisz program, który wczyta łańcuch znaków i policzy ile jest małych liter 'a'.
void task5()
{
	std::string textFromUser;
	std::cout << "podaj tekst\n";
	std::cin >> textFromUser;

	std::cout << "podany tekst:" << textFromUser << "\n";
	std::cout << "pierwszy znak w tekscie:" << textFromUser[0] << "\n";
	std::cout << "drugi znak w tekscie:" << textFromUser [1] << "\n";
	int lenght = textFromUser.length();
	std::cout << "długosc lancucha znaków:" << lenght << "\n";
	std::cout << "ostatni znak w tekscie:" << textFromUser[lenght - 1] << "\n";


}

int main()
{
    //task1();
    //task2();
    //task3();
	//task4();
	task5();
}