
#include "../push_swap.h"

// Mostra o elemento no top da pilha sem removelo.
void	peek(Stack *a)
{
	Node *current = a->top;
	if (current == NULL)
		ft_putstr("Stack is empty!\n");
	else
	{
		while (current != NULL)
		{
			ft_putnbr(current->data);
			ft_putchar('\n');
			current = current->next;
		}
	}
}