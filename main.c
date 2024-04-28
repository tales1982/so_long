
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
		ft_putstr("Stack_A antes da rotação:\n");
		peek(&a);
		rotate(&a);
		ft_putstr("\nStack_A depois da rotação:\n");
		peek(&a);
		ft_putstr("==============================\n");
		push_b(&a, &b);
		push_b(&a, &b);
		push_b(&a, &b);
		push_b(&a, &b);
		push_b(&a, &b);
		push_b(&a, &b);
		ft_putstr("Stack_B antes da rotação:\n");
		peek(&b);
		rotate(&b);
		ft_putstr("\nStack_B depois da rotação:\n");
		peek(&b);
		ft_putstr("\n");
		return (0);
	}
	return (1);
}
