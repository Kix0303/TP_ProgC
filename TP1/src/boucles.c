#include <stdio.h>

int main() {
    int compteur = 5; // Vous pouvez changer cette valeur pour tester
    int i = 1;

    if (compteur >= 10) {
        printf("La valeur de compteur doit être inférieure à 10.\n");
        return 1;
    }

    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
