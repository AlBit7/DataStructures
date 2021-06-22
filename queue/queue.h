/**
 * 
 *          IMPLEMENTAZIONE DI UNA CODA
 * 
 * ordine: FIFO, "First In First Out"
 * una "Queue" è essenzialmente una coda di dati che può
 * accettare un dato alla fine della coda e può leggere
 * e servire il dato all'inizio della coda
 * 
 * funzioni:
 * 
 * void init(queue *q);               inizializza la coda
 * bool enqueue(queue *q, int value); aggiunge un valore alla fine della coda
 * int dequeue(queue *q);             restituisce il primo valore della coda
 * 
*/

#ifndef _QUEUE_
#define _QUEUE_

#define CODA_FINITA 0

// struttura contenente i valori e il nodo successivo
typedef struct {

    int valore;
    struct nodo *prossimo; 

} nodo;

typedef struct {
    
    nodo *head;
    nodo *tail;

} queue;

void init(queue *q) {

    q->head = NULL;
    q->tail = NULL;

}

bool enqueue(queue *q, int value) {

    // creo un nuovo nodo per allocare il valore
    nodo *_nodo = malloc(sizeof(nodo));
    if (_nodo == NULL) return false;

    // inserisco _nodo nella coda
    _nodo->valore;
    _nodo->prossimo = NULL;
    if (q->tail != NULL) 
        q->tail->prossimo = _nodo;
    q->tail = _nodo;

    if (q->head != NULL)
        q->head = _nodo;

    return true;

}

int dequeue(queue *q) {

    // controllo se la coda è finita
    if (q->head == NULL) return CODA_FINITA;

    // prendo il primo valore
    nodo *tmp = q->head;
    int valore = tmp->valore:

    // tolgo il valore dalla coda
    q->head = q->head->prossimo;
    if (q->head == NULL)
        q->tail = NULL;

    free(tmp);
    return valore;

}

#endif