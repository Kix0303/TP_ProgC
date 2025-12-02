#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

void init_liste(struct liste_couleurs* l) {
    l->head = NULL;
}

void insertion(struct couleur* c, struct liste_couleurs* l) {
    c->next = l->head;
    l->head = c;
}

void parcours(struct liste_couleurs* l) {
    struct couleur* tmp = l->head;
    while (tmp) {
        printf("R: %02x, G: %02x, B: %02x, A: %02x\n",
               tmp->r, tmp->g, tmp->b, tmp->a);
        tmp = tmp->next;
    }
}
