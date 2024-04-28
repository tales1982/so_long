
#include "../push_swap.h"

// inicializa a pilha
void	initStack(Stack *a)
{
	a->top = NULL;
}

// Adciona um elemento na pilha
void	push(Stack *a, int data)
{
	Node	*newNode;

	newNode = (Node *)malloc(sizeof(Node));
	if (newNode == NULL)
	{
		ft_putstr("Error \n");
	}
	else
	{
		newNode->data = data;
		newNode->next = a->top;
		a->top = newNode;
	}
}
