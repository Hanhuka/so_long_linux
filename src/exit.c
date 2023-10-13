/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:31:46 by ralves-g          #+#    #+#             */
/*   Updated: 2023/10/13 15:39:16 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	destroy_walls(void)
{
	int i = 0;
	while (i < WALL_COUNT)
	{
		mlx_destroy_image((*window()).mlx, (*sp()).walls[i].img);
	}
	// mlx_destroy_image((*window()).mlx, (*sp()).wall);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall1);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall2);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall3);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall4);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall5);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall6);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall7);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall8);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall9);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall10);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall11);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall12);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall13);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall14);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall15);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall16);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall17);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall18);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall19);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall20);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall21);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall22);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall23);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall24);
}

void	destroy_walls2(void)
{
	;
	// mlx_destroy_image((*window()).mlx, (*sp()).wall25);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall26);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall27);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall28);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall29);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall30);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall31);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall32);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall33);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall34);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall35);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall36);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall37);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall38);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall39);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall40);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall41);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall42);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall43);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall44);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall_16);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall_32);
	// mlx_destroy_image((*window()).mlx, (*sp()).wall_48);
}

void	destroy_sprites(void)
{
	mlx_destroy_image((*window()).mlx, (*sp()).bee_left.img);
	mlx_destroy_image((*window()).mlx, (*sp()).bee_left_16.img);
	mlx_destroy_image((*window()).mlx, (*sp()).bee_left_32.img);
	mlx_destroy_image((*window()).mlx, (*sp()).bee_left_48.img);
	mlx_destroy_image((*window()).mlx, (*sp()).bee_right.img);
	mlx_destroy_image((*window()).mlx, (*sp()).bee_right_16.img);
	mlx_destroy_image((*window()).mlx, (*sp()).bee_right_32.img);
	mlx_destroy_image((*window()).mlx, (*sp()).bee_right_48.img);
	mlx_destroy_image((*window()).mlx, (*sp()).collectable.img);
	mlx_destroy_image((*window()).mlx, (*sp()).collectable2.img);
	mlx_destroy_image((*window()).mlx, (*sp()).collectable3.img);
	mlx_destroy_image((*window()).mlx, (*sp()).collectable_48.img);
	mlx_destroy_image((*window()).mlx, (*sp()).collectable_32.img);
	mlx_destroy_image((*window()).mlx, (*sp()).collectable_16.img);
	mlx_destroy_image((*window()).mlx, (*sp()).exit.img);
	mlx_destroy_image((*window()).mlx, (*sp()).exit_16.img);
	mlx_destroy_image((*window()).mlx, (*sp()).exit_32.img);
	mlx_destroy_image((*window()).mlx, (*sp()).exit_48.img);
	mlx_destroy_image((*window()).mlx, (*sp()).exit_open.img);
	mlx_destroy_image((*window()).mlx, (*sp()).exit_16_open.img);
	mlx_destroy_image((*window()).mlx, (*sp()).exit_32_open.img);
	mlx_destroy_image((*window()).mlx, (*sp()).exit_48_open.img);
	mlx_destroy_image((*window()).mlx, (*sp()).sus.img);
	mlx_destroy_image((*window()).mlx, (*sp()).sus_left.img);
	mlx_destroy_image((*window()).mlx, (*sp()).sus_16.img);
}

void	ft_objtclear(t_objt **stack)
{
	t_objt	*ptr;

	if (!stack || !*stack)
		return ;
	while (stack && *stack)
	{
		ptr = (*stack)->next;
		free(*stack);
		*stack = ptr;
	}
}

void	exit_game(char *str)
{
	write(1, str, ft_strlen(str));
	ft_objtclear((objects(64)));
	ft_objtclear((objects(48)));
	ft_objtclear((objects(32)));
	ft_objtclear((objects(16)));
	ft_lstclear(collec());
	destroy_walls();
	// destroy_walls2();
	destroy_sprites();
	destroy_sprites2();
	mlx_clear_window((*window()).mlx, (*window()).mlx_win);
	mlx_destroy_window((*window()).mlx, (*window()).mlx_win);
	mlx_destroy_display((*window()).mlx);
	free_map(map());
	free((*window()).mlx);
	exit(0);
}
