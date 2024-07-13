/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:07:52 by tales             #+#    #+#             */
/*   Updated: 2024/07/13 16:12:53 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../so_long.h"

// Funções da fila
t_queue *create_queue(void)
{
    t_queue *queue = (t_queue *)malloc(sizeof(t_queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

void enqueue(t_queue *queue, int x, int y)
{
    t_node *new_node = (t_node *)malloc(sizeof(t_node));
    new_node->point.x = x;
    new_node->point.y = y;
    new_node->next = NULL;
    if (queue->rear == NULL)
    {
        queue->front = new_node;
        queue->rear = new_node;
    }
    else
    {
        queue->rear->next = new_node;
        queue->rear = new_node;
    }
}

t_point dequeue(t_queue *queue)
{
    if (queue->front == NULL)
        return (t_point){-1, -1};
    t_node *temp = queue->front;
    t_point point = temp->point;
    queue->front = queue->front->next;
    if (queue->front == NULL)
        queue->rear = NULL;
    free(temp);
    return point;
}


void free_queue(t_queue *queue)
{
    while (!is_empty(queue))
        dequeue(queue);
    free(queue);
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
