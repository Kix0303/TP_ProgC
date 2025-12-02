#include <stdio.h>

int main() {
    char c = 'A';
    int i = 1234;
    float f = 1.5f;

    char *pc = &c;
    int *pi = &i;
    float *pf = &f;

    printf("Avant :\n");
    printf("Adresse de i : %p, Valeur : %x\n", pi, i);
    printf("Adresse de f : %p, Valeur : %x\n", pf, *(int*)&f);

    // modification
    *pi -= 1;
    *pf = 1.0f;

    printf("\nAprès :\n");
    printf("Adresse de i : %p, Valeur : %x\n", pi, i);
    printf("Adresse de f : %p, Valeur : %x\n", pf, *(int*)&f);

    return 0;
}
