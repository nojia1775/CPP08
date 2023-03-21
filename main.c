#include <stdio.h>

int main(void) {

    int nombre;

    printf("Choisis un nombre : ");
    scanf("%d", &nombre);
    printf("\n");

    char diviseurs[1000]; //tableau qui contiendra les diviseurs

    int nombreDiviseurs = 0;


    for (int i = 1; i <= nombre / 2; i++) { //boucle qui divise les nombres inférieur à la moitié du nombre choisi
        int x = nombre % i;

        int positionDansTableau = 0;

        if(x == 0) {
            diviseurs[positionDansTableau] = i;
            printf("%d est un diviseur de %d\n", i, nombre);
            positionDansTableau++;
            nombreDiviseurs++;
        }
    }
    printf("%d est un diviseur de %d\n", nombre, nombre);

    if(nombreDiviseurs == 1) {
        printf("\n%d est un nombre premier", nombre);
    } else {
        printf("\n%d n'est pas un nombre premier", nombre);
    }
}