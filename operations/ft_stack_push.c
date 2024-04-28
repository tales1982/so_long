
#include "../push_swap.h"

// inicializa a pilha
void	initStack(Stack *s)
{
	s->top = NULL;
}

// Adciona um elemento na pilha
void	push(Stack *s, int data)
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
		newNode->next = s->top;
		s->top = newNode;
	}
}
