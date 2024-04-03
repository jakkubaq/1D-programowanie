#include <iostream>

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

//napisz program,który wczyta znak klawiatury i sprawdzi czy jest to mała literka alfabetu
void task2()
{
    char characterFromUser;
    std::cout << "podaj jeden znak:\n";
    std::cin >> characterFromUser;

    if (characterFromUser == 'a'
        || characterFromUser == 'b'
        || characterFromUser == 'c'
        || characterFromUser == 'd'
            //...
        )
    {
        std::cout << "podałes małą literke\n";
    }
    else
    {
        std::cout << "podałes inny znak\n";
    }

    //wersja 2
    if (characterFromUser >= 97
        && characterFromUser <= 122)
    {
        std::cout << "podałes mała literke \n";
    }
    else
    {
        std::cout << "podałes inny znak\n";
    }
}

//napisz program, który poprosi cie o twoje imie i cie przywita
void task3()
{
    std::string userName;
    std::cout << "podaj twoje imie\n";
    std::cin >> userName;

    std::cout << "witaj" << userName << "tutaj.\n";
}

//program ktory sprawdzi hasło
void task4()
{

}





int main()
{
    //task1();
    //task2();
    task3();
}