#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int F,c;
printf("entrer la température en Fahrenheit \n ");
scanf("%d \n",&F);
c=F-32/1.8;
printf("la temperature en Celsius est : %d",c);
if(c<0)
{
	printf(" tres froid \n");
	
}
else if (c>01 && c<20)
{
	printf("froid");
}
else if (c>20 && c<40)
{
	printf("chaud");
}
else{
	printf("tres chaud ");
}
	return 0;
}
