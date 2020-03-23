#include <iostream>
int main()
{
    int integer;
    /*
        On indique à l'utilisateur qu'il doit entrer un nombre entier naturel.
    */
    std::cout << "Merci de bien vouloir entrer un nombre entier naturel : ";
    /*
        On récupère la valeur du nombre entier naturel.
    */
    std::cin >> integer;
    std::cin.ignore();
    int a = (integer / 3) * 3, b = a + 3;
    std::cout << "Le multiple de 3 le plus proche du nombre \"" << integer << "\" est : ";
    if (integer - a < b - integer)
    {
        std::cout << a;
        std::cin.ignore();
    }
    else
    {
        std::cout << b;
    }
    std::cout << ".";
    std::cin.ignore();
    return 0;
}
/* Thon'et riz */
