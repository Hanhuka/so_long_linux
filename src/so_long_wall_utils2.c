/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_wall_utils2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:26:25 by ralves-g          #+#    #+#             */
/*   Updated: 2023/10/11 16:21:53 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_img	*walls_6(t_coord c)
{
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y <= ft_height((*map())) - 1
	&& (*map())[c.y - 1][c.x] == '1' && (*map())[c.y][c.x + 1] == '1'
	&& (*map())[c.y][c.x - 1] == '1'
	&& (*map())[c.y - 1][c.x - 1] == '1'
	&& (*map())[c.y - 1][c.x + 1] == '1')
		return (&((*sp()).walls[8]));
	if (c.x > 0 && c.y > 0 && c.x <= ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y - 1][c.x] == '1' && (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y][c.x - 1] == '1'
	&& (*map())[c.y + 1][c.x - 1] == '1'
	&& (*map())[c.y - 1][c.x - 1] == '1')
		return (&((*sp()).walls[6]));
	else
		return (NULL);
}

t_img	*walls_7(t_coord c)
{
	if (c.x >= 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y - 1][c.x] == '1' && (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y][c.x + 1] == '1'
	&& (*map())[c.y + 1][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x + 1] == '1')
		return (&((*sp()).walls[4]));
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y <= ft_height((*map())) - 1
	&& (*map())[c.y][c.x + 1] == '1' && (*map())[c.y][c.x - 1] == '1'
	&& (*map())[c.y - 1][c.x] == '1'
	&& (*map())[c.y - 1][c.x + 1] == '1')
		return (&((*sp()).walls[33]));
	else
		return (NULL);
}

t_img	*walls_8(t_coord c)
{
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y <= ft_height((*map())) - 1
	&& (*map())[c.y][c.x + 1] == '1' && (*map())[c.y][c.x - 1] == '1'
	&& (*map())[c.y - 1][c.x] == '1'
	&& (*map())[c.y - 1][c.x - 1] == '1')
		return (&((*sp()).walls[34]));
	if (c.x >= 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y + 1][c.x] == '1' && (*map())[c.y - 1][c.x] == '1'
	&& (*map())[c.y][c.x + 1] == '1'
	&& (*map())[c.y + 1][c.x + 1] == '1')
		return (&((*sp()).walls[35]));
	else
		return (NULL);
}

t_img	*walls_9(t_coord c)
{
	if (c.x >= 0 && c.y > 0 && c.x <= ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y + 1][c.x] == '1' && (*map())[c.y - 1][c.x] == '1'
	&& (*map())[c.y][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x + 1] == '1')
		return (&((*sp()).walls[36]));
	if (c.x > 0 && c.y >= 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y][c.x + 1] == '1' && (*map())[c.y][c.x - 1] == '1'
	&& (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y + 1][c.x - 1] == '1')
		return (&((*sp()).walls[37]));
	else
		return (NULL);
}

t_img	*walls_10(t_coord c)
{
	if (c.x > 0 && c.y >= 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y][c.x + 1] == '1' && (*map())[c.y][c.x - 1] == '1'
	&& (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y + 1][c.x + 1] == '1')
		return (&((*sp()).walls[38]));
	if (c.x > 0 && c.y > 0 && c.x <= ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y + 1][c.x] == '1' && (*map())[c.y - 1][c.x] == '1'
	&& (*map())[c.y][c.x - 1] == '1'
	&& (*map())[c.y - 1][c.x - 1] == '1')
		return (&((*sp()).walls[39]));
	if (c.x > 0 && c.y > 0 && c.x <= ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y + 1][c.x] == '1' && (*map())[c.y - 1][c.x] == '1'
	&& (*map())[c.y][c.x - 1] == '1'
	&& (*map())[c.y + 1][c.x - 1] == '1')
		return (&((*sp()).walls[40]));
	else
		return (NULL);
}
