/**
 *  util.h contient l'ensemble des fonctions utilitaires, des constantes communes 
 * et bibliothèques utilisées dans les differentes instances du logiciel. 
 * 
 * @author Saliou Cisse (cisse.saliou@courrier.uqam.ca)
 * 
 * @version 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef UTIL 
#define UTIL 

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

#define LARGEUR 12
#define HAUTEUR 12
#define TAMPON 20
#define MSG_ERR_ARGUMENTS  "Arguments incorrectes!\n" \
                            "%s  <fichier entree>\n"
#define MSG_ERR_LECTURE    "Impossible de lire le fichier!\n"\
                            "recommencer"

// structure d'un carre
struct carre {
   char lettre;
   bool utilise;
};

/**
 * Une liste de constantes d'erreurs survenus dans le programme.
 * 
 */
typedef enum {
    OK                         = 0,
    ERREUR_ARGUMENTS_INVALIDES = 1,
    ERREUR_LECTURE_FICHIER     = 2
} error;


/**
 * Un tableau de {@code carre} de taille {@code LARGEUR} par {@code HAUTEUR}
 *
 */
typedef struct carre tableau[LARGEUR][HAUTEUR];


/**
 * Permet de retirer les espaces sur une chaine.
 * 
 * @param chaine : la chaine a editer. 
 */
void retirer_espace ( char *chaine);
    




#endif
