

#include "../push_swap.h"

int	is_sorted(STACK **stack)
{
	STACK	*tmp;

	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (-1);
		tmp = tmp->next;
	}
	return (1);
}

int	is_order(STACK **stack, int size)
{
	int	i;

	i = 0;
	while ((*stack)->index != 0)
	{
		rotate(stack);
		i++;
	}
	if (is_sorted(stack) == 1)
	{
		if (i > (size / 2))
		{
			if (size == 5 && i == 3)
				ft_putstr_fd("rra\n", 1);
			ft_putstr_fd("rra\n", 1);
		}
		else
			while (i-- > 0)
				ft_putstr_fd("ra\n", 1);
		return (1);
	}
	else
		while (i-- > 0)
			reverse(stack);
	return (0);
}

void	reset_index(STACK **stack)
{
	STACK	*lst;

	lst = *stack;
	while (lst)
	{
		lst->index = -1;
		lst = lst->next;
	}
	ps_index(stack);
}

void	rotate_to_min(STACK **stack, int size)
{
	int	i;

	i = 0;
	while ((*stack)->index != 0)
	{
		rotate(stack);
		i++;
	}
	if ((i > (size / 2)))
	{
		if (size == 5 && i == 3)
			ft_putstr_fd("rra\n", 1);
		ft_putstr_fd("rra\n", 1);
	}
	else
	{
		while (i > 0)
		{
			ft_putstr_fd("ra\n", 1);
			i--;
		}
	}
}
