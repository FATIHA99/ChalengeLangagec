#include <stdio.h>
#include <stdlib.h>
int main(){
int i,j,k,rows,space,stare=1;
printf("entrer le nomre de ligne \n");
scanf("%d",&rows);
space=rows-1;
for(i=1;i<=rows;i++)
{

    for(j=1;j<=space;j++)
    {
        printf(" ");
    }
    for(k=1;k<=stare;k++)
    {
        printf("*");
    }
    space--;
    stare+=2;
    printf("\n");
}
return 0;
}
