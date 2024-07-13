/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 09:47:24 by tales             #+#    #+#             */
/*   Updated: 2024/07/13 16:14:19 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft.h" // Certifique-se de incluir a libft
# include <fcntl.h>
# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define TILE_SIZE 32

typedef struct s_data
{
	void	*mlx;
	void	*win;
	int		**map;
	int		map_width;
	int		map_height;
	void	*img_floor;
	void	*img_wall;
	void	*img_collectible;
	void	*img_exit;
	void	*img_player_up[3];
	void	*img_player_down[3];
	void	*img_player_left[3];
	void	*img_player_right[3];
	void	*img_player_current;
	int		img_width;
	int		img_height;
	int		x;
	int		y;
	int		frame;
	int		collectibles_count;
	int move_count; // Adicionado campo para contar os movimentos
}			t_data;

typedef struct s_image_data
{
	void	*mlx;
	void	*src_img;
	void	*dest_img;
	int		src_x;
	int		src_y;
	int		width;
	int		height;
	char	*src_data;
	char	*dest_data;
	int		src_index;
	int		dest_index;
	int		y;
	int		x;
	int		i;
	int		src_size_line;
	int		src_endian;
	int		src_bpp;
	int		dest_bpp;
	int		dest_size_line;
	int		dest_endian;
}			t_image_data;

typedef struct s_point
{
    int x;
    int y;
}               t_point;

typedef struct s_node
{
    t_point         point;
    struct s_node   *next;
}               t_node;

typedef struct s_queue
{
    t_node  *front;
    t_node  *rear;
}    ;

// Inicialização
int			close_window(void *param);
void		initialize_game_window(t_data *data);

// Cópia de parte da imagem
void		draw_map(t_data *data);

// Leitura do mapa
int			*parse_line_to_map(const char *line, int width, t_data *data);
int			**initialize_map(int width, int initial_height);
void		read_map_file(int fd, int **map, int *width, int *height,
				t_data *data);
int			**load_map(const char *filename, int *width, int *height,
				t_data *data);
int			**initialize_map(int width, int initial_height);

// Leitura de imagens
void		load_image(void **img, void *mlx, char *path, t_data *data);
void		initialize_direction_images(t_data *data, void *sprite_sheet,
				int sprite_width, int sprite_height);
void		initialize_images(t_data *data);
void		start_game(t_data *data);

// Eventos de teclado
int			is_wall(int x, int y, t_data *data);
void		handle_exit(int keycode);
void		update_collectibles(t_data *data, int new_x, int new_y);
void		check_victory(t_data *data, int new_x, int new_y);
void		update_position_and_image(int keycode, t_data *data, int *new_x,
				int *new_y);
int			key_event(int keycode, t_data *data);

// Funções auxiliares
void		draw_exit(t_data *data);
void		copy_image_part(t_image_data *data);
void		free_resources(t_data *data);

//validacao do mapas
// Funções da fila
t_queue *create_queue(void);
void    enqueue(t_queue *queue, int x, int y);
t_point dequeue(t_queue *queue);
int     is_empty(t_queue *queue);
void    free_queue(t_queue *queue);

// Funções auxiliares
int     is_valid(int x, int y, int width, int height);
int     total_collectibles(char **map, int width, int height);
void    enable_last_item(char **map, int width, int height);
void    error_exit(const char *message);

// Funções principais
int is_accessible(char **map, int start_x, int start_y, int width, int height);
int bfs(t_queue *queue, char **map, int visited[][height], int width, int height);
void check_and_enqueue(t_queue *queue, int x, int y, char **map, int visited[][height], int width, int height);
int check_victory_condition(char **map, int width, int height);
int count_collectibles_in_row(char *row, int width);
void validate_map(char **map, int width, int height);

#endif
