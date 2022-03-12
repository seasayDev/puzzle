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






