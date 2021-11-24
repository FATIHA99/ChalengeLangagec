#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//structure contient 4 champs
struct Compte
{
    char CIN[50];
    char Nom[50];
    char Prenom[50];
    float Montant;
};
typedef struct Compte CMP;
//les fonction qui j'ai utiliser 
void IntroduireCompte(CMP comptes[], int n);
char *RecherchCIN(CMP comptes[], int n, char *cin);
void *Retrait(CMP comptes[], int n, float retrait, char *cin);
void *Depot(CMP comptes[], int n, float Depot, char *cin);
void MenuPrincipale();
void AffichageNormal(CMP comptes[], int n);
void quitter();
void AffichageTrieAscendant(CMP comptes[], int n);
void AffichageTrieDescendant(CMP comptes[], int n);
void AffiDesParChiffre(CMP comptes[], int n, float chifre);
void Fidelisation(CMP comptes[],int n);
//void TriParCin (CMP Comptes[],int n);
CMP cptes[100];
int n;
int main()
{
    int choix;
MENU:
    do
    {
        system("color A");
        MenuPrincipale();
        printf("Entrer Votre Choix \n");
        scanf("%d", &choix);
        switch (choix)
        {
            //crier un compte
        case 1:
        {
            printf("=====>   Introduire un Compte Bancaire \n\n");
            int l;
            n = 1;
            IntroduireCompte(cptes, n);

            system("cls");
            printf("===>   le compte est bien crier \n");
            AffichageNormal(cptes, n);
            printf("<=====   pour le menu principale taper 0 \n");
            scanf("%d", &l);
            if (l == 0)
            {
                system("cls");
                goto MENU;
            }
            break;
        }
            //crier plusieurs compte
        case 2:
        {
            int rtrn;
            printf("=====>   Introduire plusieurs Comptes Bancaires\n\n");
            printf("donner le nombre de comptes : \n");
            scanf("%d", &n);
            IntroduireCompte(cptes, n);
            system("cls");
            printf("les comptes % d est bien crier \n", n);
            AffichageNormal(cptes, n);
            printf("<=====   pour le menu principale taper 0 \n");
            scanf("%d", &rtrn);
            if (rtrn == 0)
            {
                system("cls");
                goto MENU;
            }
            break;
        }
        case 3:
            //operations
            {
                int choix2;
               operation:
                system("cls");
                printf("\t\t\t\t:::::::::::: Operations ::::::::::::\n\n");
                printf("\t\t\t\t1  --->   Retrait \n\n\t\t\t\t2  --->   Depot \n \n\t\t\t\t3  --->   Menu Principale  \n \n\t\t\t\tEntrer Votre Choix \n");
                scanf("%d", &choix2);
                switch (choix2)
                {
                    //retrait(done)
                case 1:
                {  system("cls");
                    printf(":::::::::: Retrait ::::::::::: \n\n");
                    char cin[50];
                    float retrait;
                    int v;
                    printf("Entrer CIN  \n ");
                    scanf("%s", cin);
                    printf("entrer le mantant de retrait \n");
                    scanf("%f", &retrait);
                    Retrait(cptes, 100, retrait, cin);
                    printf("taper 0 pour le menu principale\n");
                    scanf("%d", &v);
                    if (v == 0)
                    {
                        system("cls");
                        goto MENU;
                    }

                    break;
                }
                    //depot (done)
                case 2:
                {    system("cls");
                    printf("::::::::::  Depot  ::::::::::: \n\n");
                    char cin[50];
                    float depot;
                    int v;
                    printf("Entrer CIN  \n ");
                    scanf("%s", cin);
                    printf("entrer le mantant de depot \n");
                    scanf("%f", &depot);
                    Depot(cptes, 100, depot, cin);
                    printf("taper 0 pour le menu principale\n");
                    scanf("%d", &v);
                    if (v == 0)
                    {
                        system("cls");
                        goto MENU;
                    }

                    break;
                }
                case 3:
                {
                    system("cls");
                    goto MENU;
                    break;
                }
                default:
                {
                    printf("Entrer un nombre entre 1 et 3 \n");
                    goto operation;
                    break;
                }
                }
                break;
            }
            //affichage
        case 4:
        {
            int choix3;
        affiche:
            system("cls");
            printf("\t\t\t\t::::::::::  Affichage   ::::::::::: \n\n\t\t\t\t1  ==>   Ordre Ascendant  \n\n\t\t\t\t2  ==>   Order Descendant  \n \n\t\t\t\t3  ==>   Order Descendant par un chifre  \n \n\t\t\t\t4  ==>   Order Descendant par un chifre  \n \n\t\t\t\t5  ==>  Recherche Par CIN   \n \n\t\t\t\t6  ==>   Menu Principale  \n \n");
            printf("Entrer votre Choix : \t");
            scanf("%d", &choix3);
            switch (choix3)
            {
                //tri ascendant (done)
            case 1:
            {
                system("cls");
                printf(":::::::::: Les Comptes trie   Ordre Ascendant   ::::::::::: \n\n");
                AffichageTrieAscendant(cptes, n);
                int v;
                printf("taper 0 pour le menu principale\n");
                scanf("%d", &v);
                if (v == 0)
                {
                    system("cls");
                    goto MENU;
                }

                break;
            }
            //tri descendant (done)
            case 2:
            {
                system("cls");
                printf("::::::::::  Les Comptes trie  Order Descendant   ::::::::::: \n\n");
                AffichageTrieDescendant(cptes, n);
                int v;
                printf("taper 0 pour le menu principale\n");
                scanf("%d", &v);
                if (v == 0)
                {
                    system("cls");
                    goto MENU;
                }
                break;
            }
             // TRI  Ascendant PAR UN CHIFRE DONNEE
            case 3:
            {
                printf("::::::::::  Les Comptes trie  Order Ascendant  superieur  un chifre   ::::::::::: \n\n");
                float chifre;
                printf("entrer le chifre \n");
                scanf("%f", &chifre);
                int i, k = 0;
                CMP temp[100];
                for (i = 0; i < n; i++)
                {
                    if (cptes[i].Montant > chifre)
                    {
                        temp[k] = cptes[i];
                        k++;
                    }
                }
                AffichageTrieAscendant(temp,k); //K ==> TAILLE

                int v;
                printf("taper 0 pour le menu principale\n");
                scanf("%d", &v);
                if (v == 0)
                {
                    system("cls");
                    goto MENU;
                }
                break;
            }
            //tri Descendant par chifre (done)
            case 4:
            {
                printf("::::::::::  Les Comptes trie  Order Descendant  superieur  un chifre   ::::::::::: \n\n");

                float chifre;
                printf("entrer le chifre \n");
                scanf("%f", &chifre);
                int i, k = 0;
                CMP temp[100];
                for (i = 0; i < n; i++)
                {
                    if (cptes[i].Montant > chifre)
                    {
                        temp[k] = cptes[i];
                        k++;
                    }
                }
                AffichageTrieDescendant(temp,k);

                int v;
                printf("taper 0 pour le menu principale\n");
                scanf("%d", &v);
                if (v == 0)
                {
                    system("cls");
                    goto MENU;
                }
                break;
            }
            //Recherche  (Done)
            case 5:
            {
                char c[50];
                int r;
                char *nom;
                printf("::::::::::  Recherche Par CIN    ::::::::::: \n\n");
                printf(" - Entrer  le CIN \n");
                scanf("%s", c);
                nom = RecherchCIN(cptes, 100, c);
                if (nom == NULL)
                {
                    printf(" non existe \n  ");
                }
                else
                {
                    printf(" -ce compte est existe :\n - nom : %s  \n- num : %s   \n", nom, c);
                }
                printf("<=====   pour le menu principale taper 0 \n");
                scanf("%d", &r);
                if (r == 0)
                {
                    system("cls");
                    goto MENU;
                }
                break;
            }
            case 6:
            {
                system("cls");
                goto MENU;
                break;
            }
            default:
            {
                printf("entrer un nombre entre 1 et 6 \n");
                goto affiche;
                break;
            }
            }
            break;
        }

            //Fidelisation
        case 5:
        {   
            printf(":::::::::: Fidelisation  ::::::::::: \n\n");

             Fidelisation(cptes,n);
               int v;
                printf("taper 0 pour le menu principale\n");
                scanf("%d", &v);
                if (v == 0)
                {
                    system("cls");
                    goto MENU;
                }

            break;
        }
        case 6: //quitter
        {
            system("cls");
            quitter();
            break;
        }
        }

    } while (choix < 1 || choix > 6);
    return 0;
}
void MenuPrincipale()
{
    printf("\t\t\t\t:::::::::::::::::::   MENU PRINCIPALE  :::::::::::::::::::::\n\n");
    printf("\t\t\t\t1  --->   Introduire un Compte Bancaire\n");
    printf("\t\t\t\t2  --->   Introduire plusieurs Comptes Bancaires \n");
    printf("\t\t\t\t3  --->   Operation\n");
    printf("\t\t\t\t4  --->   Affichage\n");
    printf("\t\t\t\t5  --->   Fidelisation \n");
    printf("\t\t\t\t6  --->   Quiter l'application \n \n"); //
    printf("\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
}
void IntroduireCompte(CMP comptes[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("_____________ Compte num :%d __________\n ", i + 1);
        printf("Entrer CIN : \t ");
        scanf("%s", comptes[i].CIN);
        printf("Entrer le Nom  : \t ");
        scanf("%s", comptes[i].Nom);
        printf("Entrer le Prenom : \t ");
        scanf("%s", comptes[i].Prenom);
        printf("Entrer Montant : \t ");
        scanf("%f", &comptes[i].Montant);
        printf("_______________________________________ Compte num %d Cree avec succes  \n", i + 1);
    }
}
void AffichageNormal(CMP comptes[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("___________________________________________________ \n ");
        printf("- CIN : %s \n ", comptes[i].CIN);

        printf("- le Nom %s  : \n ", comptes[i].Nom);

        printf("- le Prenom : %s \n ", comptes[i].Prenom);

        printf("- Montant %f: \n ", comptes[i].Montant);
        printf("___________________________________________________ \n ");
    }
}
char *RecherchCIN(CMP comptes[], int n, char *cin)
{
    int i = 0;
    while (i <= n - 1)
    {
        if (strcmp(comptes[i].CIN, cin) == 0)
        {
            return comptes[i].Nom;
        }
        i++;
    }
    return NULL;
}
void *Depot(CMP comptes[], int n, float Depot, char *cin)
{
    int i;
     int trouve=0;
    //int a = j;
    for (i = 0; i < n; i++)
    {   
        if (strcmp(cin, comptes[i].CIN) == 0)
        {   int trouve=1;
            float m = comptes[i].Montant;
            comptes[i].Montant += Depot;
            system("cls");
            printf(" - Compte de : %s - %s\n ", comptes[i].Prenom, comptes[i].Nom);
            printf("______________________________________________\n");
            printf("==> votre sold avant  le Depot est : %.2f DH \n\n", m);
            printf("==> mantant de Depot est :%.2f DH \n\n", Depot);
            printf("==> votre sold apres le Depot est : %.2f DH\n\n", comptes[i].Montant);
            break;
        }

    }
    if(trouve==0)
    {
        printf("Compte n'existe pas !! \n");
    }
}
void *Retrait(CMP comptes[], int n, float retrait, char *cin)
{
    int i;
   int trouve=0;
    for (i = 0; i < n; i++)
    {
        if (strcmp(cin, comptes[i].CIN) == 0)
        {   int trouve=1;
            if (retrait > comptes[i].Montant)
            {  
                printf("\n impossible votre sold inferieur a %.2f\n", retrait);
                  break;

                
            }
            float m = comptes[i].Montant;
            comptes[i].Montant -= retrait;
            system("cls");
            printf(" -compte de : %s - %s\n ", comptes[i].Prenom, comptes[i].Nom);
            printf("______________________________________________\n");
            printf("==> votre sold avant  le retrait est : %.2f DH \n\n", m);
            printf("==> mantant de retrait est :%.2f  DH\n\n", retrait);
            printf("==> votre sold apres le retrait est : %.2f  DH\n\n ", comptes[i].Montant);
        }
    }
     if(trouve==0)
    {
        printf("Compte n'existe pas  !!! \n");
    }
}
void AffichageTrieAscendant(CMP comptes[], int n)
{
    CMP temp;
    int i, echanges = 0;
    do
    {
        for (i = 0; i < n - 1; i++)
        {
            if (comptes[i].Montant > comptes[i + 1].Montant)
            {
                temp = comptes[i];
                comptes[i] = comptes[i + 1];
                comptes[i + 1] = temp;
            }
            echanges++;
        }
    } while (echanges > 0);

    AffichageNormal(comptes, n);
}
void AffichageTrieDescendant(CMP comptes[], int n)
{
    CMP temp;
    int i, echanges = 0;
    do
    {
        for (i = 0; i < n - 1; i++)
        {
            if (comptes[i].Montant < comptes[i + 1].Montant)
            {
                temp = comptes[i];
                comptes[i] = comptes[i + 1];
                comptes[i + 1] = temp;
            }
            echanges++;
        }
    } while (echanges > 0);

    AffichageNormal(comptes, n);
}
void Fidelisation(CMP comptes[],int n)
{    int i;
    AffichageTrieDescendant( comptes,n);
    for(i=0;i<3;i++)
    {
        comptes[i].Montant=comptes[i].Montant*1.013;

    }
    system("cls");
    AffichageNormal(comptes,3);

}
void quitter()
{
    system("color C");
    printf("\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t                     @@@@@     \n  ");
    printf("\t\t\t\t\t\t                    @@@@@@@     \n  ");
    printf("\t\t\t\t\t\t                    @@@@@@@     \n  ");
    printf("\t\t\t\t\t\t                    @@@@@@@     \n  ");
    printf("\t\t\t\t\t\t           @@@@@o   @@@@@@@  O@@@@@          \n");
    printf("\t\t\t\t\t\t        @@@@@@@o    @@@@@@@    o@@@@@@@         \n");
    printf("\t\t\t\t\t\t      o@@@@@@@o     @@@@@@@     o@@@@@@@o           \n");
    printf("\t\t\t\t\t\t     o@@@@@@@o      @@@@@@@      o@@@@@@@o       \n");
    printf("\t\t\t\t\t\t     @@@@@@@o       @@@@@@@       o@@@@@@@      \n");
    printf("\t\t\t\t\t\t    o@@@@@@@        @@@@@@@        @@@@@@@o       \n");
    printf("\t\t\t\t\t\t    o@@@@@@o         o@@@o         o@@@@@@o      \n");
    printf("\t\t\t\t\t\t    o@@@@@@@                       @@@@@@@o    \n");
    printf("\t\t\t\t\t\t    o@@@@@@@                       @@@@@@@o      \n");
    printf("\t\t\t\t\t\t     @@@@@@@@                     @@@@@@@@         \n");
    printf("\t\t\t\t\t\t     @@@@@@@@@o                 O@@@@@@@@@                \n ");
    printf("\t\t\t\t\t\t      @@@@@@@@@o              O@@@@@@@@@                    \n");
    printf("\t\t\t\t\t\t        o@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                           \n ");
    printf("\t\t\t\t\t\t          o@@@@@@@@@@@@@@@@@@@@@@@@@@                           \n ");
    printf("\t\t\t\t\t\t             @@@@@@@@@@@@@@@@@@@@o                          \n ");
    printf("\t\t\t\t\t\t                o@@@@@@@@@@@@@@                          \n ");
}