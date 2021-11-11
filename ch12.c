#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int nbr=0;
    printf("Entrez un nombre  de 3 chifres:\n ");
    scanf("%d",&nbr);
    int a=((nbr%100)%10) ;
    int b=((nbr%100)/10);
    int c=nbr/100;
    printf("%d%d%d",a,b,c);
   
	return 0;
}
