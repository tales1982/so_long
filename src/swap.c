
#include "../push_swap.h"

static void	swap(STACK **stack)
{
	int	index;
	int	content;

	if (!(*stack)->next)
		return ;
	content = (*stack)->next->content;
	index = (*stack)->next->index;
	(*stack)->next->content = (*stack)->content;
	(*stack)->next->index = (*stack)->index;
	(*stack)->content = content;
	(*stack)->index = index;
}

void	sa(STACK **stack)
{
	swap(stack);
	ft_putstr_fd("sa\n", 1);
}

void	sb(STACK **stack)
{
	swap(stack);
	ft_putstr_fd("sb\n", 1);
}

void	ss(STACK **a_stack, STACK **b_stack)
{
	swap(a_stack);
	swap(b_stack);
	ft_putstr_fd("ss\n", 1);
}
