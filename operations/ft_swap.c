
#include "../push_swap.h"

void	ft_swap(int *stack_a, int *stack_b)
{
	int	aux;

	aux = *stack_a;
	*stack_a = *stack_b;
	*stack_b = aux;
}
