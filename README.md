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
Ce programme prend en entrée (`stdin`) un fichier d'entrée sous la forme:

```sh
  ./motcache  <fichierTexte>
```

* en supposant que l'utilisateur respecteras le format d'exécutution du programme.
* Le fichier contiendra la grille de lettres et les mots à trouver. 
* La grille fait une taille de 12 lettres par 12 lettres.
* Les 12 premières lignes du fichier contiendront les 12
lignes de la grille, ensuite une ligne vide et finalement la liste de mots à trouver:
```text
FASERGEWEBPI
APSREREBASEN
UTHSCAQUGNUF
LTEGNICBASHO
TNRIADLUYENR
NGBTIGONNEBM
INRPBNNTGATA
MIOQEOEUORUT
KXOEDMNNDTQI
CEKIEEGADNAQ
CYETAHCRAIMU
GIFTPTIMMOCE

GIT
DEBIAN
COMMIT
UQAM
WEB
REBASE
SHERBROOKE
SERGE
AGEEI
BEN
MINT
CAQ
GNU
UBUNTU
ARCH
GNOME
INFORMATIQUE
INTRA
CLONE
NGNIX
DOGNY
BASH
GCC
APT
PQ
FTP
CHAT
GIFT
FAULT
LTE
```

Tout d'abord, obtenir le projet à partir de gitlab:

```sh
$ git clone  https://gitlab.info.uqam.ca/cisse.saliou/inf3135-hiv2022-tp2 
$ cd inf3135-hiv2022-tp2
```
Ensuite, compilez programme avec la  commande `make` pour générer l'éxécutable `<executable>` du programme:

```sh
$ make
```

Puis vérifier effectivememt la production de l'éxecutable `motcache` avec la commande `ls` en environnement UNIX:

```sh
$ ls 
check.bats  grille.h  Makefile  motcache.c  README.md  tableau.h  Tests   util.h
grille.c    grille.o  motcache  motcache.o  tableau.c  tableau.o  util.c  util.o
```
Si vous lancer le programme sans argument, il affiche un message d'erreur pour vous solliciter à saisir un argument valide:


```sh
$./motcache
Arguments incorrectes!
./motcache  <fichier entree>
```

Sinon exécuter le programme avec un fichier valide, il affiche `la solution` du mot caché dans la liste:

```sh
$./motcache entree.txt
$ PRESIDENTKENNEDY
```

Si vous exécutez le programme avec plusieurs arguments, il produit un message d'erreur:

```sh
$./motcache entree1.txt entree2.txt 
Arguments incorrectes!
./motcache  <fichier entree>
```

En executant le programme avec un fichier inexistant, elle affiche un message d'erreur de lecture: 

```sh
$./motcache sersss
Impossible de lire le fichier!
```

Finalement pour pour supprimer l'exécutable et les fichiers inutiles ou  générés (`*.0`,`motcache`), cette commande `make clean` serait indispensable:

```sh
$ make clean
rm -rf *.o  motcache
```


## Tests 

Pour lancer la suite des tests automatiques, nous utilisons sur l'entrée standard la commande `make test` pour verifier que le programme réponds aux éxigences:

```sh
$ make test
 bats check.bats
 ✓ test0 : Programme sans argument, afficher message
 ✓ test1 : Plusieurs arguments, afficher message
 ✓ test2 : Afficher mot cache: President kennedy
 ✓ test3 : Afficher mot cache: Mandoline
 ✓ test4 : Fichier inexistants, afficher un message
 ✓ test5 : Resoudre Venise

6 tests, 0 failures
```

## Dépendances 

* [GCC](https://gcc.gnu.org/) 
* [Bats](https://github.com/sstephenson/bats)


## Références

* La documentation officielle de Gitlab, <https://docs.gitlab.com>  
* Bats:Bash automated testing system, <https://github.com/sstephenson/bats>
* Two dimensional(2D) arrays in C programming, <https://beginnersbook.com/2014/01/2d-arrays-in-c-example>

* C File Handling, <https://www.programiz/c-programming/c-file-input-output> 

## État du projet 

* [x] Le nom du dépôt GitLab est exactement `inf3135-hiv2022-tp2`. 
* [x] L'URL du dépôt GitLab est exactement  [`https://gitlab.info.uqam.ca/cisse.saliou/inf3135-hiv2022-tp2`](`https://gitlab.info.uqam.ca/cisse.saliou/inf3135-hiv2022-tp2`).
  
* [x] Les usagers `tim.willy`, `zavaleta_chuquicaja.willy`, `bernardos.pedro_luis` et `dogny_g` ont accès au projet en mode *Developer*.
* [x] Le dépôt GitLab est privé.
* [x] Le dépôt contient au moins un fichier `.gitignore`.
* [x] L'en-tête des déclarations des fonctions est documentée (docstring).
* [x] Le nombre de tests qui reussissent/échouent avec le make test est indiqué quelque part dans le fichier `README.md` 
* [x] L'en-tête du fichier est documentée.
* [x] Le fichier `Makefile` supporte les cibles `compile`, `link`, `test`. 
* [x] Le programme ne contient pas de valeurs magiques. 

