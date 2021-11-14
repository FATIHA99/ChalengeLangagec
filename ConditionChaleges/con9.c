#include <stdio.h>
#include <stdlib.h>
int main()
{
    int nbr1, nbr2, max;
    printf(" entrer le premier nombre \n");
    scanf("%d", &nbr1);
    printf(" entrer le premier nombre \n");
    scanf("%d", &nbr2);
    max = nbr1;
    if (nbr2 > nbr1)
    {
        max = nbr2;
    }
    printf(" la max est  %d", max);
    return 0;
}