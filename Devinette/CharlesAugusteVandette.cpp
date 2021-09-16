// But : Écrire un programme pour qu’il donne la possibilité à l’utilisateur de deviner le nombre contenu dans random. 
// L’utilisateur a un maximum de 5 chances. Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et
// 100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un nombre
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-14

#include<iostream>
#include<time.h>

using namespace std;

void main()
{
   setlocale(LC_ALL, "");

   // Déclaration et initialisation des constantes
   

   // Déclaration des variables
   int nombre;
   int random;

   srand(time(0));
   random = rand() % 101;

   // cout << "Le bon nombre : " << random << endl; pour tester le programme et tester la réussite

   for (int compteur = 4; compteur >= 0; compteur--) // Se répète tant que l'utilisateur n'a pas épuisé ses esssais
   {
      cout << "Veuillez entrer un nombre entre 0 et 100 : ";
      cin >> nombre;

      while (nombre < 0 || nombre > 100) // s'assure que l'utilisateur entre un nombre entre 0 et 100
      {
         cout << "Erreur, ce nombre n'est pas compris entre 0 et 100, veuillez recommencer : ";
         cin >> nombre; // On met a jour le sujet de la condition du while pour éviter une boucle infinie
      }

      if (nombre == random)
      {
         cout << "Vous avez gagné!" << endl;
         compteur = 0; // Permet de sortir de la boucle en brisant les conditions quand l'utilisateur trouve le bon nombre
      }
      else if (compteur > 0) // Le if ici sert juste à éviter la répétition de la phrase dans le cas ou il ne reste aucun essai;
      {
         cout << "Vous avez échoué, il vous reste : " << compteur << " essais" << endl;
      }
   }

   if (nombre == random) // Simplement pour bien indiquer la réussite ou l'échec
   {
      cout << "Félicitation!" << endl;
   }
   else
   {
      cout << "Nul nul nul, vous avez perdu!!!" << endl;
      cout << "Le bon nombre était : " << random << endl;
   }

   

   system("pause");
}

/*
         Plan de test
Essai       Donnée       Résultat
1           random = 25
            21           Vous avez échoué, il vous reste : 4 essais
            55           Vous avez échoué, il vous reste : 3 essais
            79           Vous avez échoué, il vous reste : 2 essais
            89           Vous avez échoué, il vous reste : 1 essais
            2            Nul nul nul, vous avez perdu!!!
                         Le bon nombre était : 25

2           random = 77
            0            Vous avez échoué, il vous reste : 4 essais
            12           Vous avez échoué, il vous reste : 3 essais
            -10          Erreur, ce nombre n'est pas compris entre 0 et 100, veuillez recommencer : 
            -1000        Erreur, ce nombre n'est pas compris entre 0 et 100, veuillez recommencer : 
            100000       Erreur, ce nombre n'est pas compris entre 0 et 100, veuillez recommencer : 
            35           Vous avez échoué, il vous reste : 2 essais
            -6,89        Erreur, ce nombre n'est pas compris entre 0 et 100, veuillez recommencer : 
            99           Vous avez échoué, il vous reste : 1 essais
            100          Nul nul nul, vous avez perdu!!!
                         Le bon nombre était : 25

3           random = 24
            19           Vous avez échoué, il vous reste : 4 essais
            -20          Erreur, ce nombre n'est pas compris entre 0 et 100, veuillez recommencer : 
            20           Vous avez échoué, il vous reste : 3 essais
            26           Vous avez échoué, il vous reste : 2 essais
            24           Vous avez gagné!
                         Félicitation!

*/