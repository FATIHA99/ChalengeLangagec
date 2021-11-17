#include <stdio.h>
#include <stdlib.h>
int main()
{
         int nombre ,i;
         printf("entrer la valeur : \t");
         scanf("%d",&nombre);
         for(i=1;i<=10;i++)
         {
             printf("%d*%d=%d \n",nombre,i,nombre*i);
         }
    return 0;
}