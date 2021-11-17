#include <stdio.h>

int main()
{ int x,y;
   printf("entrer x \n");
   scanf("%d",&x);
   printf("entrer y \n");
   scanf("%d",&y);
   printf(" la somme de %d et %d est %d",x,y,somme(x,y));
    return 0;
}
int somme( int a ,int b)
{
  return a+b;
}