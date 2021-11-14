#include <stdio.h>

int main()
{
    int annee, choix, j, mo, h, m, s;
    printf("entrer l'annee \n");
    scanf("%d", &annee);
    printf("entrer votre choix \n");
    printf("1. Mois\n2. Jours\n3. Heures\n4. Minutes\n5. Secondes\n");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
    {
        j = annee * 365;
        mo = j / 30;
        printf("%d mois  ", mo);
        break;
    }
    case 2:
    {
        j = annee * 365;

        printf("%d jours  ", j);
        break;
    }
    case 3:
    {
        j = annee * 365;
        h = j * 24;
        printf("%d heurs  ", h);
        break;
    }
    case 4:
    {
        j = annee * 365;
        h = j * 24;
        m = h * 60;
        printf("%d minutes  ", m);
        break;
    }
    case 5:
    {
        j = annee * 365;
        h = j * 24;
        m = h * 60;
        s = m * 60;
        printf("%d secondes  ", s);
        break;
    }
    default:
    {
        printf("entrer un nombre de 1 jusqu'a 5 \n");
        break;
    }
    }

    return 0;
}