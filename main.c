
#include "./push_swap.h"

int	main(int argc, char **argv)
{
	int	result;

	Stack stack_a, stack_b;
	if (argc > 0)
	{
		initStack(&stack_a);
		initStack(&stack_b);
		push(&stack_a, 20);
		push(&stack_a, 40);
		push(&stack_a, 30);
		push(&stack_a, 10);
		push(&stack_a, 60);
		push(&stack_a, 50);
		result = pop(&stack_a);
		if (result != -1)
		{
			ft_putstr("Valor removido: ");
			ft_putnbr(result);
			ft_putstr("\n");
		}
		ft_putstr("\n");
		peek(&stack_a);
		ft_putstr(argv[0]);
		return (0);
	}
	return (1);
}
