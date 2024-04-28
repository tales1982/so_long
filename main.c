
#include "./push_swap.h"

int	main(int argc, char **argv)
{
	Stack	s;

	if (argc > 0)
	{
		initStack(&s);
		push(&s, 10);
		push(&s, 20);
		push(&s, 30);
		ft_putstr("\nItem popped..: ");
		ft_putnbr(pop(&s));
		ft_putstr("\nTop item..: ");
		ft_putnbr(pop(&s));
		ft_putstr("\n");
		ft_putstr("\n");
		ft_putstr(argv[0]);
		return (0);
	}
	return (1);
}
