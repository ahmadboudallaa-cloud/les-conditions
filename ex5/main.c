#include <stdio.h>
#include <stdlib.h>

int main() {
    int choix;
    double annees;
    double resultat;


    printf("=== Convertisseur d'années ===\n");
    printf("Entrez le nombre d'années : ");
    scanf("%lf", &annees);

    printf("\nChoisissez l'unité de conversion :\n");
    printf("1. Mois\n");
    printf("2. Jours\n");
    printf("3. Heures\n");
    printf("4. Minutes\n");
    printf("5. Secondes\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            resultat = annees * 12;
            printf("%.2lf années = %.2lf mois\n", annees, resultat);
            break;
        case 2:
            resultat = annees * 365;
            printf("%.2lf années = %.2lf jours\n", annees, resultat);
            break;
        case 3:
            resultat = annees * 365 * 24;
            printf("%.2lf années = %.2lf heures\n", annees, resultat);
            break;
        case 4:
            resultat = annees * 365 * 24 * 60;
            printf("%.2lf années = %.2lf minutes\n", annees, resultat);
            break;
        case 5:
            resultat = annees * 365 * 24 * 60 * 60;
            printf("%.2lf années = %.2lf secondes\n", annees, resultat);
            break;
        default:
            printf("Option invalide. Veuillez choisir une option entre 1 et 5.\n");
    }

    return 0;
}

