/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:29:22 by ralves-g          #+#    #+#             */
/*   Updated: 2023/10/13 17:31:43 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include <math.h>

t_coord	*init_p(void)
{
	static t_coord	c;

	return (&c);
}

t_win	*window(void)
{
	static t_win	win;

	return (&win);
}

int	animations(t_win *win)
{
	animation(win);
	enemys(win);
	nyan(win);
	return (0);
}

int	animation(t_win *win)
{
	static unsigned long	i = 0;

	if (!i)
		i = time_ms();
	if (time_ms() - i < ANIM_MPF)
		return (0);
	i = time_ms();
	animate_collectable();
	// mlx_clear_window((*win).mlx, (*win).mlx_win);
	// print_to_window(win);
	return (0);
}

int game(t_win *win)
{
	// create_image(win, &win->frame, win_W, win_H);
	win->frame.img = mlx_new_image(win->mlx, win->width + SIDEINFO, win->height);
	win->frame.width = win->width + SIDEINFO;
	win->frame.height = win->height;
	win->frame.addr = mlx_get_data_addr(win->frame.img, &(win->frame.bits_per_pixel),
			&(win->frame.line_length), &(win->frame.endian));
	animations(win);
	print_to_window(win);
	// mlx_clear_window(win->mlx, win->mlx_win);
	mlx_put_image_to_window(win->mlx, win->mlx_win, win->frame.img, 0, 0);
	mlx_destroy_image(win->mlx, win->frame.img);
}

int	main(int ac, char **av)
{
	if (ac != 2 && ac != 3)
		return (1);
	check_file(av[1]);
	checker(av[1], map());
	(*window()).size = 16;
	(*window()).px_size = 64;
	(*window()).mlx = mlx_init();
	(*window()).width = (*window()).px_size * (*window()).size;
	(*window()).height = (*window()).px_size * (*window()).size;
	(*window()).mlx_win = mlx_new_window((*window()).mlx, (*window()).width
			+ SIDEINFO, (*window()).height, "Honey Catcher");
	init_sprites(window(), ac, av);
	stackadd_back(collec(), new_module(SPATH"Collectable_1.xpm", window()));
	stackadd_back(collec(), new_module(SPATH"Collectable_2.xpm", window()));
	stackadd_back(collec(), new_module(SPATH"Collectable_3.xpm", window()));
	(*x_type()) = 'a';
	create_by_size();
	(*init_p()).x = (*objects(64))->x;
	(*init_p()).y = (*objects(64))->y;
	print_to_window(window());
	mlx_hook((*window()).mlx_win, 2, 1, key_down, window());
	mlx_hook((*window()).mlx_win, 3, 1, key_up, window());
	mlx_hook((*window()).mlx_win, 17, 0, window_close, window());
	// mlx_loop_hook((*window()).mlx, animations, window());
	mlx_loop_hook((*window()).mlx, game, window());
	mlx_loop((*window()).mlx);
}
