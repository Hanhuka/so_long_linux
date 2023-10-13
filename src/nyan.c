/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nyan.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:58:29 by ralves-g          #+#    #+#             */
/*   Updated: 2023/10/13 17:09:48 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

unsigned long	time_ms(void)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return ((tv.tv_sec * 1000) + (tv.tv_usec / 1000));
}

int	nyan(t_win *win)
{
	static unsigned long	i = 0;

	if (!i)
		i = time_ms();
	if ((*window()).opt != 2)
		return (0);
	if (time_ms() - i < GIF_MPF)
		return (0);
	i = time_ms();
	(*bckgnd()) = (*bckgnd())->next;
	if (!(*bckgnd())->img.img)
		(*bckgnd()) = (*bckgnd())->next;
	(*sp()).background = (*bckgnd())->img;
	// mlx_clear_window((*win).mlx, (*win).mlx_win);
	// print_to_window(win);
	return (0);
}

void	print_backgroud(t_win *win)
{
	int	x;
	int	y;

	if ((*window()).opt != 2)
	{
		x = (-(*objects((*win).px_size))->x + (*init_p()).x) / 8 - 50;
		y = (-(*objects((*win).px_size))->y + (*init_p()).y) / 8 - 50;
	}
	else
	{
		x = 0;
		y = 144;
	}
	// printf("background = [%p] at x[%d]y[%d], size x[%d]y[%d]\n", (*sp()).background.img, x, y, (*sp()).background.width, (*sp()).background.height);
	if ((*sp()).background.img)
	{
		print_to_frame(&((*sp()).background), &(win->frame),  x, y);
	}
		// mlx_put_image_to_window((*window()).mlx, (*window()).mlx_win,
		// 	(*sp()).background.img, x, y);
		// mlx_put_image_to_window(mlx, w,
		// 	NULL, x, y);
}

void	cenas(t_win *win, int ac, char **av)
{
	int	s;

	if (ac == 2)
	{
		// ((*sp()).background) = mlx_xpm_file_to_image((*win).mlx,
		// 		SPATH"Fundo_2048_1.xpm", &s, &s);
		init_img(&((*sp()).background), win, SPATH"Fundo_2048_1.xpm");
		
	}
	if (ac == 3)
	{
		if (ft_strlen(av[2]) == 1 && av[2][0] == '0')
			window()->opt = -1;
		else if (ft_strlen(av[2]) == 1 && av[2][0] == '1')
			init_img(&((*sp()).background), win, SPATH"so_long_bckg.xpm");
			// ((*sp()).background) = mlx_xpm_file_to_image((*win).mlx,
			// 		SPATH"so_long_bckg.xpm", &s, &s);
		else if (ft_strlen(av[2]) == 1 && av[2][0] == '2')
			opt_2(win);
		else if (ft_strlen(av[2]) == 1 && av[2][0] == '3')
			opt_3(win);
		else
			errors("\e[1;91mError\nWrong arguments\n\e[0m");
	}
}
