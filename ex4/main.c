#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, x1, x2;

    printf("Résolution de l'équation ax² + bx + c = 0\n");
    printf("Entrez le coefficient a : ");
    scanf("%lf", &a);


    if (a == 0) {
        printf("Ce n'est pas une équation du second degré (a ne peut pas être nul).\n");
        return 1;
    }

    printf("Entrez le coefficient b : ");
    scanf("%lf", &b);

    printf("Entrez le coefficient c : ");
    scanf("%lf", &c);


    delta = b * b - 4 * a * c;

    printf("Discriminant Δ = %.2lf\n", delta);


    if (delta > 0) {

        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("Deux solutions réelles distinctes :\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    } else if (delta == 0) {

        x1 = -b / (2 * a);
        printf("Une solution réelle double :\n");
        printf("x = %.2lf\n", x1);
    } else {

        printf("Pas de solution réelle (Δ < 0).\n");
    }

    return 0;
}
