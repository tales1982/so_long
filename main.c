
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
		ft_putstr("Stack antes da rotação:\n");
		peek(&a);
		ft_putstr("\n");
		rotate(&a);
		ft_putstr("Stack após a rotação:\n");
		peek(&a);
		ft_putstr("\n");
		return (0);
	}
	return (1);
}
