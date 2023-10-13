/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:39:27 by ralves-g          #+#    #+#             */
/*   Updated: 2023/10/13 17:31:09 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define GIF_NAME "Nyan"
# define FRAME_NBR 12
# define GIF_MPF 100
# define ANIM_MPF 120

# define WALL_NAME "wall"
# define WALL_COUNT 45

// # ifndef __APPLE__
// #  define LINUX 0
// #  define UP 125
// #  define DOWN 126
// #  define KEY_W 13
// #  define KEY_A 0
// #  define KEY_S 1
// #  define KEY_D 2
// #  define ESC 53
// #  define LEFT 123
// #  define RIGHT 124
// # else
#  define LINUX 1
#  define UP 65362
#  define DOWN 65364
#  define KEY_W 119
#  define KEY_A 97
#  define KEY_S 115
#  define KEY_D 100
#  define ESC 65307
#  define LEFT 65361
#  define RIGHT 65363
// # endif

#define SIDEINFO 5 * 64

# include "get_next_line.h"
// # include <mlx.h>
# include "mlx_linux/mlx.h"
# include <stdio.h>
# include <sys/time.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <sys/errno.h>

//# define	malloc(x)(NULL)
# define ERROR 1

# define SPATH "sprites/"

typedef struct s_img
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		height;
	int		width;
}				t_img;

typedef struct s_obj
{
	t_img	obj;
	t_img	obj2;
	t_img	obj3;
	t_img	obj4;
	t_img	obj5;
	t_img	background;
}				t_obj;

typedef struct s_imgs
{
	t_img	bee_left;
	t_img	bee_right;
	t_img	bee_left_48;
	t_img	bee_right_48;
	t_img	bee_left_32;
	t_img	bee_right_32;
	t_img	bee_left_16;
	t_img	bee_right_16;
	// void	*bee_left;
	// void	*bee_right;
	// void	*bee_left_48;
	// void	*bee_right_48;
	// void	*bee_left_32;
	// void	*bee_right_32;
	// void	*bee_left_16;
	// void	*bee_right_16;
	t_img	sus;
	t_img	sus_left;
	t_img	sus_48;
	t_img	sus_48_left;
	t_img	sus_32;
	t_img	sus_32_left;
	t_img	sus_16;
	t_img	sus_16_left;
	t_img	background;
	// void	*background_1;
	// void	*background_2;
	// void	*background_3;
	// void	*background_4;
	// void	*background_5;
	// void	*background_6;
	// void	*background_7;
	// void	*background_8;
	// void	*background_9;
	// void	*background_10;
	// void	*background_11;
	// void	*background_12;
	t_img	side_info;
	t_img	exit;
	t_img	exit_48;
	t_img	exit_32;
	t_img	exit_16;
	t_img	exit_open;
	t_img	exit_48_open;
	t_img	exit_32_open;
	t_img	exit_16_open;
	// void	*wall;
	// void	*wall_48;
	// void	*wall_32;
	// void	*wall_16;
	t_img	wall_48;
	t_img	wall_32;
	t_img	wall_16;
	t_img	walls[WALL_COUNT];
	// void	*wall1;
	// void	*wall2;
	// void	*wall3;
	// void	*wall4;
	// void	*wall5;
	// void	*wall6;
	// void	*wall7;
	// void	*wall8;
	// void	*wall9;
	// void	*wall10;
	// void	*wall11;
	// void	*wall12;
	// void	*wall13;
	// void	*wall14;
	// void	*wall15;
	// void	*wall16;
	// void	*wall17;
	// void	*wall18;
	// void	*wall19;
	// void	*wall20;
	// void	*wall21;
	// void	*wall22;
	// void	*wall23;
	// void	*wall24;
	// void	*wall25;
	// void	*wall26;
	// void	*wall27;
	// void	*wall28;
	// void	*wall29;
	// void	*wall30;
	// void	*wall31;
	// void	*wall32;
	// void	*wall33;
	// void	*wall34;
	// void	*wall35;
	// void	*wall36;
	// void	*wall37;
	// void	*wall38;
	// void	*wall39;
	// void	*wall40;
	// void	*wall41;
	// void	*wall42;
	// void	*wall43;
	// void	*wall44;
	t_img	collectable;
	t_img	collectable2;
	t_img	collectable3;
	t_img	collectable_16;
	t_img	collectable_32;
	t_img	collectable_48;
	t_img	empty48;
	t_img	empty32;
	t_img	empty16;
}				t_imgs;

typedef struct s_key
{
	int	w;
	int	a;
	int	s;
	int	d;
}	t_key;

typedef struct s_count
{
	int	collect;
}				t_count;

typedef struct s_coord
{
	int	x;
	int	y;
}				t_coord;

typedef struct s_anim
{
	t_img			img;
	struct s_anim	*next;
}				t_anim;

typedef struct s_objt
{
	int				x;
	int				y;
	int				x2;
	int				y2;
	char			type;
	// void			*img;
	t_img			img;
	struct s_objt	*next;
}				t_objt;

typedef struct s_win {
	void	*mlx;
	void	*mlx_win;
	t_img	frame;
	int		size;
	int		px_size;
	int		width;
	int		height;
	int		opt;
}				t_win;

//map_checker.c
char			***map(void);
int				ft_xlen(char *str);
void			free_matrix(char ***str);
int				check_object(char **str, char c);
int				check_invalid(char **str);

//map_checker2.c
int				check_objects(char **str);
int				check_map(char **str);
int				check_length(char **str);
int				map_y(char *name);
int				map_checker(char *name, char ***str);

//mp_checker.c
int				check_len(char ***mp);
int				check_first(char *line);
int				check_vertical(char *line);
int				check_walls(char ***mp, int y);
int				check_assets(char **mp);

//mp_checker2.c
int				check_anomalies(char **mp);
void			check_file(char *name);
int				checker(char *map, char ***mp);
void			errors(char *message);
size_t			ft_mplen(const char	*str);

//mp_checker3.c
int				find_char(char **mp, char c);
void			free_map(char ***mp);

//map_checker3.c
void			check_name(char *name);

//so_long.c
t_coord			*init_p(void);
t_win			*window(void);
int				animations(t_win *win);
int				animation(t_win *win);

//so_long_utils.c
int				enemys(t_win *win);
void			print_image(t_objt **tmp, t_win *win);
void			print_to_window(t_win *win);
int				ft_height(char **str);
void			print_to_frame(t_img *img, t_img *frame, int x, int y);

//map_to_img.c
int				ft_strlen2(char *str);
void			create_by_size(void);
void			create_player_util(t_coord c, int size);
void			create_player(int size);
void			create_enemy_util(t_coord c, int size);

//map_to_img2.c
void			create_enemy(int size);
void			create_object(t_img img, t_coord c, int size, char type);
t_img			*put_walls(int size, t_coord c);
void			create_objects(int size);
void			create_collectables(t_coord c, int size);

//move_character.c
int				*steps(void);
t_coord			c_pos(char **map);
void			move_all(int x, int y);
void			character_direction(int x);
int				check_colision2(char type);

//move_character2.c
void			move_character(int x, int y);
int				check_colision(int x, int y, char type);
void			remove_colectables_size(int i);
void			open_exits(void);
void			remove_collectable(int x, int y, int i);

//move_character3.c
void			remove_collectable_utils(t_objt *tmp, int x, int y, int i);

//animations.c
void			break_circle(t_anim **stack);
void			animate_collectable(void);
t_anim			*new_module(char *name, t_win *win);
void			stackadd_back(t_anim **stack, t_anim *new);
void			ft_lstclear(t_anim **stack);

//objects.c
char			*x_type(void);
t_count			*counter(void);
t_imgs			*sp(void);
t_objt			**objects(int n);
t_anim			**collec(void);

//key_actions.c
t_key			*keys(void);
int				key_down(int keycode, t_win *win);
int				key_up(int keycode, t_win *win);

//preparations.c
// void			init_walls1(t_win *win, int *s);
// void			init_walls2(t_win *win, int *s);
// void			init_walls3(t_win *win, int *s);
// void			init_walls4(t_win *win, int *s);
void			init_walls(t_win *win);
void			init_bees(t_win *win);
// void			init_bees(t_win *win, int s);

//preparations2.c
void			init_collectables(void);
void			init_walls5(t_win *win);
void			init_exits(t_win *win);
void			init_sprites(t_win *win, int ac, char **av);
void			init_sprites2(t_win *win);
void			init_img(t_img *i, t_win *win, char * name);

//preparations3.c
t_anim			**bckgnd(void);
void			opt_2(t_win *win);
void			init_opt3(t_win *win);
void			opt_3(t_win *win);
void			change_bckgnd(int keycode);

//nyan.c
int				nyan(t_win *win);
void			print_backgroud(t_win *win);
void			cenas(t_win *win, int ac, char **av);
unsigned long	time_ms(void);

//side_info.c
void			printf_side_info(t_win *win);
char			*ft_itoa(int n);

//move_enemy.c
void			move_every_enemy(void);
void			move_enemy(char xtype, int x, int y);
void			move_e_all(int x, int y, char xtype);
int				check_colision_enemy(int x, int y, char type, char typeX);
int				check_colision_enemy2(char type, char typeX);

//move_enemy2.c
void			enemy_direction(t_objt *tmp, int i, int x);

//so_long_wall_utils
t_img			*walls_1(t_coord c);
t_img			*walls_2(t_coord c);
t_img			*walls_3(t_coord c);
t_img			*walls_4(t_coord c);
t_img			*walls_5(t_coord c);

//so_long_wall_utils2
t_img			*walls_6(t_coord c);
t_img			*walls_7(t_coord c);
t_img			*walls_8(t_coord c);
t_img			*walls_9(t_coord c);
t_img			*walls_10(t_coord c);

//so_long_wall_utils3
t_img			*walls_11(t_coord c);
t_img			*walls_12(t_coord c);
t_img			*walls_13(t_coord c);
t_img			*walls_14(t_coord c);
t_img			*walls_15(t_coord c);

//so_long_wall_utils4
t_img			*wall_cond(t_coord c);
t_img			*wall_cond2(t_coord c);

//exit.c
void			destroy_walls(void);
void			destroy_walls2(void);
void			destroy_sprites(void);
void			exit_game(char *str);

//exit2.c
void			destroy_sprites2(void);
int				window_close(void);

#endif
