
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h> // para limts
# include <stddef.h> // Para o tipo size_t
#include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
typedef struct s_lst
{
	int				content;
	int				index;
	struct s_lst	*next;
	struct s_lst	*prev;
}					STACK;

// SIMPLE_SORT_C
int					is_sorted(STACK **stack);
void				simple_sort(STACK **a_stack, STACK **b_stack);

// SIMPLE_SORT_UTLIS_C
int					is_sorted(STACK **stack);
int					is_order(STACK **stack, int size);
void				reset_index(STACK **stack);
void				rotate_to_min(STACK **stack, int size);

// INDEX_C
void	index_all_elements_by_content(STACK **stack);

// RADIX_C
int					lst_size(STACK *lst);
void				radix_sort(STACK **a_stack, STACK **b_stack);

// LST_UTILS_C
void				lst_addfront(STACK **stack, STACK *news);
void				lst_addback(STACK **stack, STACK *news);
STACK				*lst_new(int content);
STACK				*lst_last(STACK *stack);

// SWAP_C
void				sa(STACK **stack);
void				sb(STACK **stack);
void				ss(STACK **a_stack, STACK **b_stack);

// PUSH_C
void				pa(STACK **a_stack, STACK **b_stack);
void				pb(STACK **a_stack, STACK **b_stack);

// ROTATE_C
void				rotate(STACK **stack);
void				ra(STACK **stack);
void				rb(STACK **stack);
void				rr(STACK **a_stack, STACK **b_stack);

// REVERSE_C
void				reverse(STACK **stack);
void				rra(STACK **stack);
void				rrb(STACK **stack);
void				rrr(STACK **a_stack, STACK **b_stack);

// utils
int					ft_atoi(const char *str);
long				ft_atol(const char *str);
int					ft_putstr_fd(char *s, int fd);
void				free_split(char **split);
size_t				ft_strlen(const char *str);
void				print_stack(STACK *stack);
// split
char				**ft_split(char const *s, char c);

#endif
