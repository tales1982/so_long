#include "./push_swap.h"

void	push_swap(Stack *s)
{
	int	size;
	int	swapped;
	int	count;
	int	resetCount;

	size = stack_size(s);
	swapped = 1;
	if (s->top == NULL || s->top->next == NULL)
		return ;
	// Não precisa ordenar se a pilha estiver vazia ou tiver apenas um elemento
	while (swapped)
	{
		swapped = 0;
		count = 0;
		while (count < size - 1)
		{
			if (s->top->data > s->top->next->data)
			{
				ft_swap_two_first_elements(s);
				swapped = 1; // Uma troca foi feita
			}
			rotate(s); // Move o topo para o fundo para verificar o próximo par
			ft_putstr("ra\n");
			print_stack(s);
			ft_putchar('\n');
			count++;
		}
		// Resetando a pilha para a configuração original após uma passagem completa
		resetCount = 0;
		while (resetCount < count)
		{
			reverse_rotate(s);
			ft_putstr("rrr\n");
			print_stack(s);
			ft_putchar('\n');
			resetCount++;
		}
		size--;
		// Reduz o tamanho para não verificar o último elemento já ordenado
	}
}

int	main(int argc, char **argv)
{
	int		value;
	Stack	a;
	int		i;

	initStack(&a);
	i = 1; // Inicia o índice no primeiro argumento após o nome do programa
	if (argc > 1)
	{
		while (i < argc)
		{
			value = ft_atoi(argv[i]);
			push(&a, value);
			i++;
		}
		//peek(&a); // Exibir estado inicial
		//ft_putchar('\n');
		push_swap(&a);
		//peek(&a); // Exibir estado após ordenação
		return (0);
	}
	return (1);
}
