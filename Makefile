NAME		= push_swap
SRC			= main.c \
			outils/ft_atoi.c \
			outils/ft_putstr.c \
			outils/ft_putnbr.c \
			outils/stack_size.c \
			outils/print_stack.c \
			operations/ft_peek.c \
			operations/ft_push.c \
			operations/ft_swap.c \
			operations/ft_rotate.c \
			operations/ft_rotate_rev.c

OBJS		= $(SRC:.c=.o)

# Compiler options
CC			= cc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

# Implicit rule for compiling .c to .o
%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	
# Rule to link the executable
$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)

# Default rule
all: $(NAME)

# Rule for cleaning up
fclean:
	@$(RM) $(NAME) $(OBJS)

# Rule to re-make everything
re: fclean all