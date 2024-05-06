/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_rev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:53:09 by tlima-de          #+#    #+#             */
/*   Updated: 2024/04/30 18:53:13 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

void	reverse_rotate(Stack *s)
{
	Node	*last;
	Node	*second_last;

	if (s->top == NULL || s->top->next == NULL)
		return ;
	last = s->top;
	second_last = NULL;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	last->next = s->top;
	second_last->next = NULL;
	s->top = last;
}

// Função para mover pilha A
void move_stack_a(Stack *a) {
    reverse_rotate(a);
	ft_putstr("rra\n");
}

// Função para mover pilha B
void move_stack_b(Stack *b) {
    reverse_rotate(b);
	ft_putstr("rrb\n");
}

// Função para mover ambas as pilhas A e B
void move_both(Stack *a, Stack *b) {
    move_stack_a(a);
    move_stack_b(b);
	ft_putstr("rrr\n");
}


