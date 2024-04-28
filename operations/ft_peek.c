
#include "../push_swap.h"

// Mostra o elemento no top da pilha sem removelo.
int	peek(Stack *s)
{
	if (s->top == NULL)
	{
		ft_putstr("Stack is empty!\n");
		return (-1);
	}
	else
	{
		return (s->top->data);
	}
}