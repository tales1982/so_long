
#include "./push_swap.h"



int	main(int argc, char **argv)
{
	int	value;

	// int	result;
	Stack a, b;
	
	if (argc > 0)
	{
		initStack(&a);
		initStack(&b);
		while (argc > 1)
		{
			value = ft_atoi(argv[argc-1]);
			push(&a, value);
			argc--;
		}
		//ft_putstr("Stack inicial:\n");
		//peek(&a);
		ft_swap_two_first_elements(&a);//sa
		ft_putstr("sa\n");
		push_b(&a,&b);//pb
		ft_putstr("pb\n");
		push_b(&a,&b);//pb
		ft_putstr("pb\n");
		push_b(&a,&b);//pb
		ft_putstr("pb\n");
		rotate(&a);//ra
		ft_putstr("ra\n");
		rotate(&b);//rb
		ft_putstr("rb\n");
		reverse_rotate(&a);//rra
		ft_putstr("rra\n");
		reverse_rotate(&b);//rrb
		ft_putstr("rrb\n");
		ft_swap_two_first_elements(&a);//sa
		ft_putstr("sa\n");
		push_a(&b,&a);//pa
		ft_putstr("pa\n");
		push_a(&b,&a);//pa
		ft_putstr("pa\n");
		push_a(&b,&a);//pa
		ft_putstr("pa\n");
		//ft_putstr("Stack ordenacao:\n");
		//peek(&a);
		//ft_putstr("\n");
		return (0);
	}
	return (1);
}
