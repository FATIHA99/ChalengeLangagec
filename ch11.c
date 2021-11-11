#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float c, longueur ,largeur;
printf("entrer longueur de rectangle :\n");
scanf("%f",&longueur);
printf("entrer largeur de rectangle :\n");
scanf("%f",&largeur);
 c=2*(longueur + largeur);
 printf("la circonférence de rectangle  est : %.2f cm ",c);
	return 0;
}
