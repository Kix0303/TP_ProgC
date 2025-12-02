#include <stdio.h>
#include "operator.h"
#include "fichier.h"
#include "liste.h"

int main() {
    int choix;
    printf("Choisissez l'exercice (1=Opérateur, 2=Fichier, 3=Liste couleurs) : ");
    scanf("%d", &choix);

    if (choix == 1) {
        int a, b;
        char op;
        printf("Entrez num1 num2 et opérateur (+,-,*,/,%%,&,|,~) : ");
        scanf("%d %d %c", &a, &b, &op);
        switch(op) {
            case '+': printf("Résultat : %d\n", somme(a,b)); break;
            case '-': printf("Résultat : %d\n", difference(a,b)); break;
            case '*': printf("Résultat : %d\n", produit(a,b)); break;
            case '/': printf("Résultat : %d\n", quotient(a,b)); break;
            case '%': printf("Résultat : %d\n", modulo(a,b)); break;
            case '&': printf("Résultat : %d\n", et(a,b)); break;
            case '|': printf("Résultat : %d\n", ou(a,b)); break;
            case '~': printf("Résultat : %d\n", negation(a)); break;
            default: printf("Opérateur inconnu.\n");
        }
    }
    else if (choix == 2) {
        int action;
        printf("1=Lire, 2=Écrire : ");
        scanf("%d", &action);
        if (action == 1) {
            char nom[100];
            printf("Nom du fichier : ");
            scanf("%s", nom);
            lire_fichier(nom);
        } else {
            char nom[100], msg[200];
            printf("Nom du fichier : ");
            scanf("%s", nom);
            getchar();
            printf("Message : ");
            fgets(msg, 200, stdin);
            ecrire_dans_fichier(nom, msg);
        }
    }
    else if (choix == 3) {
        struct liste_couleurs ma_liste;
        init_liste(&ma_liste);

        for (int i=0; i<10; i++) {
            struct couleur* c = malloc(sizeof(struct couleur));
            c->r = i*20;
            c->g = i*10;
            c->b = i*5;
            c->a = 255;
            insertion(c, &ma_liste);
        }
        printf("Liste des couleurs :\n");
        parcours(&ma_liste);
    }
    return 0;
}
