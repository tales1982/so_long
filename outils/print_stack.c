
#include "../push_swap.h"

void	print_stack(Stack *s)
{
	Node *current = s->top;
	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	 printf("\n");//remover esta linha
}