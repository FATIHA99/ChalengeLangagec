#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float Metre=1,Mile=1,km=1;
printf("entrer demande la distance en Metre \n");
scanf("%f",&Metre);
km=Metre*1000;
Mile=km*1.609;
 //Km = Mile/1.609
 printf(" la distance en Mile est %.2f  \n",Mile);
	return 0;
}
