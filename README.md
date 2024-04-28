# Push_Swap

The Push_Swap project is an implementation of a simple stack manipulation system. It enables swapping elements between two stacks and performing various stack operations such as push, pop, swap, and peek.

## Project Structure

The project consists of the following modules, organized into directories:

- `main.c`: The main file that orchestrates the stack operations.
- `outils`: Contains utility functions such as `ft_atoi`, `ft_putstr`, `ft_putnbr`.
- `operations`: Implements stack operations like `ft_peek`, `ft_stack_pop`, `ft_push`, `ft_swap`.

## Compilation

The project uses a Makefile to facilitate compilation. The following options are available:

- `make`: Compiles the program using the defined rules to create the `push_swap` executable.
- `make fclean`: Cleans up all compiled objects and the executable, leaving the directory clean.
- `make re`: Forces a complete recompilation of the project.

### Requirements

- GCC Compiler
- Make

### Compile the Project

To compile the project, run the following command in the project's root directory:

```bash
make
This will compile all modules and link them into an executable named push_swap.

Execution
To run the program after compilation, you can use the following command line:

bash
Copy code
./push_swap [arguments]
Arguments should be integers that will be processed by the stack operations.

Example of Use
bash
Copy code
./push_swap 10 20 30 40
This command initializes the stack with the numbers 10, 20, 30, 40, and performs the operations defined in main.c.

Function Descriptions
ft_swap_two_first_elements: Swaps the first two elements of a stack.
ft_swap_two_elements_stacks_a_b: Swaps the first two elements between two different stacks.
Other functions like ft_atoi, ft_putstr, and ft_putnbr assist in data manipulation and display.
Contributions
Contributions to the project are welcome. Please feel free to fork the repository, make your changes, and submit a pull request.
