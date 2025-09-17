#include <stdio.h>
#include <stdlib.h>  // Pour rand() et srand()
#include <time.h>    // Pour time()

int main() {
    int nombre,guess,restart;
    srand(time(NULL));
    guess = 0 ;
    restart = 1 ;
    nombre = (rand()%20)+1;

printf ("Bienvenue ! Je pense à un nombre entre 1 et 20. Essaye de le deviner. \n ");

while (restart == 1) {
        printf ("Entre ton nombre : ");
        scanf("%d" , &guess);

        if (guess < nombre)
        printf ("Le nombre recherché est plus haut.\n");

        else if (guess > nombre)
        printf ("Le nombre recherché est plus petit.\n");

        else if (guess == nombre) {
        printf ("*******\n");
        printf ("*BINGO*\n");
        printf ("*******\n\n");
        printf ("Rejouer ? (1 : oui /0 : non )\n");
        scanf ("%d" , &restart);
        if (restart == 1)
                nombre = (rand()%20)+1;


        }

}
    return 0;
}
