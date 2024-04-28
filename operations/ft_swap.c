
#include "../push_swap.h"
//Altera os elementos o primeiro com o segundo elemento
void	ft_swap_two_first_elements(Stack *s)
{
	Node	*first;
	Node	*second;
	int		temp;

	// swap -->SA and -->SB
	// Verifica se existem pelo menos dois elementos.
	if (s->top != NULL && s->top->next != NULL)
	{
		first = s->top;
		second = s->top->next;
		temp = first->data;
		first->data = second->data;
		second->data = temp;
	}
	else
		return ;
}
void	ft_swap_two_elements_stacks_a_b(Stack *a, Stack *b)
{
	//swap --> SS
	if ((a->top != NULL && a->top->next != NULL) && (b->top != NULL
			&& b->top->next != NULL))
	{
			ft_swap_two_first_elements(a);
			ft_swap_two_first_elements(b);
	}
	else
		return ;
}