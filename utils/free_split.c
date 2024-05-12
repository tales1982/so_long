
#include "../push_swap.h"

void	free_split(char **split)
{
	if (split == NULL)
		return ;
	for (int i = 0; split[i] != NULL; i++)
	{
		free(split[i]);
	}
	free(split);
}

/*
free_split, que é projetada para liberar a memória alocada para um array de strings, 
geralmente criado por uma função como strsplit que divide uma string em múltiplos substrings baseados em delimitadores. 
Vamos analisar o código parte por parte:
*/