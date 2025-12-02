#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int t[100];
    int i, j, tmp;
    int x, debut, fin, milieu, found = 0;

    srand(time(NULL));

    for (i = 0; i < 100; i++)
        t[i] = rand() % 200 - 100;

    for (i = 0; i < 100; i++)
        for (j = 0; j < 99 - i; j++)
            if (t[j] > t[j + 1]) {
                tmp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = tmp;
            }

    printf("Tableau trié :\n");
    for (i = 0; i < 100; i++)
        printf("%d ", t[i]);
    printf("\n");

    printf("Entrez l'entier à chercher : ");
    scanf("%d", &x);

    debut = 0;
    fin = 99;

    while (debut <= fin) {
        milieu = (debut + fin) / 2;

        if (t[milieu] == x) {
            found = 1;
            break;
        }
        if (x > t[milieu]) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }

    if (found) printf("entier présent\n");
    else       printf("entier absent\n");

    return 0;
}
