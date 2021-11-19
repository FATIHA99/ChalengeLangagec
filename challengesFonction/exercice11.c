#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,size,nbr,exist=0,pos=0;
	printf("entrer le size de la table  \n");
	scanf("%d",&size);
	 int table[size];
	 //remplissage 
	 for(i=0;i<size;i++)
	 {
	 	printf("entrer la valeur de  table[%d] ",i);
	 	scanf("%d",&table[i]);
	 	
	 }
	 //affichage 
	 
	 printf(" VOILA LA TABLE :\n");
	  printf("------------------------------------\n");
	  for(i=0;i<size;i++)
	 {
	
	 	printf(" %2d |",table[i]);
	 	
	 }
	 printf(" \n------------------------------------\n");
	 printf(" \n entrer le nombre  \n");
	 scanf("%d",&nbr);
	 for(i=0;i<size;i++)
	 {
	 	if(table[i]==nbr)
	 	{
	 		exist=1;
	 		pos=i;
		 }
		 
	 }
	 if(exist==1)
	 {
	 	printf("le nombre est existe dans la position table[%d] \n",pos);
	 }
	 else{
	 		printf("le nombre n'existe pas \n");
	 }
	return 0;
}
