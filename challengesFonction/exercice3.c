#include <stdio.h>
#include <stdlib.h>
int main()
{
    int nbr, cmp=0, i;
    printf("entrer un nombre \n");
    scanf("%d", &nbr);
    for (i = 1; i <= nbr; i++)
    {
        if (nbr % i == 0)
        {
            cmp++;
        }
    }
    
    if(cmp==2)
    {
        printf("%d est premier",nbr);
    }
    else{
        printf("%d est  non premier",nbr);
    }
    return 0;
}