#include "util.h"


void retirer_espace( char *chaine ) {
   int i;
   int j = 0;

   for ( i = 0; i < strlen(chaine); i++ ) {
      if (!isspace( chaine[i] ) ) {
         chaine[j] = chaine[i];
         j++;
      }
   }
   chaine[j] = '\0';
}

