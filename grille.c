#include "grille.h"



bool lire_vers_la_droite( char *mot, tableau tableau, int position_h, int position_v ) {
   if ( position_h + strlen( mot ) > LARGEUR ) {
      return false;
   } else {
      for ( int i = 1 ; i < strlen( mot ); i++) {
         if ( tableau[position_h + i][position_v].lettre != mot[i] ) {
            return false;
         }
      }
   }

   for ( int i = 0; i < strlen( mot ); i++ ) {
      tableau[position_h + i][position_v].utilise = true;
   }
   return true;
}

bool lire_vers_la_gauche( char *mot, tableau tableau, int position_h, int position_v ) {
   if ( position_h - strlen( mot ) < 0 ) {
      return false;
   } else {
      for ( int i = 1 ; i < strlen( mot ); i++ ) {
         if ( tableau[position_h - i][position_v].lettre != mot[i] ) {
            return false;
         }
      }
   }
   for ( int i = 0; i < strlen( mot ); i++ ) {
      tableau[position_h - i][position_v].utilise = true;
   }
   return true;
}



bool lire_vers_le_haut( char *mot, tableau tableau, int position_h, int position_v ) {
   if ( position_v - strlen( mot ) < 0 ) {
      return false;
   } else {
      for ( int i = 1 ; i < strlen( mot ); i++ ) {
         if ( tableau[position_h][position_v - i].lettre != mot[i] ) {
            return false;
         }
      }
   }

   for ( int i = 0; i < strlen( mot ); i++ ) {
      tableau[position_h][position_v - i].utilise = true;
   }
   return true;
}


bool lire_vers_le_bas( char *mot, tableau tableau, int position_h, int position_v ) {
   if ( position_v + strlen( mot ) > HAUTEUR ) {
      return false;
   } else {     
      for ( int i = 1 ; i < strlen( mot ); i++) {
         if ( tableau[position_h][position_v + i].lettre != mot[i] ) {
            return false;
         }
      }
   }

   for ( int i = 0; i < strlen( mot ); i++ ) {
      tableau[position_h][position_v + i].utilise = true;
   }
   return true;
}








