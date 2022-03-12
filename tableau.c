#include "util.h"
#include "tableau.h"
#include "grille.h"





void lire_tableau( FILE* fichier, tableau tableau ) {
   char ligne[TAMPON];

   for ( int v = 0; v < HAUTEUR; v++ ) {
      fgets ( ligne, TAMPON, fichier );
      retirer_espace( ligne );

      for ( int h = 0; h < LARGEUR; h++ ) {
         tableau[h][v].lettre = ligne[h];
      }
   }

void trouver_mots( FILE* fichier, tableau tableau ) {
   char mot[TAMPON];

   while ( fgets ( mot, TAMPON, fichier ) != NULL ) {
      retirer_espace( mot );
      chercher_mot_dans_tableau( mot, tableau );
   }
}

void afficher_lettre_restante( tableau tableau ) {
   for ( int v = 0; v < HAUTEUR; v++ ) {
      for ( int h = 0; h < LARGEUR; h++ ) {

         if ( tableau[h][v].utilise == false ) {
            printf( "%c", tableau[h][v].lettre );
         }
      }
   }
   printf("\n");
}





