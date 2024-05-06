#include "../push_swap.h"

void	quick_sort_stack(Stack *a, Stack *b)
{
	int	pivot;
	int	element;

	if (stack_size(a) < 2)
		return ;
	Stack less, greater;
	initStack(&less);
	initStack(&greater);
	pivot = a->top->data;
	ft_pop(a);
	while (!ft_is_empty(a))
	{
		element = a->top->data;
		ft_pop(a);
		if (element <= pivot)
		{
			ft_push_a(&less, element);
			ft_putstr("pa\n");
			// ft_putstr("**** 1 ****\n");
		}
		else
		{
			ft_push_b(&greater, element);
			ft_putstr("pb\n");
			// ft_putstr("**** 2 ****\n");
		}
	}
	quick_sort_stack(&less, b);
	quick_sort_stack(&greater, b);
	while (!ft_is_empty(&greater))
	{
		ft_push_b(b, greater.top->data);
		ft_putstr("pb\n");
		// ft_putstr("**** 3 ****\n");
		ft_pop(&greater);
	}
	ft_push(b, pivot);
	while (!ft_is_empty(&less))
	{
		ft_push_a(b, less.top->data);
		ft_putstr("pa\n");
		// ft_putstr("**** 3 ****\n");
		ft_pop(&less);
	}
	while (!ft_is_empty(b))
	{
		ft_push_a(a, b->top->data);
		ft_putstr("pa\n");
		// ft_putstr("**** 4 ****\n");
		ft_pop(b);
	}
}

void	push_swap(Stack *a)
{
	Stack	b;

	initStack(&b);
	quick_sort_stack(a, &b);


}
