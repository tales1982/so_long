/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 09:46:13 by tales             #+#    #+#             */
/*   Updated: 2024/07/13 20:47:27 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	initialize_game_window(t_data *data)
{
	data->mlx = mlx_init();
	data->win = mlx_new_window(data->mlx, data->map_width * TILE_SIZE,
			data->map_height * TILE_SIZE, "So Long");
}
int	main(int argc, char **argv)
{
	t_data	data;

	if (argc != 2)
	{
		ft_printf("Error\n", argv[0]);
		return (1);
	}
	data.map = load_map(argv[1], &data);
	if (!data.map)
	{
		ft_printf("Error\n");
		return (1);
	}
	/*
	if (!validate_map(data.map, data.map_height, data.map_width))
	{
		ft_putstr_fd("Map validation failed\n", 1);
		return (1);
	}
	*/
	
	
	data.move_count = 0;
	start_game(&data);
	free_resources(&data);
	return (0);
}
