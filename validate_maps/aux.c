/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:08:36 by tales             #+#    #+#             */
/*   Updated: 2024/07/13 16:11:58 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int is_empty(t_queue *queue)
{
    return (queue->front == NULL);
}

int is_valid(int x, int y, int width, int height)
{
    return (x >= 0 && x < width && y >= 0 && y < height);
}

void error_exit(const char *message)
{
    ft_putstr(message);
    exit(1);
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