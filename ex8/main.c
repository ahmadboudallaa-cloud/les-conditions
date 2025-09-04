#include <stdio.h>
#include <stdlib.h>


int main() {
    float moyenne;

    printf("Entrez la moyenne de l'etudiant : ");
    scanf("%f", &moyenne);
    if (moyenne < 10) {
        printf("Mention : Echec (Recale)\n");
    } else if (moyenne < 12) {
        printf("Mention : Passable\n");
    } else if (moyenne < 14) {
        printf("Mention : Assez Bien\n");
    } else if (moyenne < 16) {
        printf("Mention : Bien\n");
    } else {
        printf("Mention : Tres Bien\n");
    }

    return 0;
}
