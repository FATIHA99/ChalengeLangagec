#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
printf("entrer la valeur de a  et b \n");
scanf("%d %d",&a,&b);
printf("la somme de a et b est %d \n",a+b);
printf("la soustractio de a est b est %d \n",a-b);
printf("le produit de a et b est %d \n",a*b);
if (b!=0)
{printf("la division de a et b est %d \n",a/b);
printf("le rest de la division est :%d \n",a%b);
}
else
{
printf(" la valeur de b doit etre diffirent 0 \n");

}
	return 0;
}
