#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choixMenu;

    printf("===Menu Burger===\n");
    printf("1. Cheeseburger\n");
    printf("2. Baconburger\n");
    printf("3. Chickenburger");
    printf("\nVotre choix? ");

    scanf("%d", &choixMenu);

    switch (choixMenu)
    {
        case 1:
            printf("Vous avez choisi le Cheeseburger! \n");
            break;
        case 2:
            printf("Vous avez choisi le Baconburger !\n");
            break;
        case 3:
            printf("Vous avez choisi le Chickenburger ! \n");
            break;
        default:
            printf("Vous n'avez pas rentre un nombre correct!");

    }
    printf("\n");


    return 0;
}
