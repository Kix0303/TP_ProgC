#include <stdio.h>

int main() {
    char s1[50] = "Hello";
    char s2[50] = " World!";
    char copie[50];
    char concat[100];

    // 1) Calcul longueur s1
    int len = 0;
    while(s1[len] != '\0') len++;

    printf("Longueur : %d\n", len);

    // 2) Copier s1 dans copie
    int i = 0;
    while(s1[i] != '\0') {
        copie[i] = s1[i];
        i++;
    }
    copie[i] = '\0';
    printf("Copie : %s\n", copie);

    // 3) Concaténer s1 + s2
    int j = 0;
    for(i = 0; s1[i] != '\0'; i++)
        concat[j++] = s1[i];

    for(i = 0; s2[i] != '\0'; i++)
        concat[j++] = s2[i];

    concat[j] = '\0';

    printf("Concaténation : %s\n", concat);
    return 0;
}
