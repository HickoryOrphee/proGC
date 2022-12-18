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

/*    Au d�part, on a une variable�compteur�initialis�e � 0.
Elle vaut donc 0 au d�but du programme.La boucle�while�ordonne la r�p�tition TANT QUE�compteur�est inf�rieur � 10.
Comme�compteur�vaut 0 au d�part, on rentre dans la boucle.On affiche la phrase ��Bienvenue sur OpenClassrooms�!�� via un�printf.
Gr�ce �compteur++;�, on incr�mente la valeur de la variable�compteur�(qui valait 0, elle vaut maintenant 1).
On arrive � la fin de la boucle (accolade fermante) : on repart donc au d�but, au niveau du�while�pour refaire le test�:
��Est-ce que�compteur�est toujours inf�rieure � 10�?��. Oui car�compteur�vaut 1. On recommence donc les instructions de la boucle.
Et ainsi de suite :�compteur�va valoir progressivement 0,�1, 2, 3� 8, 9, et 10. Lorsque�compteur�vaut 10, la condition�compteur < 10est fausse.
Comme l'instruction est fausse, on sort de la boucle.*/

int main() {
for (int compteur =10; compteur >=0; compteur--)
    {
        printf("%d\n", compteur);
    }
    return 0;
}

