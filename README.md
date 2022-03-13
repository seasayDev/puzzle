# TP2: Résolution de mots cachés 
## Description
**Résolution de Mot cachés** est un logiciel écrit en langage C qui permet de découvrir un mot caché dans une grille.  Il fonctionne à la console en recevant à l'entrée (`stdin`) un fichier contenant les mots et illustre à l'écran (`stdout`) la solution. \
Ce projet est effectué dans le cadre du cours INF3135 - Construction et maintenance de logiciel dispensé par l'éminant professeur Mr [Dogny, Serge](https://gitlab.info.uqam.ca/dogny_g) à l'université du Québec à Montréal (UQAM).


### Contenu du Projet 

* [`README.md`](README.md) la documentation officielle du projet.
* [`Makefile`](Makefile) le fichier de configuration genérant la compilation du programme à l'aide de la commande `make compile`, lance les cas de tests avec `make test`, effectue l'établissement des liens avec `make link`, oubien produit en une étape l'exécutable avec la commande `make`, finalement supprimer les fichiers inutiles avec la commande `make clean`.

* [`Tests`](Tests) Répertoire qui contient les différents cas de tests.
* [`check.bats`](check.bats) le script qui permet de tester le programme. 
* [`motcache.c`](motcache.c) le fichier source principal du projet.
* [`tableau.h`](tableau.h) le module qui contient l'ensemble des régles d'affaires permettant de traiter le tableau contenu dans le fichier en entrée.
* [`tableau.c`](tableau.c) le fichier source d'implémentation des méthodes du module tableau.
* [`grille.h`](grille.h) grille.h contient l'ensembe des règles d'affaires permettant de traiter une grille dans un tableau.
* [`grille.c`](grille.c) le fichier source d'implémentation des méthodes du module grille.
* [`util.h`](util.h) contient l'ensemble des fonctions utilitaires, des constantes communes et bibliothèques utilisées dans les differentes instances du logiciel.
* [`util.c`](util.c) contient l'implémentation des fonctions du module utilitaire du projet.
* [`gitlab-ci`](#) le système d’intégration continue de GitLab qui construit et roule tous les tests à chaque commit sur la branche master.
* [`.gitignore`](.gitignore) permet d'ignorer les fichiers inutiles sur le dépôt distant.




## Auteur 
Saliou Cisse (CISS20129907)

## Fonctionnement

## Tests 


## Dépendances 

## Références

## État du projet 

* [x] Le nom du dépôt GitLab est exactement `inf3135-hiv2022-tp2`. 
* [x] L'URL du dépôt GitLab est exactement  `https://gitlab.info.uqam.ca/cisse.saliou/inf3135-hiv2022-tp2`.
  
* [x] Les usagers `tim.willy`, `zavaleta_chuquicaja.willy`, `bernardos.pedro_luis` et `dogny_g` ont accès au projet en mode *Developer*.
* [x] Le dépôt GitLab est privé.
* [x] Le dépôt contient au moins un fichier `.gitignore`.


