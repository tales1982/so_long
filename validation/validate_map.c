/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:53:53 by tales             #+#    #+#             */
/*   Updated: 2024/07/13 17:59:30 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int is_valid_position(char **map, int x, int y, int rows, int cols) {
    if (x < 0 || x >= rows || y < 0 || y >= cols)
        return 0;
    if (map[x][y] == '1' || map[x][y] == 'V')
        return 0;
    return 1;
}

void mark_visited(char **map, int x, int y, int rows, int cols, int *collected_items) {
    if (!is_valid_position(map, x, y, rows, cols))
        return;
    
    if (map[x][y] == 'C')
        (*collected_items)++;
    
    map[x][y] = 'V';  // Marca como visitado
    
    mark_visited(map, x + 1, y, rows, cols, collected_items);
    mark_visited(map, x - 1, y, rows, cols, collected_items);
    mark_visited(map, x, y + 1, rows, cols, collected_items);
    mark_visited(map, x, y - 1, rows, cols, collected_items);
}

int check_items_accessible(char **map, int rows, int cols) {
    int total_items = 0, collected_items = 0;
    int start_x = -1, start_y = -1;
    
    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < cols) {
            if (map[i][j] == 'P') {
                start_x = i;
                start_y = j;
            }
            if (map[i][j] == 'C') {
                total_items++;
            }
            j++;
        }
        i++;
    }

    if (start_x == -1 || start_y == -1) {
        return 0; // Posicao inicial nao encontrada
    }
    
    mark_visited(map, start_x, start_y, rows, cols, &collected_items);
    
    return collected_items == total_items;
}

int validate_map(char **map, int rows, int cols) {
    if (!check_items_accessible(map, rows, cols)) {
        printf("Erro: Nem todos os itens coletáveis são acessíveis!\n");
        return 0;
    }
    // Adicione outras validações necessárias aqui
    
    return 1;
}
