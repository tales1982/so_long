/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_items.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:01:15 by tales             #+#    #+#             */
/*   Updated: 2024/07/13 16:12:07 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



//Função para Verificar Acessibilidade dos Itens

#include "../so_long.h"

int is_accessible(char **map, int start_x, int start_y, int width, int height)
{
    t_queue *queue;
    int visited[width][height];
    int collectibles;

    ft_memset(visited, 0, sizeof(visited));
    queue = create_queue();
    enqueue(queue, start_x, start_y);
    collectibles = bfs(queue, map, visited, width, height);
    free_queue(queue);
    return (collectibles == total_collectibles(map, width, height));
}

//Função BFS: bfs
int bfs(t_queue *queue, char **map, int visited[][height], int width, int height)
{
    int collectibles = 0;
    while (!is_empty(queue))
    {
        t_point curr = dequeue(queue);
        if (visited[curr.x][curr.y] || map[curr.y][curr.x] == '1')
            continue;
        visited[curr.x][curr.y] = 1;
        if (map[curr.y][curr.x] == 'C')
            collectibles++;
        check_and_enqueue(queue, curr.x - 1, curr.y, map, visited, width, height);
        check_and_enqueue(queue, curr.x + 1, curr.y, map, visited, width, height);
        check_and_enqueue(queue, curr.x, curr.y - 1, map, visited, width, height);
        check_and_enqueue(queue, curr.x, curr.y + 1, map, visited, width, height);
    }
    return collectibles;
}

//Função para Verificar e Enfileirar: check_and_enqueue

void check_and_enqueue(t_queue *queue, int x, int y, char **map, int visited[][height], int width, int height)
{
    if (is_valid(x, y, width, height) && !visited[x][y])
        enqueue(queue, x, y);
}

//Função Principal: check_victory_condition

int check_victory_condition(char **map, int width, int height)
{
    int y = 0;
    int collectibles = 0;

    while (y < height)
    {
        collectibles += count_collectibles_in_row(map[y], width);
        y++;
    }
    return (collectibles == 0);
}


