#include <stdio.h>

int main() {
    int n = 5; // Hauteur de la pyramide
    int i, j;

    // Génération de la pyramide
    for (i = 1; i <= n; i++) {
        // Afficher les espaces avant les nombres
        for (j = i; j < n; j++) {
            printf(" ");
        }

        // Afficher les nombres croissants de 1 à i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Afficher les nombres décroissants de i-1 à 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Passer à la ligne suivante
        printf("\n");
    }

    printf("Pyramide de hauteur %d générée avec succès !\n", n);
    return 0;
}
