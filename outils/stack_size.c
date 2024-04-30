
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
