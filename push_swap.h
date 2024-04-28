#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

//******************* LIBRARIES ********************
# include <unistd.h>
# include <stdlib.h>
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
void			ft_swap(int *stack_a, int *stack_b);
void			ft_putstr(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int n);
void				peek(Stack *s);
int				pop(Stack *s);
void			initStack(Stack *s);
void			push(Stack *s, int data);

#endif