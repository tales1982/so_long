/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_peek.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:37:43 by tlima-de          #+#    #+#             */
/*   Updated: 2024/05/11 07:50:28 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_stack(t_lst *stack)
{
	t_lst	*current;

	current = stack;
	if (current == NULL)
	{
		printf("Stack is empty!\n");
	}
	else
	{
		printf("Stack content:\n");
		while (current != NULL)
		{
			printf("Value: %d, Index: %d\n", current->content, current->index);
			current = current->next;
		}
	}
}
