#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c;
    printf("entrer un caractere \n");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
    {
        printf("un alphabet miniscule \n");
    }
    if (c >= 'A' && c <= 'Z')
    {
        printf("un alphabet majuscule \n");
    }
    return 0;
}