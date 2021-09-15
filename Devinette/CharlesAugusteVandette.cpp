// But : �crire un programme pour qu�il donne la possibilit� � l�utilisateur de deviner le nombre contenu dans random. 
// L�utilisateur a un maximum de 5 chances. Le programme v�rifie que l�utilisateur a bien entr� un nombre entre 0 et
// 100 et lui indique s�il gagne ou dans le cas contraire lui indique le nombre d�essais restant et lui redemande un nombre
// Auteur : Charles-Auguste Vandette
// Date : 2021-09-14

#include<iostream>
#include<time.h>

using namespace std;

void main()
{
   setlocale(LC_ALL, "");

   // D�claration et initialisation des constantes
   

   // D�claration des variables
   int nombre;
   int random;

   srand(time(0));
   random = rand() % 101;

   // cout << "Le bon nombre : " << random << endl; pour tester le programme et tester la r�ussite

   for (int compteur = 4; compteur >= 0; compteur--) // Se r�p�te tant que l'utilisateur n'a pas �puis� ses esssais
   {
      cout << "Veuillez entrer un nombre entre 0 et 100 : ";
      cin >> nombre;

      while (nombre < 0 || nombre > 100) // s'assure que l'utilisateur entre un nombre entre 0 et 100
      {
         cout << "Erreur, ce nombre n'est pas compris entre 0 et 100, veuillez recommencer : ";
         cin >> nombre; // On met a jour le sujet de la condition du while pour �viter une boucle infinie
      }

      // Question : La mati�re du while n'a pas �t� vue en cours au moment de l'�criture de ce programme, mais le fichier de note
      // sur les boucles �tait disponible et je dois avouer ne pas avoir trouver de fa�on efficace autre que le while pour tester
      // les valeurs. Je me demande donc si je pouvais utiliser cette mati�re et si il y avait d'autre fa�ons de parvenir � la bonne
      // solution. � ce propos, cette boucle bug lorsque l'utilisateur entre une lettre, existe-t-il solution possible??

      if (nombre == random)
      {
         cout << "Vous avez gagn�!" << endl;
         compteur = 0; // Permet de sortir de la boucle en brisant les conditions quand l'utilisateur trouve le bon nombre
      }
      else if (compteur > 0) // Le if ici sert juste � �viter la r�p�tition de la phrase dans le cas ou il ne reste aucun essai;
      {
         cout << "Vous avez �chou�, il vous reste : " << compteur << " essais" << endl;
      }
   }

   if (nombre == random) // Simplement pour bien indiquer la r�ussite ou l'�chec
   {
      cout << "F�licitation!" << endl;
   }
   else
   {
      cout << "Nul nul nul, vous avez perdu!!!" << endl;
      cout << "Le bon nombre �tait : " << random << endl;
   }

   

   system("pause");
}

/*
         Plan de test
Essai       Donn�e       R�sultat
1           random = 25
            21           Vous avez �chou�, il vous reste : 4 essais
            55           Vous avez �chou�, il vous reste : 3 essais
            79           Vous avez �chou�, il vous reste : 2 essais
            89           Vous avez �chou�, il vous reste : 1 essais
            2            Nul nul nul, vous avez perdu!!!
                         Le bon nombre �tait : 25

2           random = 77
            0            Vous avez �chou�, il vous reste : 4 essais
            12           Vous avez �chou�, il vous reste : 3 essais
            -10          Erreur, ce nombre n'est pas compris entre 0 et 100, veuillez recommencer : 
            -1000        Erreur, ce nombre n'est pas compris entre 0 et 100, veuillez recommencer : 
            100000       Erreur, ce nombre n'est pas compris entre 0 et 100, veuillez recommencer : 
            35           Vous avez �chou�, il vous reste : 2 essais
            -6,89        Erreur, ce nombre n'est pas compris entre 0 et 100, veuillez recommencer : 
            99           Vous avez �chou�, il vous reste : 1 essais
            100          Nul nul nul, vous avez perdu!!!
                         Le bon nombre �tait : 25

3           random = 24
            19           Vous avez �chou�, il vous reste : 4 essais
            -20          Erreur, ce nombre n'est pas compris entre 0 et 100, veuillez recommencer : 
            20           Vous avez �chou�, il vous reste : 3 essais
            26           Vous avez �chou�, il vous reste : 2 essais
            24           Vous avez gagn�!
                         F�licitation!

*/