/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preparations2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:38:48 by ralves-g          #+#    #+#             */
/*   Updated: 2023/10/13 15:34:27 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_collectables(void)
{
	t_coord	c;

	c.y = 0;
	while ((*map())[c.y])
	{
		c.x = 0;
		while ((*map())[c.y][c.x])
		{
			if ((*map())[c.y][c.x] == 'C')
				(*counter()).collect += 1;
			c.x++;
		}
		c.y++;
	}
}

void init_img(t_img *i, t_win *win, char * name)
{
	printf("creating image named [%s]\n", name);
	i->img = mlx_xpm_file_to_image((*win).mlx, name, &(i->width), &(i->height));
	i->addr = mlx_get_data_addr(i->img, &(i->bits_per_pixel), &(i->line_length), &(i->endian));
	printf("size x[%d] y[%d]\n", i->width, i->height);
}

void	init_walls5(t_win *win)
{
	// ((*sp())).wall_48 = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Wall_48.xpm", s, s);
	// ((*sp())).wall_32 = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Wall_32.xpm", s, s);
	// ((*sp())).wall_16 = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Wall_16.xpm", s, s);
	// ((*sp()).sus) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Sus_64.xpm", s, s);
	// ((*sp()).sus_left) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Sus_64_left.xpm", s, s);
	// ((*sp()).sus_48) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Sus_48.xpm", s, s);
	// ((*sp()).sus_48_left) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Sus_48_left.xpm", s, s);
	// ((*sp()).sus_32) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Sus_32.xpm", s, s);
	// ((*sp()).sus_32_left) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Sus_32_left.xpm", s, s);
	// ((*sp()).sus_16) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Sus_16.xpm", s, s);
	// ((*sp()).sus_16_left) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Sus_16_left.xpm", s, s);
	init_img(&((*sp()).sus), win, SPATH"Sus_64.xpm");
	init_img(&((*sp()).sus_left), win, SPATH"Sus_64_left.xpm");
	init_img(&((*sp()).sus_48), win, SPATH"Sus_48.xpm");
	init_img(&((*sp()).sus_48_left), win, SPATH"Sus_48.xpm");
	init_img(&((*sp()).sus_32), win, SPATH"Sus_32.xpm");
	init_img(&((*sp()).sus_32_left), win, SPATH"Sus_32_left.xpm");
	init_img(&((*sp()).sus_16), win, SPATH"Sus_16.xpm");
	init_img(&((*sp()).sus_16_left), win, SPATH"Sus_16_left.xpm");
}

void	init_exits(t_win *win)
{
	// ((*sp()).exit) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Exit_64.xpm", &s, &s);
	// ((*sp()).exit_48) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Exit_48.xpm", &s, &s);
	// ((*sp()).exit_32) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Exit_32.xpm", &s, &s);
	// ((*sp()).exit_16) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Exit_16.xpm", &s, &s);
	// ((*sp()).exit_open) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Exit_64_open.xpm", &s, &s);
	// ((*sp()).exit_48_open) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Exit_48_open.xpm", &s, &s);
	// ((*sp()).exit_32_open) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Exit_32_open.xpm", &s, &s);
	// ((*sp()).exit_16_open) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Exit_16_open.xpm", &s, &s);
	init_img(&((*sp()).exit), win, SPATH"Exit_64.xpm");
	init_img(&((*sp()).exit_48), win, SPATH"Exit_48.xpm");
	init_img(&((*sp()).exit_32), win, SPATH"Exit_32.xpm");
	init_img(&((*sp()).exit_16), win, SPATH"Exit_16.xpm");
	init_img(&((*sp()).exit_open), win, SPATH"Exit_64_open.xpm");
	init_img(&((*sp()).exit_48_open), win, SPATH"Exit_48_open.xpm");
	init_img(&((*sp()).exit_32_open), win, SPATH"Exit_32_open.xpm");
	init_img(&((*sp()).exit_16_open), win, SPATH"Exit_16_open.xpm");
}

void	init_sprites(t_win *win, int ac, char **av)
{
	int	s;

	s = 0;
	(*window()).opt = 0;
	cenas(win, ac, av);
	init_sprites2(win);
	init_exits(win);
	init_bees(win);
	// init_bees(win, s);
	init_walls(win);
	// init_walls1(win, &s);
	// init_walls2(win, &s);
	// init_walls3(win, &s);
	// init_walls4(win, &s);
	init_walls5(win);
	init_collectables();
	// ((*sp()).empty16) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"empty16.xpm", &s, &s);
	// ((*sp()).empty32) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"empty32.xpm", &s, &s);
	// ((*sp()).empty48) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"empty48.xpm", &s, &s);
	init_img(&((*sp()).empty16), win, SPATH"empty16.xpm");
	init_img(&((*sp()).empty32), win, SPATH"empty32.xpm");
	init_img(&((*sp()).empty48), win, SPATH"empty48.xpm");
}

void	init_sprites2(t_win *win)
{
	// s = 64;
	// ((*sp()).side_info) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"side_info_3.xpm", &s, &s);
	// ((*sp()).collectable) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Collectable_1.xpm", &s, &s);
	// ((*sp()).collectable2) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Collectable_2.xpm", &s, &s);
	// ((*sp()).collectable3) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Collectable_3.xpm", &s, &s);
	// ((*sp()).collectable_16) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Collectable_16.xpm", &s, &s);
	// ((*sp()).collectable_32) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Collectable_32.xpm", &s, &s);
	// ((*sp()).collectable_48) = mlx_xpm_file_to_image((*win).mlx,
	// 		SPATH"Collectable_48.xpm", &s, &s);
	init_img(&((*sp()).side_info), win, SPATH"side_info_3.xpm");
	init_img(&((*sp()).collectable), win, SPATH"Collectable_1.xpm");
	init_img(&((*sp()).collectable2), win, SPATH"Collectable_2.xpm");
	init_img(&((*sp()).collectable3), win, SPATH"Collectable_3.xpm");
	init_img(&((*sp()).collectable_16), win, SPATH"Collectable_16.xpm");
	init_img(&((*sp()).collectable_32), win, SPATH"Collectable_32.xpm");
	init_img(&((*sp()).collectable_48), win, SPATH"Collectable_48.xpm");
}
