
#include "./push_swap.h"

int	main(int argc, char **argv)
{
	//int	result;

	Stack a, b;
	if (argc > 0)
	{
		initStack(&a);
		initStack(&b);
		push(&a, 20);
		push(&a, 40);
		push(&a, 30);
		push(&a, 10);
		push(&a, 60);
		push(&a, 50);
		/*result = pop(&a);
		if (result != -1)
		{
			ft_putstr("Valor removido: ");
			ft_putnbr(result);
			ft_putstr("\n");
		}*/
		ft_putstr("\n");
		peek(&a);
		ft_putstr(argv[0]);
		return (0);
	}
	return (1);
}
