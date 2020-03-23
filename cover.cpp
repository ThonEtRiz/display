#include <iostream>
int main()
{
    float repairsCost, insuredPortion, insurancePortion;
    std::cout << "Merci de bien vouloir entrer le coût des réparations." << std::endl << "Coût des réparations : ";
    std::cin >> repairsCost;
    std::cin.ignore();
    /*
        Il existe quatre cas de figure :
    • Le coût des réparations est inférieur à 200€.
    • Le coût des réparations est supérieur à 200€ mais 10% de celui-ci ne s'élève pas à plus de 200�.
    • 10% du coût des réparations s'élève à au moins 200€ mais reste inférieur ou égal à 800€.
    • 10% du coût des réparations s'élève au-delà de 800€.
    */
    if (repairsCost < 200.00f )
    {
        insuredPortion = repairsCost;
        insurancePortion = 0.00f;
    }
    else if (repairsCost * 0.10f < 200.00f)
    {
        insuredPortion = 200.00f;
        insurancePortion = repairsCost - 200.00f;
    }
    else if (repairsCost * 0.10f >= 200.00f && repairsCost * 0.10f <= 800.00f)
    {
        insuredPortion = repairsCost * 0.10f;
        insurancePortion = repairsCost - insuredPortion;
    }
    else if (repairsCost * 0.10f > 800.00f)
    {
        insuredPortion = 800.00f;
        insurancePortion = repairsCost - 800.00f;
    }
    std::cout << std::endl << "Coût des réparations : " << repairsCost << std::endl << "Part assurée : " << insuredPortion << std::endl << "Part assurance : " << insurancePortion << std::endl << std::endl << "Votre franchise s'élève à " << insuredPortion << "€.";
    std::cin.ignore();
    return 0;
}
/* Thon'et riz */
