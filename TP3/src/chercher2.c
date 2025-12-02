#include <stdio.h>

int egales(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] != b[i])
            return 0;
        i++;
    }
    return 1;
}

int main() {
    char phrases[10][200] = {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    char recherche[200];
    int i, found = 0;

    printf("Entrez une phrase à chercher : ");
    fgets(recherche, 200, stdin);

    int len = 0;
    while (recherche[len] != '\0') len++;
    if (len > 0 && recherche[len-1] == '\n')
        recherche[len-1] = '\0';

    for (i = 0; i < 10; i++) {
        if (egales(phrases[i], recherche)) {
            found = 1;
            break;
        }
    }

    if (found) printf("Phrase trouvée\n");
    else       printf("Phrase non trouvée\n");

    return 0;
}

