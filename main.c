
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
		ft_putstr("Original..Stack_A\n");
		peek(&a);
		ft_putstr("\n");


		push(&b, 10);
		push(&b, 60);
		push(&b, 50);
		ft_putstr("Original..Stack_B\n");
		peek(&b);
		ft_putstr("\n");
		ft_swap_two_first_elements(&a);
		ft_putstr("Copia..Stack_A\n");
		peek(&a);
		ft_putstr("\n");
		ft_putstr("Copia..Stack_A\n");
		ft_swap_two_first_elements(&b);
		peek(&b);
		ft_putstr("\n");
		ft_putstr(argv[0]);
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
