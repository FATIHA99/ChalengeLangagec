#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,y;
	printf("==> Entrer la 1 er valeur : \t");
	scanf("%d",&x);
		printf("==> Entrer la 2eme valeur  :  \t");
	scanf("%d",&y);
	echanger(x,y);
	return 0;
}

void echanger( int a,int b)
{
	int temp=0;
	temp=a;
	a=b;
	b=temp;
	printf("1 er  valeur  : %d \n ",a);
	printf("2 eme  valeur : %d \n ",b);
	
 } 
