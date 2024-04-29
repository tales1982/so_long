
#include "../push_swap.h"

//rotate --> ra --> rb --> rr depois seleciona a pilha
void    rotate(Stack *s)
{
    if (s->top == NULL || s->top->next == NULL) {
        // Se a pilha está vazia ou tem apenas um elemento, não precisa fazer nada
        return;
    }
   Node *first = s->top;
   Node *last = s->top;

//encontra o ultimo elemento da lista
   while (last->next != NULL)
   {
        last = last->next;
   }
   s->top = s->top->next;
   last->next = first;
   //o ultimo deve aponta para NULL
   first->next = NULL;
   
}