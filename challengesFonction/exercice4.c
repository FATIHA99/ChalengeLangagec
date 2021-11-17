#include <stdio.h>
int main()
{   int nbr,nbrinverse=0,rest;
    printf("entrer un nombre \n");
    scanf("%d",&nbr);
    while(nbr!=0)
    { rest=nbr%10;
    nbrinverse = 10*nbrinverse+rest;
    nbr=nbr/10;
	}
     printf("%d",nbrinverse);
    return 0;
}
