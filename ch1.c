#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nom[50];
	char prenom[50];
	char sexe[10];
	int age;
	int tele;
	printf("entrer le nom \n");
	scanf("%s",&nom);
	printf("entrer le prenom \n");
	scanf("%s",&prenom);
	printf("entrer age : \n ");
	scanf("%d",&age);
	
	printf("entrer le sexe: \n");
	scanf("%s",&sexe);
	printf("entrer le tele \n");
	scanf("%s",&tele);
	
	printf("------- votre informtions ---------\n");
	printf(" NOM: %s \n prenom: %s \n sexe: %s age:%d \n tele:%d  \n",nom,prenom,sexe,age,tele);
		printf("--------------------------------\n");
		
	return 0;
}
