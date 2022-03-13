/**
 * Université du Québec à Montréal (UQAM)
 * Cours: INF3135 - HIVER 2022
 *
 * motcache.c est un programme en C qui prends en entrée un fichier
 * qui contient une grille de lettres et de mots à trouver puis 
 * affiche à l'écran le mot trouvé à partir de la grille.
 * 
 * @author Saliou Cisse
 * CISS20129907 
 * cisse.saliou@courrier.uqam.ca 
 * @version 2022-03-07
 */
 
 #include "tableau.h"


int main(int argc, char** argv) {
   //Déclaration des variables 
   char *adresse = argv[1];
   FILE *fichier;
   tableau tableau;
   

   //traitement argument invalides
   if (argc != 2 || argc > 2)
   {
      fprintf(stderr, MSG_ERR_ARGUMENTS, argv[0]);
      exit(ERREUR_ARGUMENTS_INVALIDES);
   }

   // traitement de la lecture
   else if ((fichier = fopen(adresse, "r")) == NULL)
   {
      fprintf(stderr, MSG_ERR_LECTURE);
      return ERREUR_LECTURE_FICHIER;
   }
   else
   {
      // traitement du programme
      lire_tableau(fichier, tableau);
      trouver_mots(fichier, tableau);
      afficher_lettre_restante(tableau);

      // fermeture du fichier et fin du programme.
      fclose(fichier);
   }
   return OK;
   
   
   }
