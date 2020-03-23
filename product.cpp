#include <iostream>
int main()
{
    int integerOne, integerTwo;
    /*
        On indique à l'utilisateur qu'il doit entrer deux nombres entiers relatifs.
    */
    std::cout << "Merci de bien vouloir entrer deux nombres entiers relatifs : ";
    /*
        On récupère la valeur des deux nombres entiers relatifs.
    */
    std::cin >> integerOne >> integerTwo;
    std::cin.ignore();
    /*
        Il existe trois cas de figure :
    • Au moins un des deux nombres entiers est nul.
    Dans ce cas de figure, le nombre résultant du produit du premier nombre par le second est nul.

    • On a deux nombres entiers non nuls. Ces deux nombres possèdent le même signe : ils sont tout deux positifs ou négatifs.
    Dans ce cas de figure, le nombre résultant du produit du premier nombre par le second est positif.

    • On a deux nombres entiers non nuls. Ces deux nombres ne possèdent pas le même signe : l'un est positif et l'autre est négatif.
    Dans ce cas de figure, le nombre résultant du produit du premier nombre par le second est négatif.
    */
    /*
        Selon les critères évoqués ci-dessus, on revoit à l'utilisateur le signe du nombre résultant du produit entre le premier nombre entier et le second.
    */
    if (integerOne == 0 || integerTwo == 0)
    {
        std::cout << "Le nombre résultant du produit de \"" << integerOne << "\" par \"" << integerTwo << "\" est nul.";
    }
    else
    {
       if ( (integerOne > 0 && integerTwo > 0) || (integerOne < 0 && integerTwo < 0) )
    {
        std::cout << "Le signe du nombre résultant du produit de \"" << integerOne << "\" par \"" << integerTwo << "\" est positif.";
    }
    else
    {
        std::cout << "Le signe du nombre résultant du produit de \"" << integerOne << "\" par \"" << integerTwo << "\" est négatif.";
    }
    }
    std::cin.ignore();
    return 0;
}
/* Thon'et riz */
