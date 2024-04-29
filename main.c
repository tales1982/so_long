
#include "./push_swap.h"

void	push_swap(Stack *a, Stack *b)
{
	int	size;
	int	min_index;

	// Verifica se a lista está vazia ou tem um único elemento
	if (!a->top || !a->top->next)
	{
		return ; // Já está ordenado
	}
	size = stack_size(a);
	// Assume uma função que retorna o tamanho da pilha
	// Enquanto a pilha A tiver mais de um elemento
	while (size > 1)
	{
		min_index = find_min_index(a);
		// Assume uma função que encontra o índice do menor elemento
		// Rotaciona a pilha A até que o menor elemento esteja no topo
		while (min_index > 0)
		{
			if (min_index > size / 2)
			{
				reverse_rotate(a);
				// Rotaciona para baixo se o elemento estiver na metade inferior
				min_index--;
			}
			else
			{
				rotate(a);
				// Rotaciona para cima se o elemento estiver na metade superior
				min_index--;
			}
		}
		// Empurra o menor elemento para a pilha B
		push_b(a, b);
		size--;
	}
	// Restaura todos os elementos de volta para a pilha A em ordem
	while (b->top)
	{
		push_a(b, a);
	}
}

int	stack_size(Stack *s)
{
	int		count;
	Node	*current;

	count = 0;
	current = s->top;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}

int	find_min_index(Stack *s)
{
	int		min_index;
	int		index;
	Node	*current;

	min_index = 0;
	index = 0;
	current = s->top;
	int min_value = current->data; // Correção aqui: de 'value' para 'data'
	while (current)
	{
		if (current->data < min_value)
		{                              // Correção aqui: de 'value' para 'data'
			min_value = current->data; // Correção aqui: de 'value' para 'data'
			min_index = index;
		}
		current = current->next;
		index++;
	}
	return (min_index);
}
/* Funcao  para teste*/
void	print_stack(const char *label, Stack *s)
{
	Node	*current;

	printf("%s: ", label);
	current = s->top;
	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");
}
int	is_sorted(Stack *s)
{
	Node	*current;

	current = s->top;
	while (current != NULL && current->next != NULL)
	{
		if (current->data > current->next->data)
			return (0);
		current = current->next;
	}
	return (1);
}
int	main(int argc, char **argv)
{
	int	value;

	Stack a, b;
	if (argc > 1)
	{
		initStack(&a);
		initStack(&b);
		// Lendo valores do argv e adicionando à pilha
		for (int i = 1; i < argc; i++)
		{
			value = ft_atoi(argv[i]);
			push(&a, value);
		}
		// Imprimir estado inicial da pilha
		print_stack("Initial Stack A", &a);
		// Chamar função push_swap
		push_swap(&a, &b);
		// Imprimir estado final das pilhas
		print_stack("Sorted Stack A", &a);
		print_stack("Stack B (should be empty)", &b);
		// Verificar se a pilha A está ordenada
		if (is_sorted(&a))
		{
			printf("Stack A is sorted correctly!\n");
		}
		else
		{
			printf("Stack A is not sorted correctly.\n");
		}
		// Verificar se a pilha B está vazia
		if (!b.top)
		{
			printf("Stack B is empty as expected.\n");
		}
		else
		{
			printf("Stack B is not empty. There's an error.\n");
		}
		return (0);
	}
	printf("Usage: %s <numbers to sort>\n", argv[0]);
	return (1);
}

/*
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
			value = ft_atoi(argv[argc - 1]);
			push(&a, value);
			argc--;
		}
		// ft_putstr("Stack inicial:\n");
		// peek(&a);
		//ft_swap_two_first_elements(&a); // sa
		//ft_putstr("sa\n");
		//push_b(&a, &b); // pb
		//ft_putstr("pb\n");
		//push_b(&a, &b); // pb
		//ft_putstr("pb\n");
		//push_b(&a, &b); // pb
		//ft_putstr("pb\n");
		//rotate(&a); // ra
		//ft_putstr("ra\n");
		//rotate(&b); // rb
		//ft_putstr("rb\n");
		//reverse_rotate(&a); // rra
		//ft_putstr("rra\n");
		//reverse_rotate(&b); // rrb
		//ft_putstr("rrb\n");
		//ft_swap_two_first_elements(&a); // sa
		//ft_putstr("sa\n");
		//push_a(&b, &a); // pa
		//ft_putstr("pa\n");
		//push_a(&b, &a); // pa
		//ft_putstr("pa\n");
		//push_a(&b, &a); // pa
		//ft_putstr("pa\n");
		// ft_putstr("Stack ordenacao:\n");
		// peek(&a);
		// ft_putstr("\n");
		return (0);
	}
	return (1);
}
*/