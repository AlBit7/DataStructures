#include <stdio.h>
#include "linkedList.h"

int main() {

    // inizializzo la mia lista
    List *lista = init();

    aggiungi(lista, 3);

    print(lista);

}