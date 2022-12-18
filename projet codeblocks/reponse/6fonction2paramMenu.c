#include <stdio.h>
#include <stdlib.h>
#include "view.h"


int menu()
{
    int choix = 0;

    while (choix < 1 || choix >4)
    {
        printf("Menu : \n");
        printf("1: Poulet basquaiz\n");
        printf("2: Comconbres\n");
        printf("3: Escalope\n");
        printf("4: Surprisz du chef\n");
        printf("Votre choix?\n");
        scanf("%d", &choix);
    }
    return choix;
}

int main(int argc, char *argv[])
{
    switch (menu())
    {
    case 1:
        printf("CoCoriki\n");
        break;
    case 2:
        printf("Coquinoux\n");
        break;
    case 3:
        printf("Escaloparti\n");
        break;
    case 4:
        printf("la surprizduchef\n");
        break;
    }
    return 0;
}
