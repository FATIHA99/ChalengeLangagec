#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int F,C;
printf("entrer la température en  Celsius  \n ");
scanf("%d",&C);
F = (C*1.8)+32 ;


printf("la temperature en Fahrenheit est : %d",F);
	return 0;
}
