#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[20];
    char prenom[20];
    char adresse[100];
    float note1;
    float note2;
};

int main() {
    struct Etudiant etu[5];

    strcpy(etu[0].nom, "Dupont");
    strcpy(etu[0].prenom, "Marie");
    strcpy(etu[0].adresse, "20 Rue A");
    etu[0].note1 = 16.5;
    etu[0].note2 = 12.1;

    strcpy(etu[1].nom, "Martin");
    strcpy(etu[1].prenom, "Pierre");
    strcpy(etu[1].adresse, "30 Avenue B");
    etu[1].note1 = 14.0;
    etu[1].note2 = 14.1;

    // ... tu complètes les 3 autres étudiants pareil

    for(int i = 0; i < 2; i++) {  // changer à 5 pour tout afficher
        printf("\nÉtudiant %d :\n", i+1);
        printf("Nom : %s\n", etu[i].nom);
        printf("Prénom : %s\n", etu[i].prenom);
        printf("Adresse : %s\n", etu[i].adresse);
        printf("Note 1 : %.2f\n", etu[i].note1);
        printf("Note 2 : %.2f\n", etu[i].note2);
    }

    return 0;
}
