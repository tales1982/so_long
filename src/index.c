
#include "../push_swap.h"

static STACK	*ps_get_min(STACK **stack)
{
	STACK	*lst;
	STACK	*lst_min;
	int		min;

	if (!(*stack))
		return (NULL);
	min = 0;
	lst_min = NULL;
	lst = *stack;
	while (lst)
	{
		if ((lst->index == -1) && (!min || lst->content < lst_min->content))
		{
			lst_min = lst;
			min = 1;
		}
		lst = lst->next;
	}
	return (lst_min);
}

void	ps_index(STACK **stack)
{
	STACK	*lst;
	int		index;

	index = 0;
	lst = ps_get_min(stack);
	while (lst)
	{
		lst->index = index++;
		lst = ps_get_min(stack);
	}
}
