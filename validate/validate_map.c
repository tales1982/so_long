/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:07:30 by tales             #+#    #+#             */
/*   Updated: 2024/07/13 20:45:00 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	is_valid_position(int **map, int x, int y, int rows, int cols)
{
	if (x < 0 || x >= rows || y < 0 || y >= cols)
		return (0);
	if (map[x][y] == 1 || map[x][y] == 'V')
		return (0);
	return (1);
}

void	mark_visited(int **map, int x, int y, int rows, int cols, int *collected_items, int *found_exit)
{
	if (!is_valid_position(map, x, y, rows, cols))
		return ;
	if (map[x][y] == 2)
		(*collected_items)++;
	else if (map[x][y] == 3)
		(*found_exit) = 1;
	map[x][y] = 'V'; // Marca como visitado
	mark_visited(map, x + 1, y, rows, cols, collected_items, found_exit);
	mark_visited(map, x - 1, y, rows, cols, collected_items, found_exit);
	mark_visited(map, x, y + 1, rows, cols, collected_items, found_exit);
	mark_visited(map, x, y - 1, rows, cols, collected_items, found_exit);
}

int	check_items_accessible(int **map, int rows, int cols)
{
	int	total_items = 0, collected_items = 0, found_exit = 0;
	int	start_x = -1, start_y = -1;
	int	i, j;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			if (map[i][j] == 4)
			{
				start_x = i;
				start_y = j;
			}
			if (map[i][j] == 2)
			{
				total_items++;
			}
			j++;
		}
		i++;
	}
	if (start_x == -1 || start_y == -1)
	{
		return (0); // Posição inicial não encontrada
	}
	mark_visited(map, start_x, start_y, rows, cols, &collected_items, &found_exit);
	return (collected_items == total_items && found_exit);
}

int	validate_map(int **map, int rows, int cols)
{
	if (!check_items_accessible(map, rows, cols))
	{
		ft_putstr_fd("Erro: Nem todos os itens coletáveis ou a saída são acessíveis!\n", 1);
		return (0);
	}
	// Adicione outras validações necessárias aqui
	return (1);
}
