#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,s;
	printf("entrer le valeur de a \n");
	scanf("%d",&a);
	
	printf("entrer le valeur de b \n");
	scanf("%d",&b);
	s=a+b;
	if(a==b)
	{
		printf("triple  de la somme de %d et %d est %d",a,b,s*3);
	}
	else{
		printf(" LA SOMME :%d",s);
	}
	
	return 0;
}
