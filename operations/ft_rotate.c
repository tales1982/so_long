/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:52:52 by tlima-de          #+#    #+#             */
/*   Updated: 2024/04/30 18:52:54 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

//rotate --> rr depois seleciona a pilha
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
void rotate_stack_a(Stack *a) {
    rotate(a);
    ft_putstr("ra\n");
}

// Função para rotacionar a pilha B
void rotate_stack_b(Stack *b) {
    rotate(b);
    ft_putstr("rb\n");
}

// Função para rotacionar ambas as pilhas A e B
void rotate_both(Stack *a, Stack *b) {
    rotate_stack_a(a);
    rotate_stack_b(b);
    ft_putstr("rr\n");
}