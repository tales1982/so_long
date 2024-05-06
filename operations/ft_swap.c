/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:53:42 by tlima-de          #+#    #+#             */
/*   Updated: 2024/04/30 18:53:44 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Função para trocar os dois primeiros elementos de uma pilha
void ft_swap_two_first_elements(Stack *s) {
    Node *first;
    Node *second;
    int temp;

    if (s->top != NULL && s->top->next != NULL) {
        first = s->top;
        second = s->top->next;
        temp = first->data;
        first->data = second->data;
        second->data = temp;
    }
}

// Função para trocar os dois primeiros elementos da pilha A
void ft_swap_two_elements_stack_a(Stack *a) {
    ft_swap_two_first_elements(a);
	ft_putstr("sa\n");
}

// Função para trocar os dois primeiros elementos da pilha B
void ft_swap_two_elements_stack_b(Stack *b) {
    ft_swap_two_first_elements(b);
	ft_putstr("sb\n");
}

// Função para trocar os dois primeiros elementos das pilhas A e B
void ft_swap_two_elements_stacks_a_b(Stack *a, Stack *b) {
    ft_swap_two_first_elements(a);
    ft_swap_two_first_elements(b);
	ft_putstr("ss\n");
}
