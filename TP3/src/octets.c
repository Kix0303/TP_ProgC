#include <stdio.h>

void afficher_octets(void *p, int taille) {
    unsigned char *c = (unsigned char*)p;
    for (int i = 0; i < taille; i++)
        printf("%02x ", c[i]);
    printf("\n");
}

int main() {
    short s = 0x0302;
    int i = 0x04030201;
    long int l = 0x0807060504030201;
    float f = 2.5f;
    double d = 3.5;
    long double ld = 4.5;

    printf("Octets de short :\n");
    afficher_octets(&s, sizeof(short));

    printf("Octets de int :\n");
    afficher_octets(&i, sizeof(int));

    printf("Octets de long int :\n");
    afficher_octets(&l, sizeof(long int));

    printf("Octets de float :\n");
    afficher_octets(&f, sizeof(float));

    printf("Octets de double :\n");
    afficher_octets(&d, sizeof(double));

    printf("Octets de long double :\n");
    afficher_octets(&ld, sizeof(long double));

    return 0;
}
