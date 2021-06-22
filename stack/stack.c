#include "stack.h"

typedef struct myNode
{
    TIPO valore;
    struct myNode *next;
} node;

void push(Stack *stack, TIPO vaolore)
{
    node *nuovoElemento = (node *)malloc(sizeof(node));

    nuovoElemento->valore = vaolore;
    nuovoElemento->next = *stack;
    *stack = nuovoElemento;
}

TIPO pop(Stack *stack)
{

    if (*stack == NULL)
        return STACK_VUOTO;

    TIPO ris = (*stack)->valore;

    node *tmp = *stack;
    *stack = (*stack)->next;
    free(tmp);

    return ris;
}

TIPO cima(Stack *stack)
{
    if (*stack == NULL)
        return STACK_VUOTO;

    return (*stack)->valore;
}