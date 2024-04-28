#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

//******************* LIBRARIES ********************
# include <stdlib.h>
# include <unistd.h>
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

//******** FUNCTION DECLARATIONS ***********
int				main(int argc, char **argv);
void			ft_swap_two_first_elements(Stack *s);
void			ft_swap_two_elements_stacks_a_b(Stack *a, Stack *b);
void			ft_putstr(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int n);
void			peek(Stack *s);
int				pop(Stack *s);
void			initStack(Stack *s);
void			push(Stack *s, int data);

#endif