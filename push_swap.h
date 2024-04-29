#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

//******************* LIBRARIES ********************
# include <stdlib.h>
# include <unistd.h>

# include <stdio.h>//remover depois !!!!!!!!!!!!!!!!1
//************* struct *******************
typedef struct Node
{
	int			data;
	struct Node	*next;
}				Node;

typedef struct
{
	Node		*top;
}				Stack;


int				main(int argc, char **argv);
void			ft_swap_two_first_elements(Stack *s);
void			ft_swap_two_elements_stacks_a_b(Stack *a, Stack *b);
int				ft_atoi(const char *str);
void			ft_putstr(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int n);
void			peek(Stack *s);
void			initStack(Stack *s);
void			push(Stack *s, int data);
void			push_b(Stack *a, Stack *b);
void			push_a(Stack *b, Stack *a);
void			rotate(Stack *s);
void			reverse_rotate(Stack *s);
void			push_swap(Stack *a, Stack *b);
int				stack_size(Stack *s);
int				find_min_index(Stack *s);
/**funcao pra teste*/
void			print_stack(const char *label, Stack *s);
int				is_sorted(Stack *s);
#endif