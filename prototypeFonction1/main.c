#include <stdio.h>
#include <stdlib.h>

#include "fonction.h"

int main(int argc,char*argv[])
{
   int years;

    printf("Bonjour!\nVeuillez saisir votre annee de naissance svp\n");
    scanf("%d",&years);
    printf("\nCette annee vous avez donc %d ans",Age_User(years));


    double n1,n2;

    printf("\n\nOn veut connaitre votre taux de succes en cette matiere.\nSvp veuillez saisir vos 2 premiere note\n");
    scanf("%lf",&n1);
    scanf("%lf",&n2);
    printf("\nAlors votre taux de succes en cette matiere est de %f pourcents en cette session.",Taux_Succes(n1,n2));

    if(Taux_Succes(n1,n2)>=80){
        printf("\nSUCCES: Vous reussirez ce cour a tous les coups\n");
    }else{
        printf("\nECHEC: Vous echouerez a ce cour a tous les coups\n");
    }






    return 0;
}
