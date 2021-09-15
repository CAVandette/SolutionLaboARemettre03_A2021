// But : �crire un programme qui lit 10 nombres et qui d�termine et affiche la plus grande valeur.
// Le programme doit utiliser trois variables
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-14

#include<iostream>

using namespace std;

void main()
{
   setlocale(LC_ALL, "");

   // D�claration et initialisation des constantes
   const int NB_NOMBRES = 10;

   // D�claration des variables
   float nombre;
   float max;

   cout << "Veuillez entrer le nombre 1 : ";
   cin >> nombre;
   
   max = nombre;

   // On entre le nombre 1 une premi�re fois pour l'int�grer � max sans r�p�ter cette action inutilement.

   for (int compteur = 2; compteur <= NB_NOMBRES; compteur++)
   {
      cout << "Veuillez entrer le nombre " << compteur << " : ";
      cin >> nombre;

      if (nombre > max) // Permet d'�craser la valeur de max lorsque le nombre est plus grand
      {
         max = nombre;
      }
   }

   cout << "Le plus grand nombre est : " << max << endl;

   system("pause");
}

/*
         Plan de test
Essai       Donn�e       R�sultat
1           1
            2
            3
            4
            5
            6
            7
            8
            9
            10           Le plus grand nombre est : 10

2           -1
            55
            0
            -1000
            0,98
            20
            600
            -1992,78
            7
            5            Le plus grand nombre est : 600
            
3           -8
            -9
            -5
            -10
            -1
            -6
            -3
            -4
            -2
            -7           Le plus grand nombre est : -1
*/