
#include "../push_swap.h"
/*
Objetivo: Determina o número de bits necessários para representar o maior índice na lista ligada.

° Percorre a lista para encontrar o valor máximo de index.
° Calcula quantos bits são necessários para representar esse valor máximo usando deslocamento de bits à direita (>>).
 Isso é feito incrementando max_b até que o resultado do deslocamento seja zero.
*/

static int	calculate_max_index_bits(STACK **stack)
{
	STACK	*lst;
	int		max;
	int		max_b;

	lst = *stack;
	max = lst->index;
	max_b = 0;
	while (lst)
	{
		if (lst->index > max)
			max = lst->index;
		lst = lst->next;
	}
	while ((max >> max_b) != 0)
		max_b++;
	return (max_b);
}
/*
 Calcula o tamanho da lista ligada, ou seja, conta o número de elementos.

° Inicializa um contador i.
° Percorre a lista ligada, incrementando i para cada elemento até chegar ao final da lista (lst == NULL).
*/
int	get_stack_size(STACK *stack)
{
	int		i;
	STACK	*lst;

	lst = stack;
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
Objetivo: Ordena a lista ligada a_stack usando o algoritmo Radix Sort,
 aproveitando uma segunda lista ligada b_stack como auxiliar.

° Calcula o tamanho da lista e o número de bits necessário para representar o maior índice.
° Realiza o Radix Sort usando cada bit dos índices dos elementos para decidir se o elemento
 deve ser movido para a lista auxiliar b_stack (pb) ou se deve ser rotacionado dentro de a_stack (ra).
° Após processar todos os bits, elementos em b_stack são movidos de volta para a_stack (pa), completando a ordenação.
*/
void	radix_sort(STACK **a_stack, STACK **b_stack)
{
	STACK	*lst;
	int		i;
	int		j;
	int		size;
	int		max_b;

	lst = *a_stack;
	size = get_stack_size(*a_stack);
	max_b = calculate_max_index_bits(a_stack);
	i = -1;
	while (++i < max_b)
	{
		j = -1;
		while (++j < size)
		{
			lst = *a_stack;
			if (((lst->index >> i) & 1) == 0)
				pb(a_stack, b_stack);
			else
				ra(a_stack);
		}
		while (get_stack_size(*b_stack) != 0)
			pa(a_stack, b_stack);
	}
}
