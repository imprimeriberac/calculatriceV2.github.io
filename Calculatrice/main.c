#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main(int argc, char *argv[])
{
    float nombre1 = 0.0;
    float nombre2 = 0.0;
    int operateur = 0;
    float resultat = 0.0;

    printf("Entrez le premier chiffre\n");
    scanf("%f", &nombre1);
    printf("Entrez le deuxieme chiffre\n");
    scanf("%f", &nombre2);

    printf("Veuillez choisir le type d'operation\n");
    printf("1 = Addition\n");
    printf("2 = Soustraction\n");
    printf("3 = Multiplication\n");
    printf("4 = Division\n");
    scanf("%d", &operateur);

    switch (operateur)
    {
    case 1:
        resultat = addition(nombre1, nombre2);
        break;
    case 2:
        resultat = soustraction(nombre1, nombre2);
        break;
    case 3:
        resultat = multiplication(nombre1, nombre2);
        break;
    case 4:
        resultat = division(nombre1, nombre2);
        break;
    default:
        printf("Entrez un numero valide pour choisir l'operateur\n");
        break;
    }

    printf("Le resultat est %f\nAppuyer sur une touche pour continuer", resultat);

    getchar();
    getchar();
    return 0;
}
