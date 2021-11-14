#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int nbr;
	printf("entrer un nombre  \n");
	scanf("%d", &nbr);
	if(nbr==0)
	{
		printf("null");
	}
	 else if (nbr % 2 == 0)
	{
		printf("le nombre  %d est :PAIR",nbr);
	}
	else
	{
		printf("le nombre  %d est :IMPAIR",nbr);
	}
	return 0;
}
