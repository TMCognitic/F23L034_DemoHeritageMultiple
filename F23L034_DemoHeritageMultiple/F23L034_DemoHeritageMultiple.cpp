// F23L034_DemoHeritageMultiple.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

using namespace std;

#include "VehiculeAmphibie.h"

int main()
{
    VehiculeAmphibie va = VehiculeAmphibie();
    va.Navigue();
    va.Roule();

    va.Bateau::_nbrPlace = 17;

    //Attention le véhicule amphibie hérite de deux variable nombre de place
    cout << va.Voiture::_nbrPlace << endl;
    cout << va.Bateau::_nbrPlace << endl;
    //Or une seule d'entre elle ne sera utilisée => Perte de mémoire!!!
}

