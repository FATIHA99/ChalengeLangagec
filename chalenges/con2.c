#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nbr;
	printf("entrer un nombre  \n");
	scanf("%d",&nbr);
	if(nbr%2==0)
	{ printf("le nombre est :PAIR");
	}
	else{
		printf("le nombre est :IMPAIR");
	}
	return 0;
}
