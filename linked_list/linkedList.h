#ifndef _LINKED_LIST_
#define _LINKED_LIST_

#include <stdlib.h>

#ifndef TIPO
#define TIPO double
#endif

typedef struct nodo node;

typedef node *List;

// dichiarazione funzioni
List *init();
TIPO prendi(List *lista, int indiceElemento);
void aggiungi(List *lista, TIPO elemento);
TIPO inserisci(List *lista, int indiceElemento, TIPO valore);
TIPO togli(List *lista, int indiceElemento);
void print(List *lista);

#endif
