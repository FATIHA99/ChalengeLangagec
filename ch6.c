#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int f,c;
    printf("entrer la temp�rature en Fahrenheit \n ");
    scanf("%d",&f);
    c=(f-32)/1.8;
    printf("la temperature en degr� Celsius est %d",c);
	return 0;
}
