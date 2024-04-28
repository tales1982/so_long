
#include "./push_swap.h"

int	main(int argc, char **argv)
{
	Stack	s;

	if (argc > 0)
	{
		initStack(&s);
		push(&s, 20);
		push(&s, 40);
		push(&s, 30);
		push(&s, 10);
		push(&s, 60);
		push(&s, 50);
		ft_putstr("\n");
		  peek(&s);
		ft_putstr(argv[0]);
		return (0);
	}
	return (1);
}
