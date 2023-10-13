/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_wall_utils3.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:37:41 by ralves-g          #+#    #+#             */
/*   Updated: 2023/10/11 16:00:42 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_img	*walls_11(t_coord c)
{
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y - 1][c.x] == '1' && (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y][c.x - 1] == '1' && (*map())[c.y][c.x + 1] == '1')
		return (&((*sp()).walls[12]));
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y <= ft_height((*map())) - 1
	&& (*map())[c.y][c.x - 1] == '1' && (*map())[c.y][c.x + 1] == '1'
	&& (*map())[c.y - 1][c.x] == '1')
		return (&((*sp()).walls[41]));
	if (c.x >= 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y - 1][c.x] == '1' && (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y][c.x + 1] == '1')
		return (&((*sp()).walls[42]));
	if (c.x > 0 && c.y >= 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y][c.x - 1] == '1' && (*map())[c.y][c.x + 1] == '1'
	&& (*map())[c.y + 1][c.x] == '1')
		return (&((*sp()).walls[43]));
	else
		return (NULL);
}

t_img	*walls_12(t_coord c)
{
	if (c.x > 0 && c.y > 0 && c.x <= ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y - 1][c.x] == '1' && (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y][c.x - 1] == '1')
		return (&((*sp()).walls[44]));
	if (c.x >= 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y <= ft_height((*map())) - 1
	&& (*map())[c.y][c.x + 1] == '1' && (*map())[c.y - 1][c.x] == '1'
	&& (*map())[c.y - 1][c.x + 1] == '1')
		return (&((*sp()).walls[7]));
	if (c.x >= 0 && c.y >= 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y][c.x + 1] == '1' && (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y + 1][c.x + 1] == '1')
		return (&((*sp()).walls[1]));
	if (c.x > 0 && c.y >= 0 && c.x <= ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y][c.x - 1] == '1' && (*map())[c.y + 1][c.x] == '1'
	&& (*map())[c.y + 1][c.x - 1] == '1')
		return (&((*sp()).walls[3]));
	else
		return (NULL);
}

t_img	*walls_13(t_coord c)
{
	if (c.x > 0 && c.y > 0 && c.x <= ft_strlen2((*map())[0]) - 2 &&
	c.y <= ft_height((*map())) - 1
	&& (*map())[c.y][c.x - 1] == '1' && (*map())[c.y - 1][c.x] == '1'
	&& (*map())[c.y - 1][c.x - 1] == '1')
		return (&((*sp()).walls[9]));
	if (c.x >= 0 && c.y > 0 && c.x <= ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1 && (c.x == 0 || (*map())[c.y - 1][c.x] == '1')
	&& (c.x == ft_strlen2((*map())[0]) - 2 || (*map())[c.y + 1][c.x] == '1'))
		return (&((*sp()).walls[10]));
	if (c.x > 0 && c.y >= 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y <= ft_height((*map())) - 1 && (c.y == 0 ||
	(*map())[c.y][c.x + 1] == '1')
	&& (c.y == ft_height(*map()) - 1 || (*map())[c.y][c.x - 1] == '1'))
		return (&((*sp()).walls[11]));
	if (c.x >= 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y <= ft_height((*map())) - 1
	&& (*map())[c.y][c.x + 1] == '1' && ((*map())[c.y - 1][c.x] == '1'))
		return (&((*sp()).walls[16]));
	if (c.x >= 0 && c.y >= 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y][c.x + 1] == '1' && (*map())[c.y + 1][c.x] == '1')
		return (&((*sp()).walls[13]));
	else
		return (NULL);
}

t_img	*walls_14(t_coord c)
{
	if (c.x > 0 && c.y >= 0 && c.x <= ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y][c.x - 1] == '1' && (*map())[c.y + 1][c.x] == '1')
		return (&((*sp()).walls[14]));
	if (c.x > 0 && c.y > 0 && c.x <= ft_strlen2((*map())[0]) - 2 &&
	c.y <= ft_height((*map())) - 1
	&& (*map())[c.y][c.x - 1] == '1' && (*map())[c.y - 1][c.x] == '1')
		return (&((*sp()).walls[15]));
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y + 1][c.x] == '1')
		return (&((*sp()).walls[29]));
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y][c.x - 1] == '1')
		return (&((*sp()).walls[30]));
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y - 1][c.x] == '1')
		return (&((*sp()).walls[31]));
	else
		return (NULL);
}

t_img	*walls_15(t_coord c)
{
	if (c.x > 0 && c.y > 0 && c.x < ft_strlen2((*map())[0]) - 2 &&
	c.y < ft_height((*map())) - 1
	&& (*map())[c.y][c.x + 1] == '1')
		return (&((*sp()).walls[32]));
	else
		return (&((*sp()).walls[0]));
}
