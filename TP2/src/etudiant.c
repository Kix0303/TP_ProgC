#include <stdio.h>

int main() {
    char nom[5][20] = {"Dupont", "Martin", "Durand", "Petit", "Morel"};
    char prenom[5][20] = {"Marie", "Pierre", "Luc", "Anna", "Julie"};
    char adresse[5][100] = {
        "20 Rue A",
        "30 Avenue B",
        "10 Boulevard C",
        "5 Rue D",
        "17 Avenue E"
    };

    float note_prog[5] = {16.5, 14.0, 13.5, 18.0, 15.5};
    float note_sys[5]  = {12.1, 14.1, 11.5, 16.2, 13.8};

    for(int i = 0; i < 5; i++) {
        printf("\nÉtudiant %d :\n", i+1);
        printf("Nom : %s\n", nom[i]);
        printf("Prénom : %s\n", prenom[i]);
        printf("Adresse : %s\n", adresse[i]);
        printf("Note Prog : %.2f\n", note_prog[i]);
        printf("Note Sys : %.2f\n", note_sys[i]);
    }

    return 0;
}
