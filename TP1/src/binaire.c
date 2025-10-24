#include <stdio.h>

void afficher_binaire(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int bits[32];  // tableau pour stocker les bits (taille 32 pour int standard)
    int i = 0;

    int nombre = n;

    // Extraire les bits en divisant par 2 et stocker les restes
    while (nombre > 0) {
        bits[i] = nombre % 2;
        nombre = nombre / 2;
        i++;
    }

    // Afficher les bits dans l'ordre inverse (du bit de poids fort au faible)
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]);
    }
}

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        printf("Nombre %d en binaire : ", nombres[i]);
        afficher_binaire(nombres[i]);
        printf("\n");
    }

    return 0;
}
