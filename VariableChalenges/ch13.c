#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int nbr;
	printf("Entrez un nombre Entier \n ");
	scanf("%d", &nbr);
    printf("octal: %o \n", nbr);
	printf("hexadecimal: %x", nbr);
	return 0;
}
