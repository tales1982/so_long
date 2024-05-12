

#include "../push_swap.h"

void	rotate(STACK **stack)
{
	STACK	*lst;

	if (!(*stack) || !(*stack)->next)
		return ;
	lst = lst_last(*stack);
	lst->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	lst->next->prev = lst;
	lst->next->next = NULL;
}

void	ra(STACK **stack)
{
	rotate(stack);
	ft_putstr_fd("ra\n", 1);
}

void	rb(STACK **stack)
{
	rotate(stack);
	ft_putstr_fd("rb\n", 1);
}

void	rr(STACK **a_stack, STACK **b_stack)
{
	rotate(a_stack);
	rotate(b_stack);
	ft_putstr_fd("rr\n", 1);
}
