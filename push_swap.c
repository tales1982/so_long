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

int	main(int argc, char **argv)
{
	int		value;
	Stack	a;
	Stack	b;
	int		i;

	initStack(&a);
	initStack(&b);
	i = 1;
	// altera par se for == 2 executar o splite
	if (argc > 1)
	{
		while (i < argc)
		{
			value = ft_atoi(argv[i]);
			ft_push(&a, value);
			i++;
		}
		//peek(&a); // Exibir estado inicial
		//ft_putchar('\n');
		//ft_putstr("PILHA-->A\n");
		push_swap(&a);
		//ft_putstr("PILHA-->B\n");
		push_swap(&b);
		//ft_putchar('\n');
		//ft_putchar('\n');
		//ft_putstr("Pilha A Ordenada\n\n");
		//peek(&a); // Exibir estado após ordenação

		return (0);
	}
	return (1);
}
Stack	a;