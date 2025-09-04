#include <stdio.h>
#include <stdlib.h>


int main() {
    int jour, mois, annee;
    char *noms_mois[] = {
        "Janvier", "F�vrier", "Mars", "Avril", "Mai", "Juin",
        "Juillet", "Ao�t", "Septembre", "Octobre", "Novembre", "D�cembre"
    };


    printf("Entrez une date au format JJ/MM/AAAA : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);


    if (mois < 1 || mois > 12) {
        printf("Mois invalide.\n");
        return 1;
    }


    printf("%02d-%s-%d\n", jour, noms_mois[mois - 1], annee);

    return 0;
}

