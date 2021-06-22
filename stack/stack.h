#ifndef _STACK_
#define _STACK_

#include <stdlib.h>

#ifndef STACK_VUOTO
#define STACK_VUOTO -8
#endif

#ifndef TIPO
#define TIPO double
#endif

typedef struct myNode node;

typedef node *Stack;

void push(Stack *stack, TIPO vaolore);
double pop(Stack *stack);
double cima(Stack *stack);

#endif
