/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:33:58 by ralves-g          #+#    #+#             */
/*   Updated: 2023/06/15 18:59:58 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_bckgrnd_clear(t_anim **stack)
{
	t_anim	*ptr;

	break_circle(stack);
	if (!stack || !*stack)
		return ;
	while (stack && *stack)
	{
		ptr = (*stack)->next;
		if ((*stack)->img)
			mlx_destroy_image((*window()).mlx, (*stack)->img);
		free(*stack);
		*stack = ptr;
	}
}

void	destroy_sprites2(void)
{
	mlx_destroy_image((*window()).mlx, (*sp()).sus_16_left);
	mlx_destroy_image((*window()).mlx, (*sp()).sus_32);
	mlx_destroy_image((*window()).mlx, (*sp()).sus_32_left);
	mlx_destroy_image((*window()).mlx, (*sp()).sus_48);
	mlx_destroy_image((*window()).mlx, (*sp()).sus_48_left);
	mlx_destroy_image((*window()).mlx, (*sp()).empty16);
	mlx_destroy_image((*window()).mlx, (*sp()).empty32);
	mlx_destroy_image((*window()).mlx, (*sp()).empty48);
	if ((window()->opt == 0))
		mlx_destroy_image((*window()).mlx, (*sp()).background);
	if ((*bckgnd()))
		ft_bckgrnd_clear(bckgnd());
	mlx_destroy_image((*window()).mlx, (*sp()).side_info);
}



int	window_close(void)
{
	exit_game("\e[1;94mWindow closed\n\e[0m");
	return (0);
}
