#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int t[100];
    int x, i, found = 0;

    srand(time(NULL));

    printf("Tableau :\n");
    for (i = 0; i < 100; i++) {
        t[i] = rand() % 200 - 100;
        printf("%d ", t[i]);
    }
    printf("\n");

    printf("Entrez l'entier à chercher : ");
    scanf("%d", &x);

    for (i = 0; i < 100; i++) {
        if (t[i] == x) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("entier présent\n");
    else
        printf("entier absent\n");

    return 0;
}
