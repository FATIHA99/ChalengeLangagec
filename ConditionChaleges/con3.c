#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{

	char cara;
	printf("entrer un caractere \n");
	scanf("%c", &cara);

	switch (cara)
	{
	case 'a':
	{
		printf(" voyelle");
		break;
	}
	case 'e':
	{
		printf(" voyelle");
		break;
	}
	case 'o':
	{
		printf(" voyelle");
		break;
	}
	case 'u':
	{
		printf(" voyelle");
		break;
	}
	case 'y':
	{
		printf(" voyelle");
		break;
	}
	case 'i':
	{
		printf(" voyelle");
		break;
	}
	default:
	{
		printf(" c'est pas un voyelle");
		break;
	}
	}

	return 0;
}
