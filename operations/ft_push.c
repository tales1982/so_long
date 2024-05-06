/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:37:58 by tlima-de          #+#    #+#             */
/*   Updated: 2024/04/29 19:38:01 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

// inicializa a pilha
void	initStack(Stack *a)
{
	a->top = NULL;
}

// Adciona um elemento na pilha_A
void	ft_push(Stack *s, int data)
{
	Node	*newNode;

	newNode = (Node *)malloc(sizeof(Node));
	if (newNode == NULL)
	{
		ft_putstr("Error \n");
		return;
	}
	else
	{
		newNode->data = data;
		newNode->next = s->top;
		s->top = newNode;
	}
}
void	ft_push_a(Stack *a, int data)
{
	ft_push(a,data);
	ft_putstr("pa\n");
}

void	ft_push_b(Stack *b, int data)
{
	ft_push(b,data);
	ft_putstr("pb\n");
}
