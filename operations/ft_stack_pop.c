
#include "../push_swap.h"

// Remove um elemento da pilha
int	pop(Stack *s)
{
	if (s->top == NULL)
	{
		ft_putstr("Stack is empty!\n");
		return (-1);
	}
	else
	{
		Node *temp = s->top;
		int poppedData = temp->data;
		s->top = temp->next;
		free(temp);
		return (poppedData);
	}
}