

#include "../push_swap.h"

/*
Verifica se os elementos da lista estão ordenados de forma crescente com base em seus índices.
°Itera através da lista ligada.
°Se encontrar qualquer elemento cujo índice seja maior que o do elemento seguinte,
 retorna -1 (indicando que a lista não está ordenada).
°Se a lista inteira é percorrida sem encontrar tais elementos, retorna 1 (indicando que a lista está ordenada).

*/
int	is_sorted(STACK **stack)
{
	STACK	*tmp;

	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (-1);
		tmp = tmp->next;
	}
	return (1);
}
/*
Ajusta a lista para que o elemento com índice 0 esteja na parte superior da pilha e verifica se a lista está ordenada.
°Gira a lista até que o elemento com índice 0 esteja no topo.
°Se a lista está ordenada (is_sorted retorna 1), verifica se foi girada mais da metade da sua
capacidade total e executa a rotação reversa adequada, enquanto imprime as ações.
°Se não está ordenada, executa uma série de reversões.
°Retorna 1 se a lista estiver ordenada; caso contrário, retorna 0.
*/
int	is_order(STACK **stack, int size)
{
	int	i;

	i = 0;
	while ((*stack)->index != 0)
	{
		rotate(stack);
		i++;
	}
	if (is_sorted(stack) == 1)
	{
		if (i > (size / 2))
		{
			if (size == 5 && i == 3)
				ft_putstr_fd("rra\n", 1);
			ft_putstr_fd("rra\n", 1);
		}
		else
			while (i-- > 0)
				ft_putstr_fd("ra\n", 1);
		return (1);
	}
	else
		while (i-- > 0)
			reverse(stack);
	return (0);
}
/*
Reseta os índices de todos os elementos para -1 e depois reindexa todos os elementos baseado em seu conteúdo.
° Percorre a lista ligada, resetando o índice de cada elemento para -1.
° Chama uma função (index_all_elements_by_content) para reindexar os elementos de acordo com alguma métrica de conteúdo.
*/
void	reset_index(STACK **stack)
{
	STACK	*lst;

	lst = *stack;
	while (lst)
	{
		lst->index = -1;
		lst = lst->next;
	}
	index_all_elements_by_content(stack);
}

/*
Gira a pilha até que o elemento com índice 0 esteja no topo, escolhendo a rotação que usa o menor número de movimentos possíveis.
 °Gira a lista até que o elemento com índice 0 esteja no topo.
 °Baseado no número de rotações feitas, decide se continua girando na mesma direção ou se faz
  rotações na direção oposta para minimizar o total de movimentos, imprimindo cada movimento.
*/
void	rotate_to_min(STACK **stack, int size)
{
	int	i;

	i = 0;
	while ((*stack)->index != 0)
	{
		rotate(stack);
		i++;
	}
	if ((i > (size / 2)))
	{
		if (size == 5 && i == 3)
			ft_putstr_fd("rra\n", 1);
		ft_putstr_fd("rra\n", 1);
	}
	else
	{
		while (i > 0)
		{
			ft_putstr_fd("ra\n", 1);
			i--;
		}
	}
}
