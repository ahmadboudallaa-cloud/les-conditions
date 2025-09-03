#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, resultat;

    printf("Entrez le premier entier : ");
    scanf("%d", &a);

    printf("Entrez le deuxième entier : ");
    scanf("%d", &b);

    if (a == b) {
        resultat = 3 * (a + b);
    } else {
        resultat = a + b;
    }

    printf("Résultat : %d\n", resultat);

    return 0;
}
