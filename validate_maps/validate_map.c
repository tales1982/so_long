/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:05:31 by tales             #+#    #+#             */
/*   Updated: 2024/07/13 16:13:26 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void validate_map(char **map, int width, int height)
{
    if (!is_accessible(map, player_start_x, player_start_y, width, height))
        error_exit("Mapa inválido: nem todos os itens são acessíveis.");
    if (check_victory_condition(map, width, height))
        enable_last_item(map, width, height);  // Passando a largura e a altura do mapa
}

//Função Auxiliar: count_collectibles_in_row

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