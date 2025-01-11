prog : principal.o somme.o produit.o moyenne.o
	gcc principal.o somme.o produit.o moyenne.o -o prog

principal.o : principal.c
	gcc -c principal.c

somme.o : somme.c
	gcc -c somme.c

produit.o : produit.c
	gcc -c produit.c

moyenne.o : moyenne.c
	gcc -c moyenne.c

rm :
	rm *.o prog
