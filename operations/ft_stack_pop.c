
#include "../push_swap.h"

// Remove o ultimo elemento da pilha
int	pop(Stack *a)
{
	if (a->top == NULL)
	{
		ft_putstr("Stack is empty!\n");
		return (-1);
	}
	else
	{
		Node *temp = a->top;
		int poppedData = temp->data;
		a->top = temp->next;
		free(temp);
		return (poppedData);
	}
}