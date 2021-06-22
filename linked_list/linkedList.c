#include "linkedList.h"

typedef struct nodo {
    TIPO valore;
    struct nodo *prossimo;
} node;

List *init() {

    node *primoNodo = (node*)malloc(sizeof(node));

    primoNodo->prossimo = NULL;

    return primoNodo;

}

void aggiungi(List *lista, TIPO elemento) {

    // alloco memoria per il prossimo nodo
    node *tmp = (node*)malloc(sizeof(node));

    // popolo il nodo successivo con l'elemento e NULL per dire che è alla fine della lista
    tmp->valore = elemento;
    tmp->prossimo = NULL;

    // aggiorno l'indirizzo del nodo precedente con quello del nodo appena creato
    lista = tmp;

}

TIPO prendi(List *lista, int indiceElemento) {

}

TIPO inserisci(List *lista, int indiceElemento, TIPO valore) {

}

TIPO togli(List *lista, int indiceElemento) {

}

void print(List *lista) {

    node *elemento = lista;

    while (elemento->prossimo != NULL) {
        
        printf("%lf", elemento->valore);
        elemento = elemento->prossimo;

    }

}
