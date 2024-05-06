/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_peek.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:37:43 by tlima-de          #+#    #+#             */
/*   Updated: 2024/04/29 19:37:47 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

// Mostra o elemento no top da pilha sem removelo.
void	peek(Stack *a)
{
	Node *current = a->top;
	if (current == NULL)
		ft_putstr("Stack is empty!\n");
	else
	{
		while (current != NULL)
		{
			ft_putnbr(current->data);
			ft_putchar('\n');
			current = current->next;
		}
	}
}
