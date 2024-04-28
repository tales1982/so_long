
#include "../push_swap.h"

// inicializa a pilha
void	initStack(Stack *a)
{
	a->top = NULL;
}

// Adciona um elemento na pilha_A
void	push(Stack *a, int data)
{
	Node	*newNode;

	newNode = (Node *)malloc(sizeof(Node));
	if (newNode == NULL)
	{
		return;
		//ft_putstr("Error \n");
	}
	else
	{
		newNode->data = data;
		newNode->next = a->top;
		a->top = newNode;
	}
}
//joga da pilha_A para pilha_B --> PB
void push_b(Stack *a, Stack *b)
{
	if(a->top == NULL)
		return;
	else
	{
		Node *temp = a->top;
		a->top = a->top->next;
		temp->next = b->top;
		b->top = temp; 
	}
}

//joga da pilha_>B para pilha_A --> PA
void push_a(Stack *b, Stack *a)
{
	if(b->top == NULL)
		return;
	else
	{
		Node *temp = b->top;
		b->top = b->top->next;
		temp->next = a->top;
		a->top = temp; 
	}
}
