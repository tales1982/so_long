/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:36:57 by tales             #+#    #+#             */
/*   Updated: 2024/07/13 16:48:31 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	is_accessible(char **map, int start_x, int start_y, int width, int height)
{
	t_queue	*queue;
	int		collectibles;

	int visited[50][50]; // Supondo um tamanho máximo de 50
	ft_memset(visited, 0, sizeof(visited));
	queue = create_queue();
	enqueue(queue, start_x, start_y);
	collectibles = bfs(queue, map, visited, width, height);
	free_queue(queue);
	return (collectibles == total_collectibles(map, width, height));
}

int	bfs(t_queue *queue, char **map, int visited[][50], int width, int height)
{
	int		collectibles;
	t_point	curr;

	collectibles = 0;
	while (!is_empty(queue))
	{
		curr = dequeue(queue);
		if (visited[curr.x][curr.y] || map[curr.y][curr.x] == '1')
			continue ;
		visited[curr.x][curr.y] = 1;
		if (map[curr.y][curr.x] == 'C')
			collectibles++;
		check_and_enqueue(queue, curr.x - 1, curr.y, map, visited, width,
			height);
		check_and_enqueue(queue, curr.x + 1, curr.y, map, visited, width,
			height);
		check_and_enqueue(queue, curr.x, curr.y - 1, map, visited, width,
			height);
		check_and_enqueue(queue, curr.x, curr.y + 1, map, visited, width,
			height);
	}
	return (collectibles);
}

void	check_and_enqueue(t_queue *queue, int x, int y, char **map,
		int visited[][50], int width, int height)
{
	if (is_valid(x, y, width, height) && !visited[x][y])
		enqueue(queue, x, y);
}

int	is_valid(int x, int y, int width, int height)
{
	return (x >= 0 && x < width && y >= 0 && y < height);
}
