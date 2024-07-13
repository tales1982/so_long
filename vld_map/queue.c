/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:19:24 by tales             #+#    #+#             */
/*   Updated: 2024/07/13 16:42:53 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

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

int is_empty(t_queue *queue)
{
    return (queue->front == NULL);
}

void free_queue(t_queue *queue)
{
    while (!is_empty(queue))
        dequeue(queue);
    free(queue);
}
