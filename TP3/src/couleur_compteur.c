#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    unsigned char r, g, b, a;
} Couleur;

typedef struct {
    Couleur c;
    int count;
} Distinct;

int egal(Couleur c1, Couleur c2) {
    return (c1.r == c2.r && c1.g == c2.g && c1.b == c2.b && c1.a == c2.a);
}

int main() {
    Couleur t[100];
    Distinct d[100];
    int distinct_count = 0;
    int i, j, found;

    srand(time(NULL));

    for (i = 0; i < 100; i++) {
        t[i].r = rand() % 256;
        t[i].g = rand() % 256;
        t[i].b = rand() % 256;
        t[i].a = 255;
    }

    for (i = 0; i < 100; i++) {
        found = 0;

        for (j = 0; j < distinct_count; j++) {
            if (egal(t[i], d[j].c)) {
                d[j].count++;
                found = 1;
                break;
            }
        }

        if (!found) {
            d[distinct_count].c = t[i];
            d[distinct_count].count = 1;
            distinct_count++;
        }
    }

    printf("Couleurs distinctes :\n");
    for (i = 0; i < distinct_count; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               d[i].c.r, d[i].c.g, d[i].c.b, d[i].c.a, d[i].count);
    }

    return 0;
}
