#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ti[10];
    float tf[10];

    srand(time(NULL));

    // Remplir les tableaux
    for(int i = 0; i < 10; i++) {
        ti[i] = rand() % 100;
        tf[i] = (rand() % 1000) / 10.0;
    }

    printf("Tableaux AVANT :\n");
    for(int i = 0; i < 10; i++)
        printf("%d ", ti[i]);
    printf("\n");

    for(int i = 0; i < 10; i++)
        printf("%.2f ", tf[i]);
    printf("\n");

    // Pointeurs
    int *pI = ti;
    float *pF = tf;

    // Multiplier par 3 les indices pairs
    for(int i = 0; i < 10; i++) {
        if(i % 2 == 0) {
            *(pI + i) *= 3;
            *(pF + i) *= 3;
        }
    }

    printf("\nTableaux APRES :\n");
    for(int i = 0; i < 10; i++)
        printf("%d ", ti[i]);
    printf("\n");

    for(int i = 0; i < 10; i++)
        printf("%.2f ", tf[i]);
    printf("\n");

    return 0;
}
