
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
		ft_putstr("Original..Stack_A\n");
		peek(&a);
		ft_putstr("\n");

		ft_putstr("Original..Stack_B\n");
		peek(&b);
		ft_putstr("\n");

		ft_putstr("Após swap..push_B\n");
		ft_putstr("Original..Stack_B\n");
		push_b(&a, &b);
		push_b(&a, &b);
		peek(&b);
		ft_putstr("\n");

		ft_putstr("Original..Stack_A\n");
		peek(&a);
		ft_putstr("\n");
		
		ft_putstr("Após swap..push_A\n");
		ft_putstr("Original..Stack_A\n");
		push_a(&b, &a);
		peek(&a);
		ft_putstr("\n");

		ft_putstr("Original..Stack_B\n");
		peek(&b);
		ft_putstr("\n");
		
		/*result = pop(&b);
		if (result != -1)
		{
			ft_putstr("Valor removido: ");
			ft_putnbr(result);
			ft_putstr("\n");
		}*/
		return (0);
	}
	return (1);
}
