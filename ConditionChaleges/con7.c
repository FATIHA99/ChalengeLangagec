#include <stdio.h>
int main()
{
    int nbr;
    printf("entrer un nombre \n");
    scanf("%d", &nbr);
    if (nbr > 0)
    {
        printf("positif \n");
    }
    else if (nbr < 0)
    {
        printf("negatif \n");
    }
    else
    {
        printf("null");
    }
}