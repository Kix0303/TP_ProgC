#include <stdio.h>
#include <string.h>

int main() {
    char nom_fichier[100], phrase[200];
    printf("Entrez le nom du fichier : ");
    scanf("%s", nom_fichier);
    printf("Entrez la phrase à rechercher : ");
    getchar(); // pour consommer le retour chariot
    fgets(phrase, 200, stdin);
    
    FILE* f = fopen(nom_fichier, "r");
    if (!f) {
        printf("Impossible d'ouvrir le fichier.\n");
        return 1;
    }

    char ligne[256];
    int numero_ligne = 0;
    while (fgets(ligne, 256, f)) {
        numero_ligne++;
        int count = 0;
        char* pos = ligne;
        while ((pos = strstr(pos, phrase)) != NULL) {
            count++;
            pos += strlen(phrase);
        }
        if (count > 0) {
            printf("Ligne %d, %d fois\n", numero_ligne, count);
        }
    }
    fclose(f);
    return 0;
}
