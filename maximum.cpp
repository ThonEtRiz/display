#include <iostream>
int main()
{
    int numberOne, numberTwo, numberThree;
    /*
        On indique à l'utilisateur qu'il doit entrer trois nombres entiers relatifs.
    */
    std::cout << "Merci de bien vouloir entrer trois nombres entiers relatifs (compris entre -inf et +inf) : ";
    /*
        On récupère la valeur des trois nombres entiers relatifs.
    */
    std::cin >> numberOne >> numberTwo >> numberThree;
    std::cin.ignore();
    /*
        Il existe trois cas de figure :
    • Le premier des trois nombres entiers relatifs est le plus grand, soit, il est supérieur ou égal au deux autres.

    • Le second des trois nombres entiers relatifs est le plus grand, soit, il est supérieur ou égal au deux autres.

    • Le troisième des trois nombres entiers relatifs est le plus grand, soit, il est supérieur ou égal au deux autres.
    */
    if ( (numberOne >= numberTwo) && (numberOne >= numberThree) )
    {
        std::cout << "\"" << numberOne << "\" est le plus grand entier relatif entre \"" << numberOne << "\", \"" << numberTwo << "\" et \"" << numberThree << "\".";
    }
    else if ( (numberTwo >= numberOne) && (numberTwo >= numberThree) )
    {
        std::cout << "\"" << numberTwo << "\" est le plus grand entier relatif entre \"" << numberOne << "\", \"" << numberTwo << "\" et \"" << numberThree << "\".";
    }
    else
    {
        std::cout << "\"" << numberThree << "\" est le plus grand entier relatif entre \"" << numberOne << "\", \"" << numberTwo << "\" et \"" << numberThree << "\".";
    }
    std::cin.ignore();
    return 0;
}
/* Thon'et riz */
