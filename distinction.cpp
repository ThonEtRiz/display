#include <iostream>
int main()
{
    float average;
    /*
        On indique à l'utilisateur qu'il doit entrer sa moyenne au bac.
    */
    std::cout << "Merci de bien vouloir rentrer votre moyenne au bac : ";
    /*
        On récupère la valeur correspondante à la moyenne au bac de l'utilisateur.
    */
    std::cin >> average;
    std::cin.ignore();
    /*
        Il existe cinq cas de figure :
    • La moyenne au bac de l'utilisateur est inférieure à 10/20.
    L'utilisateur n'obtient pas son bac.

    • La moyenne au bac de l'utilisateur est supérieure ou égale à 10/20 mais inférieure à 12/20.
    L'utilisateur obtient son bac avec mention "assez bien".

    • La moyenne au bac de l'utilisateur est supérieure ou égale à 12/20 mais inférieure à 14/20.

    • La moyenne au bac de l'utilisateur est supérieure ou égale à 14/20 mais inférieure à 16/20.
    L'utilisateur obtient son bac avec mention "bien".

    • La moyenne au bac de l'utilisateur est supérieure à 16/20.
    L'utilisateur obtient son bac avec mention "très bien".
    */
    if ( average < 10 )
    {
        std::cout << "Avec une moyenne de \"" << average << "\" vous n'obtenez pas votre bac.";
    }
    else if ( (average >= 10) && (average < 12) )
    {
        std::cout << "Avec une moyenne de \"" << average << "\" vous obtenez votre bac sans mention.";
    }
    else if ( (average >= 12) && (average < 14) )
    {
        std::cout << "Avec une moyenne de \"" << average << "\" vous obtenez votre bac avec mention \"assez bien\".";
    }
    else if ( (average >= 14) && ( average < 16) )
    {
        std::cout << "Avec une moyenne de \"" << average << "\" vous obtenez votre bac avec mention \"bien\".";
    }
    else if (average >= 16)
    {
        std::cout << "Avec une moyenne de \"" << average << "\" vous obtenez votre bac avec mention \"très bien\".";
    }
    std::cin.ignore();
    return 0;
}
/* Thon'et riz */
