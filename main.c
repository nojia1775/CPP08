#include <stdio.h>
#include <string.h>

int main(void) {

    int nombre;

    printf("Choisis un nombre : ");
    scanf("%d", &nombre);
    printf("\n");

    char diviseurs[1000]; //tableau qui contiendra les diviseurs

    int nombreDiviseurs = 0;


    for (int i = 2; i <= nombre / 2; i++) { //boucle qui divise les nombres inférieur à la moitié du nombre choisi
        int x = nombre % i;

        int positionDansTableau = 0;

        if(x == 0) {
            diviseurs[positionDansTableau] = i;
            printf("%d est un diviseur de %d\n", i, nombre);
            positionDansTableau++;
            nombreDiviseurs++;
        }
    }

    if(nombreDiviseurs == 0) {
        printf("\n%d est un nombre premier", nombre);
    } else {
        printf("\n%d n'est pas un nombre premier", nombre);
    }
}