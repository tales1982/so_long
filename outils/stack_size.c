/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:57:13 by tlima-de          #+#    #+#             */
/*   Updated: 2024/05/02 17:57:21 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

int	stack_size(Stack *s)
{
	int		count;
	Node	*current;

	count = 0;
	current = s->top;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
