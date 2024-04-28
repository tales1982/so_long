
#include "../push_swap.h"

// Mostra o elemento no top da pilha sem removelo.
void	peek(Stack *s)
{
	Node *current = s->top;
	if (current == NULL)
		ft_putstr("Stack is empty!\n");
	else
	{
		ft_putstr("Stack elements are:\n");
		while (current != NULL)
		{
			ft_putnbr(current->data);
			ft_putchar('\n');
			current = current->next;
		}
	}
}