/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:54:18 by tlima-de          #+#    #+#             */
/*   Updated: 2024/04/30 18:54:21 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

//******************* LIBRARIES ********************
# include <stdio.h> //remover depois !!!!!!!!!!!!!!!!1
# include <stdlib.h>
# include <unistd.h>
//************* struct *******************
typedef struct node
{
	int			data;
	struct node	*next;
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
int				stack_size(Stack *s);
void			peek(Stack *s);
void			initStack(Stack *s);
void			ft_push(Stack *s, int data);
void			ft_push_b(Stack *a, Stack *b);
void			ft_push_a(Stack *b, Stack *a);
void			rotate(Stack *s);
void			reverse_rotate(Stack *s);
void			push_swap(Stack *s);
int				ft_pop(Stack *s);
void	print_stack(Stack *s); // remover se nao usar

#endif
