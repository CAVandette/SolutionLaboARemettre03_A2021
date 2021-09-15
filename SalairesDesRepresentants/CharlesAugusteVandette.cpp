// But : Une grosse société de produits chimiques rémunère ses représentants commerciaux à la commission. Les 
// représentants reçoivent 250 $ par semaine plus 7.5 % de leurs ventes brutes par semaine. Par exemple, un
// représentant qui vend pour 5000 $ de produits chimiques en une semaine, perçoit un salaire de 250 $ plus 7.5 % de
// 5000$, soit un total de 625 $.
// Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
// affiche son salaire. Entrez - 1 à la valeur des ventes pour quitter le programme.
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-14

#include<iostream>

using namespace std;

void main()
{
   setlocale(LC_ALL, "");

   // Déclaration et initialisation des constantes
   const int SALAIRE = 250;
   const float POURCENTAGE = 0.075;

   // Déclaration des variables
   float montant;
   float total;

   montant = 0; // Initialisation du montant à 0 pour entrer directement dans le while
   // Question : Est-ce que c'était une bonne idée d'initier le montant à zéro au lieu de faire le contenue du while une première fois?

   while (montant != -1) // Tant que l'utilisateur ne met pas -1, le programme continue de demander un montant
   {
      cout << "Veuillez entrer vos ventes de cette semaine ou -1 pour quitter : ";
      cin >> montant;

      if (montant > -1) // Permet de de contrôler les mauvaises données
      {
         total = SALAIRE + (montant * POURCENTAGE);
         cout << "Votre salaire cette semaine est : " << total << "$" << endl;
      }
      else if (montant < -1)
      {
         cout << "Vous ne pouvez pas avoir un montant négatif! Votre salaire cette semaine est : " << SALAIRE << "$" << endl;
      }
   }

   cout << "Merci d'avoir utilliser notre programme!" << endl;

   system("pause");
}

/*
         Plan de test
Essai       Donnée       Résultat
1           1000         Votre salaire cette semaine est : 325$
2           5000         Votre salaire cette semaine est : 625$
3           10000        Votre salaire cette semaine est : 1000$
4           1            Votre salaire cette semaine est : 250,075$
5           0            Votre salaire cette semaine est : 250$
6           -2           Vous ne pouvez pas avoir un montant négatif! Votre salaire cette semaine est : 250$
7           -1000        Vous ne pouvez pas avoir un montant négatif! Votre salaire cette semaine est : 250$
8           -1           Merci d'avoir utilliser notre programme!
9           252,98       Votre salaire cette semaine est : 268,97$
10          999.23       Votre salaire cette semaine est : 324,94$
*/