
#include "./push_swap.h"

int	main(int argc, char **argv)
{
	int	i;
	int	value;

	// int	result;
	Stack a, b;
	i = 1;
	if (argc > 0)
	{
		initStack(&a);
		initStack(&b);
		while (i < argc)
		{
			value = ft_atoi(argv[i]);
			push(&a, value);
			i++;
		}
		ft_putstr("Stack inicial:\n");
    peek(&a);
    ft_putstr("\n");

    // Aplica reverse rotate
    reverse_rotate(&a);
	reverse_rotate(&a);
	reverse_rotate(&a);

    // Imprime estado da pilha após reverse rotate
    ft_putstr("Stack após reverse rotate:\n");
    peek(&a);
    ft_putstr("\n");
		return (0);
	}
	return (1);
}
