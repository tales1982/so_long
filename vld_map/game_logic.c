/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_logic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:37:22 by tales             #+#    #+#             */
/*   Updated: 2024/07/13 16:48:38 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

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

int count_collectibles_in_row(char *row, int width)
{
    int x = 0;
    int collectibles = 0;

    while (x < width)
    {
        if (row[x] == 'C')
            collectibles++;
        x++;
    }
    return collectibles;
}

void enable_last_item(char **map, int width, int height)
{
    int x = 0;
    int y = 0;

    while (y < height)
    {
        x = 0;
        while (x < width)
        {
            if (map[y][x] == 'L')  // 'L' representa o último item bloqueado
            {
                map[y][x] = 'E';  // 'E' representa o último item habilitado (ex: porta de saída)
                return;
            }
            x++;
        }
        y++;
    }
}

int total_collectibles(char **map, int width, int height)
{
    int x, y, count;

    y = 0;
    count = 0;
    while (y < height)
    {
        x = 0;
        while (x < width)
        {
            if (map[y][x] == 'C')
                count++;
            x++;
        }
        y++;
    }
    return count;
}

#include "so_long.h"

void error_exit(const char *message)
{
    ft_putstr_fd((char *)message, 1);
    exit(1);
}

