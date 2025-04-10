/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:03:42 by ralves-g          #+#    #+#             */
/*   Updated: 2025/04/10 13:18:36 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	enemys(t_win *win)
{
	static unsigned long	i = 0;

	if (!i)
		i = time_ms();
	if (time_ms() - i < GIF_MPF)
		return (0);
	i = time_ms();
	move_every_enemy();
	// mlx_clear_window((*win).mlx, (*win).mlx_win);
	// print_to_window(win);
	return (0);
}

unsigned int	get_image_color(t_img *data, int x, int y)
{
	// printf("getting color on x[%d]y[%d] from image with size x[%d]y[%d]\n", x, y, data->width, data->height);
	if (x > data->width)
		x = data->width;
	if (y > data->height)
		y = data->height;
	return (*(unsigned int *)(data->addr + (y * data->line_length
			+ x * (data->bits_per_pixel / 8))));
}

void	my_mlx_pixel_put(t_img *data, int x, int y, int color)
{
	char	*dst;

	// printf("frame width[%d] height[%d] x[%d] y[%d]\n", data->width, data->height, x, y);
	if (x < 0 || x >= data->width || y < 0 || y >= data->height)
		return ;
	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	if (color != 0xFF000000)
	{
		// printf("putting color %d\n", color);
		*(unsigned int *)dst = color;
	}
}

void	print_to_frame(t_img *img, t_img *frame, int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < img->height)
	{
		j = 0;
		while (j < img->width)
		{
			my_mlx_pixel_put(frame, j + x, i + y, get_image_color(img, j, i));
			j++;
		}
		i++;
	}
}

void	my_mlx_pixel_put_add(t_img *data, int x, int y, int color)
{
	char	*dst;

	// printf("frame width[%d] height[%d] x[%d] y[%d]\n", data->width, data->height, x, y);
	if (x < 0 || x >= data->width || y < 0 || y >= data->height)
		return ;
	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	if (color != 0xFF000000)
	{
		// printf("putting color %d\n", color);
		*(unsigned int *)dst += color;
	}
}

void	print_to_frame_add(t_img *img, t_img *frame, int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < img->height)
	{
		j = 0;
		while (j < img->width)
		{
			my_mlx_pixel_put_add(frame, j + x, i + y, get_image_color(img, j, i));
			j++;
		}
		i++;
	}
}

void	print_image(t_objt **tmp, t_win *win)
{
	// printf("printing sprite with size x[%d]y[%d]\n", (*tmp)->img);
	if ((*tmp)->type == '1' || (*tmp)->type == 'E')
		print_to_frame_add(&((*tmp)->img), &(win->frame), (*tmp)->x - (*objects((*window()).px_size))->x
		+ (*window()).height / 2, (*tmp)->y - (*objects((*window()).px_size))->y
		+ (*window()).height / 2);
	else 
		print_to_frame(&((*tmp)->img), &(win->frame), (*tmp)->x - (*objects((*window()).px_size))->x
		+ (*window()).height / 2, (*tmp)->y - (*objects((*window()).px_size))->y
		+ (*window()).height / 2);
	// mlx_put_image_to_window((*window()).mlx, (*window()).mlx_win, (*tmp)->img.img,
	// 	(*tmp)->x - (*objects((*window()).px_size))->x
	// 	+ (*window()).height / 2, (*tmp)->y - (*objects((*window()).px_size))->y
	// 	+ (*window()).height / 2);
	*tmp = (*tmp)->next;
}

void	print_enemies(t_win *win, t_objt *tmp)
{
	tmp = tmp->next;
	while (tmp && ((tmp->type >= 'a' && tmp->type <= 'z') || tmp->type == 'P'))
	{
		print_to_frame(&(tmp->img), &(win->frame), tmp->x - (*objects((*win).px_size))->x
			+ (*win).height / 2, tmp->y - (*objects((*win).px_size))->y
			+ (*win).height / 2);
		// mlx_put_image_to_window((*win).mlx, (*win).mlx_win, tmp->img.img,
		// 	tmp->x - (*objects((*win).px_size))->x
		// 	+ (*win).height / 2, tmp->y - (*objects((*win).px_size))->y
		// 	+ (*win).height / 2);
		tmp = tmp->next;
	}
}

void	print_to_window(t_win *win)
{
	t_objt	*tmp;
		char	*str;
	char	*str2;
	char	*stps;


	print_backgroud(win);
	tmp = (*objects((*win).px_size))->next;
	while (tmp && tmp->type <= 'z' && tmp->type >= 'a')
		tmp = tmp->next;
	while (tmp)
		print_image(&tmp, win);
	tmp = (*objects((*win).px_size));
	print_to_frame(&(tmp->img), &(win->frame), (*win).width / 2, (*win).height / 2);
	// mlx_put_image_to_window((*win).mlx, (*win).mlx_win, tmp->img.img,
	// 	(*win).width / 2, (*win).height / 2);
	print_enemies(win, tmp);
	printf_side_info(window());
	str = ft_itoa((*counter()).collect);
	stps = ft_itoa((*steps()));
	print_phrase(win, stps, 1200, 200, 15, 20, 5, &(*sp()).font);
	print_phrase(win, "collectibles", 1080, 280, 8, 15, 3, &(*sp()).font);
	print_phrase(win, "left", 1080, 300, 8, 15, 3, &(*sp()).font);
	print_phrase(win, str, 1220, 280, 15, 20, 5, &(*sp()).font);
	free(str);
	free(stps);
}

int	ft_height(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
