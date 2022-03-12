/**
 * tableau.h contient l'ensemble des régles d'affaires permettant de 
 * traiter le tableau contenu dans le fichier en entrée.
 * 
 * @author Saliou Cisse (cisse.saliou@courrier.uqam.com)
 * @brief 
 * @version 2022-02-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#ifndef TABLEAU 
#define TABLEAU

#include "util.h"

/**
 * Permet de lire la grille du fichier d'entrée et copier 
 * les données dans le tableau.
 * 
 * @param tableau : Le tableau contenant les données.
 * @param fichier : Le fichier contenant la grille.
 */
void lire_tableau( FILE* fichier, tableau tableau );



#endif

