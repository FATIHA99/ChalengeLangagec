#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 float rayon,c;
const P=3.14;
printf("entrer le rayon \n");
scanf("%f",&rayon);
c=2*P*rayon;
printf("la circonférence  est :%.2f",c);
	return 0;
}
