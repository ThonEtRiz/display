#include <iostream>
int main()
{
    int a, b, c, d;
    std::cout << "Merci de bien vouloir entrer trois nombres entiers relatifs : ";
    std::cin >> a >> b >> c;
    std::cin.ignore();
    std::cout << "Voici l'ordre croissant des entiers que vous avez entré : ";
    /*
    (b >= c) ?
    ✔️ "b" prend la valeur de "c" et "c" prend la valeur de "b".
    ❌ On ne fait rien.

    (a >= b) ?
    ✔️ "a" prend la valeur de "c" et "c" prend la valeur de "a".
    ❌ On ne fait rien.

    On a (a <= b <= c).

    On affiche "a" suivit de "b" suivit de "c".
    */
    if (b >= c)
    {
        d = b;
        b = c;
        c = d;
    }
    if (a >= b)
    {
        d = a;
        a = b;
        b = d;
    }
    std::cout << "\"" << a << "\", " << b << "\" et \"" << c << "\".";
    std::cin.ignore();
    return 0;
}
/* Thon'et riz */
