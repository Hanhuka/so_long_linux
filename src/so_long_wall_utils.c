/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_wall_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:19:34 by ralves-g          #+#    #+#             */
/*   Updated: 2023/10/11 15:54:48 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_img	*walls_1(t_coord c)
{
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y - 1][c.x] == '1' && (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y][c.x - 1] == '1' && (*map())[c.y][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x - 1] == '1' && (*map())[c.y + 1][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x + 1] == '1' && (*map())[c.y + 1][c.x - 1] == '1')
		return (&((*sp()).walls[5]));
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y - 1][c.x] == '1' && (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y][c.x - 1] == '1' && (*map())[c.y][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x - 1] != '1' && (*map())[c.y + 1][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x + 1] == '1' && (*map())[c.y + 1][c.x - 1] == '1')
		return (&((*sp()).walls[17]));
	else
		return (NULL);
}

t_img	*walls_2(t_coord c)
{
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y - 1][c.x] == '1' && (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y][c.x - 1] == '1' && (*map())[c.y][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x - 1] == '1' && (*map())[c.y + 1][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x + 1] != '1' && (*map())[c.y + 1][c.x - 1] == '1')
		return (&((*sp()).walls[18]));
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y - 1][c.x] == '1' && (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y][c.x - 1] == '1' && (*map())[c.y][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x - 1] == '1' && (*map())[c.y + 1][c.x + 1] != '1'
	&& (*map())[c.y - 1][c.x + 1] == '1' && (*map())[c.y + 1][c.x - 1] == '1')
		return (&((*sp()).walls[19]));
	else
		return (NULL);
}

t_img	*walls_3(t_coord c)
{
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y - 1][c.x] == '1' && (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y][c.x - 1] == '1' && (*map())[c.y][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x - 1] == '1' && (*map())[c.y + 1][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x + 1] == '1' && (*map())[c.y + 1][c.x - 1] != '1')
		return (&((*sp()).walls[20]));
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y - 1][c.x] == '1' && (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y][c.x - 1] == '1' && (*map())[c.y][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x - 1] != '1' && (*map())[c.y + 1][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x + 1] != '1' && (*map())[c.y + 1][c.x - 1] == '1')
		return (&((*sp()).walls[21]));
	else
		return (NULL);
}

t_img	*walls_4(t_coord c)
{
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y - 1][c.x] == '1' && (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y][c.x - 1] == '1' && (*map())[c.y][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x - 1] == '1' && (*map())[c.y + 1][c.x + 1] != '1'
	&& (*map())[c.y - 1][c.x + 1] != '1' && (*map())[c.y + 1][c.x - 1] == '1')
		return (&((*sp()).walls[22]));
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y - 1][c.x] == '1' && (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y][c.x - 1] == '1' && (*map())[c.y][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x - 1] == '1' && (*map())[c.y + 1][c.x + 1] != '1'
	&& (*map())[c.y - 1][c.x + 1] == '1' && (*map())[c.y + 1][c.x - 1] != '1')
		return (&((*sp()).walls[23]));
	else
		return (NULL);
}

t_img	*walls_5(t_coord c)
{
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y - 1][c.x] == '1' && (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y][c.x - 1] == '1' && (*map())[c.y][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x - 1] != '1' && (*map())[c.y + 1][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x + 1] == '1' && (*map())[c.y + 1][c.x - 1] != '1')
		return (&((*sp()).walls[24]));
	if (c.x > 0 && c.y >= 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y + 1][c.x] == '1' && (*map())[c.y][c.x + 1] == '1'
	&& (*map())[c.y][c.x - 1] == '1'
	&& (*map())[c.y + 1][c.x - 1] == '1'
	&& (*map())[c.y + 1][c.x + 1] == '1')
		return (&((*sp()).walls[2]));
	else
		return (NULL);
}
