#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float mile=0,metre=0,km=0;
 printf("entrer demande la distance en mile \n");
scanf("%f",&mile);
km=mile/1.609;
metre=km/1000;
printf(" la distance en metre est %.2f  \n",metre);
	
	return 0;
}
