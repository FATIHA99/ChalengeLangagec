#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


bool isPremier( int nbr )
{
	int i, cmp=0;
	bool res=false;
	for(i=1;i<=nbr;i++)
	{
		if(nbr%i==0)
		{
			cmp++;
		}
	}
	if(cmp==2)  res=true;
	 return res ;
	
}
int main(int argc, char *argv[]) {
	int n;
	bool b;
	printf("entrer un nombre \n");
	scanf("%d",&n);
	b=isPremier(n);
	if(b==true)
	{
		printf("le nombre  %d  est premier \n",n);
		
	}
	else {
		printf(" %d est non premier \n");
	}
	return 0;
}
