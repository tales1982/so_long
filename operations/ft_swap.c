
#include "../push_swap.h"

void	ft_swap(int *num_a, int *num_b)
{
	int	aux;

	aux = *num_a;
	*num_a = *num_b;
	*num_b = aux;
}
