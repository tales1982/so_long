
#include "../push_swap.h"

void	ft_swap_a(Stack *a)
{
	Node	*first;
	Node	*second;
	int		temp;

	// Verifica se existem pelo menos dois elementos.
	if (a->top != NULL && a->top->next != NULL)
	{
		first = a->top;
		second = a->top->next;
		temp = first->data;
		first->data = second->data;
		second->data = temp;
	}
	else
		return;
}
