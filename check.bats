tests_folder=Tests
prog=motcache
erreur_arguments="Arguments incorrectes!"
erreur_lecture="Impossible de lire le fichier!"

# Normal usage


@test "test0 : Programme sans argument, afficher message" {
   run ./$prog
    [ "$status" -eq 1 ]
    [ "${lines[0]}" = "$erreur_arguments" ]
}


@test "test1 : Plusieurs arguments, afficher message" {
    run ./$prog $tests_folder/test1 $tests_folder/test1
    [ "$status" -eq 1 ]
    [ "${lines[0]}" = "$erreur_arguments" ]

}


@test "test2 : Afficher mot cache: President kennedy" {
 
    run ./$prog  $tests_folder/test1
    [ "${lines[0]}" = "PRESIDENTKENNEDY" ]
}

@test "test3 : Afficher mot cache: Mandoline" {
	
	run ./$prog  $tests_folder/test2
	[ "${lines[0]}" = "MANDOLINE"  ]
	}

@test "test4 : Fichier inexistants, afficher un message" {

    run ./$prog ccskkk
    [ "$status" -eq 2 ]
    [ "${lines[0]}" = "$erreur_lecture" ]


}


