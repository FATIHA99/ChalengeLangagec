#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nbr1,nbr2,nbr3,nbr4,somme;
 float moyen;
 
 printf("entrer les quatre valeur \n");
 scanf("%d %d %d %d",&nbr1,&nbr2,&nbr3,&nbr4);
 
 
  somme=nbr1+nbr2+nbr3+nbr4;
  moyen=somme/4.0;
  printf("la somme:  %d \n le moyen :%.2f \n",somme,moyen);
	return 0;
}
