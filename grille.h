/**
 * grille.h contient l'ensembe des règles d'affaires 
 * permettant de traiter une grille dans un tableau.
 * 
 * @author Saliou Cisse (cisse.saliou@courrier.uqam.ca)
 * @version 2022-02-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 
 
#ifndef GRILLE
#define GRILLE
#include "util.h"

/**
 * Permet de lire  vers la droite dans un tableau en comparant les 
 * lettres à celle du mot.
 *  
 * 
 * @param mot : Le mot à chercher.
 * @param tableau : Le tableau contenant les données.
 * @param position_h : La position horizontale.
 * @param position_v : La position verticale
 * 
 * @returns  Vrai  si le mot a été trouvé, sinon elle retourne Faux.
 */
bool lire_vers_la_droite( char *mot, tableau tableau, int position_h, int position_v );


/**
 * Permet de lire vers la gauche les lettres du tableau.
 * 
 *  
 * @param mot : Le mot à chercher
 * @param tableau : Le tableau contenant les données. 
 * @param position_h : La position horizontale.
 * @param position_v : La position verticale.
 * 
 * @returns Vrai si le mot a été trouvé, sinon elle retourne Faux.
 */
bool lire_vers_la_gauche( char *mot, tableau tableau, int position_h, int position_v );



/**
 * Permet de lire vers le haut les lettres du tableau.
 * 
 * 
 * @param mot : Le mot à chercher.
 * @param tableau : Le tableau contenant les données. 
 * @param position_h : La position horizontale.
 * @param position_v : La position verticale.
 * 
 * @returns Vrai si le mot a été trouvé, sinon elle retourne Faux.
 */
bool lire_vers_le_haut( char *mot, tableau tableau, int position_h, int position_v );



/**
 * Permet de lire vers le bas les lettres du tableau.
 * 
 * 
 * @param mot : Le mot à chercher.
 * @param tableau : Le tableau contenant les données. 
 * @param position_h : La position horizontale.
 * @param position_v : La position verticale.
 * 
 * @returns Vrai si le mot a été trouvé, sinon elle retourne Faux.
 */
bool lire_vers_le_bas( char *mot, tableau tableau, int position_h, int position_v );


#endif
