#include <stdio.h>
#include <stdlib.h>

/*
int main ()
{

int compteur = 0;

while (compteur < 10)
{
    printf("Bienvenue sur OpenClassrooms !\n");
    compteur++;
    printf("La variable compteur vaut %d\n", compteur);
    compteur++;
}
}

/*    Au départ, on a une variable compteur initialisée à 0.
Elle vaut donc 0 au début du programme.La boucle while ordonne la répétition TANT QUE compteur est inférieur à 10.
Comme compteur vaut 0 au départ, on rentre dans la boucle.On affiche la phrase « Bienvenue sur OpenClassrooms ! » via un printf.
Grâce à compteur++; , on incrémente la valeur de la variable compteur (qui valait 0, elle vaut maintenant 1).
On arrive à la fin de la boucle (accolade fermante) : on repart donc au début, au niveau du while pour refaire le test :
« Est-ce que compteur est toujours inférieure à 10 ? ». Oui car compteur vaut 1. On recommence donc les instructions de la boucle.
Et ainsi de suite : compteur va valoir progressivement 0, 1, 2, 3… 8, 9, et 10. Lorsque compteur vaut 10, la condition compteur < 10est fausse.
Comme l'instruction est fausse, on sort de la boucle.*/

int main() {
for (int compteur =10; compteur >=0; compteur--)
    {
        printf("%d\n", compteur);
    }
    return 0;
}

