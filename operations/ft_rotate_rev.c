
#include "../push_swap.h"

void	reverse_rotate(Stack *s)
{
	Node	*last;
	Node	*second_last;

	if (s->top == NULL || s->top->next == NULL)
	{
		// Se a pilha está vazia ou tem apenas um elemento,não há necessidade de rotação
			
		return ;
	}
	last = s->top;
	second_last = NULL;
	// Encontrar o último e o penúltimo elemento
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	// O último elemento aponta para o topo antigo
	last->next = s->top;
	// O penúltimo agora é o último
	second_last->next = NULL;
	// Atualiza o topo para ser o último elemento
	s->top = last;
}
