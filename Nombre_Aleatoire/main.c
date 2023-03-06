#include <stdio.h>
#include <stdlib.h>

#include <time.h>  // la librairie qui contient la fonction qui permet de g�nerer aleatoirement des nombres

/*
    le programme genere un nombre aleatoire entre 1 et 100.
    le user essaie de trouver le nombre gener� par le programme.
    si son nombre est correct, le programe lui dit "f�licitation"
    si don nobre est < , le programe le lui mentionne, et s'il est
    >, le programme en fait de meme.
*/

int main(int argc,char*argv[])
{
    int nbreMistere=0; //le nombre aleatoire que va g�nerer le programme;
    int nbreSaisi=0;  //le nombre que saisira le user

    const int MAX=100,MIN=1;

    //Generation du nombre al�atoire:

    srand(time(NULL));
    nbreMistere=(rand() % (MAX - MIN + 1)) + MIN;

    /* La boucle du programme.
    Elle se r�p�te tant que l'utilisateur n'a pas trouv� le nombre myst�re */

    do{
        printf("Quelle est le nombre selon vous svp\n");
        scanf("%d",&nbreSaisi);
        if(nbreSaisi<nbreMistere){printf("Pas mal, mais c'est plus que ca\n");}
        if(nbreSaisi>nbreMistere){printf("Pas mal, mais c'est moins que ca\n");}
        if(nbreSaisi==nbreMistere){printf("BINGO!!...Vous avez trouvez\n");}
    }while(nbreSaisi!=nbreMistere);

    return 0;


}
