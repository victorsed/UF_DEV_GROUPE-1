#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "header.h"



int choixJ(int min, int max)
{
    int Nb=0;
    while (Nb>max || Nb<min)
    {
        printf("Faites votre choix entre : %d & %d ! :  > ",min,max);scanf("%d",&Nb);
    }
    return Nb;
}

void start()
{
  menu();
}

void menu()
{
  system("cls");
  printf("MENU PRINCIPALE  \n\n");
  printf("1. Plantes\n");
  printf("2. Sauvegarde\n");
  printf("3. Ajoutez une plante\n");
  printf("4. Quitter\n\n");
  int c=choixJ(1,4);
    if (c==1)
    {
        ChoixPlante();
    }
    else if (c==2)
    {
        printf("Sauvegardes");
    }

    else if (c==3)
    {
        printf("Ajout d'une plante");
    }
    else if (c==4)
    {
        exit(1);
    }
}

void afficheinfo(int nb)
{
    system("cls");

    int i=1;

    printf("PLANTE n*: %d \n\n",nb);
    printf("Nom de la plante : (info)\n");
    printf("Categorie de la plante : (info)\n");
    printf("Description de la plante : (info)\n");
    printf("Humidite : (info)\n");
    printf("Temperature optimale : (info)\n");
    printf("Luminosite optimale : (info)\n\n");


    printf("Appuie sur 0 pour continuer : > ");
    scanf("%d",&i);

    while (i != 0)
    {
      printf("Appuie sur 0 pour continuer : >");
      scanf("%d",&i);
    }
    ChoixPlante();
}
void ChoixPlante()
{
    system("cls");
    printf("MENU DES PLANTES  \n\n");
    printf("\n01. Plante 1  11. Plante 11  22 .Plante 21\n");
    printf("02. Plante 2  12. Plante 12  22 .Plante 22\n");
    printf("03. Plante 3  13. Plante 13  23. Plante 23\n");
    printf("04. Plante 4  14. Plante 14  24. Plante 24\n");
    printf("05. Plante 5  15. Plante 15  25. Plante 25\n");
    printf("06. Plante 6  16. Plante 16  26. Plante 26\n");
    printf("07. Plante 7  17. Plante 17  27. Plante 27\n");
    printf("08. Plante 8  18. Plante 18  28. Plante 28\n");
    printf("09. Plante 9  19. Plante 19  29. Plante 29\n");
    printf("10. Plante 10 20. Plante 20  30. Plante 30\n\n");
    printf("31. Retour menu principale\n\n");

    int a=choixJ(1,31);
    if (a==1)
    {
        afficheinfo(1);
    }
    if (a==2)
    {
        afficheinfo(2);
    }
    if (a==3)
    {
        afficheinfo(3);
    }
    if (a==4)
    {
        afficheinfo(4);
    }
    if (a==5)
    {
        afficheinfo(5);
    }
    if (a==6)
    {
        afficheinfo(6);
    }
    if (a==7)
    {
        afficheinfo(7);
    }
    if (a==8)
    {
        afficheinfo(8);
    }
    if (a==9)
    {
        afficheinfo(9);
    }
    if (a==10)
    {
        afficheinfo(10);
    }
    if (a==11)
    {
        afficheinfo(11);
    }
    if (a==12)
    {
        afficheinfo(12);
    }
    if (a==13)
    {
        afficheinfo(13);
    }
    if (a==14)
    {
        afficheinfo(14);
    }
    if (a==15)
    {
        afficheinfo(15);
    }
    if (a==16)
    {
        afficheinfo(16);
    }
    if (a==17)
    {
        afficheinfo(17);
    }
    if (a==18)
    {
        afficheinfo(18);
    }
    if (a==19)
    {
        afficheinfo(19);
    }
    if (a==20)
    {
        afficheinfo(20);
    }
    if (a==21)
    {
        afficheinfo(21);
    }
    if (a==22)
    {
        afficheinfo(22);
    }
    if (a==23)
    {
        afficheinfo(23);
    }
    if (a==24)
    {
        afficheinfo(24);
    }
    if (a==25)
    {
        afficheinfo(25);
    }
    if (a==26)
    {
        afficheinfo(26);
    }
    if (a==27)
    {
        afficheinfo(27);
    }
    if (a==28)
    {
        afficheinfo(28);
    }
    if (a==29)
    {
        afficheinfo(29);
    }
    if (a==30)
    {
        afficheinfo(30);
    }
    if (a==31)
    {
        menu();
    }
}
