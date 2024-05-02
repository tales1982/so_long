/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:47:14 by tlima-de          #+#    #+#             */
/*   Updated: 2024/04/24 18:47:21 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"


int	isEmpty(Stack *s)
{
	return (s->top == NULL);
}

void	quick_sort_stack(Stack *a, Stack *b)
{
	int	pivot;
	int	element;

	if (stack_size(a) < 2)
		return ; // Uma pilha com 0 ou 1 elemento já está ordenada
	Stack less, greater;
	initStack(&less);
	initStack(&greater);
	pivot = a->top->data;
	ft_pop(a); // Remove o pivô da pilha original
	// Dividindo elementos em menos e maior que o pivô
	while (!isEmpty(a))
	{
		element = a->top->data;
		ft_pop(a);
		if (element <= pivot)
		{
			ft_push(&less, element);
			ft_putstr("pa\n");
		}
		else
		{
			ft_push(&greater, element);
			ft_putstr("pb\n");
		}
	}
	// Ordena recursivamente cada pilha
	quick_sort_stack(&less, b);
	//ft_putstr("pa\n");
	quick_sort_stack(&greater, b);
	//ft_putstr("pb\n");
	// Combinar tudo de volta na pilha original, respeitando a ordem
	while (!isEmpty(&greater))
	{
		ft_push(b, greater.top->data);
		//ft_putstr("pb\n");
		ft_pop(&greater);
	}
	ft_push(b, pivot); // Adiciona o pivô de volta
	while (!isEmpty(&less))
	{
		ft_push(b, less.top->data);
		ft_putstr("pa\n");
		ft_pop(&less);
	}
	// Move tudo de volta para a pilha original
	while (!isEmpty(b))
	{
		ft_push(a, b->top->data);
		//ft_putstr("p\n");
		ft_pop(b);
	}
}

void	push_swap(Stack *a)
{
	Stack	b;

	initStack(&b);
	quick_sort_stack(a, &b);
}

int	main(int argc, char **argv)
{
	int		value;
	Stack	a;
	int		i;

	initStack(&a);
	i = 1; // Inicia o índice no primeiro argumento após o nome do programa
	if (argc > 1)
	{
		while (i < argc)
		{
			value = ft_atoi(argv[i]);
			ft_push(&a, value);
			i++;
		}
		peek(&a); // Exibir estado inicial
		ft_putchar('\n');
		push_swap(&a);
		peek(&a); // Exibir estado após ordenação
		return (0);
	}
	return (1);
}
