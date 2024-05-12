#include "../push_swap.h"
#include <stddef.h> // Para o tipo size_t

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
