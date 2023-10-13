/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preparations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:42:01 by ralves-g          #+#    #+#             */
/*   Updated: 2023/10/11 16:43:38 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_walls(t_win *win)
{
	int		i;
	char	*name;
	char	*tmp;
	char	*wall_c;

	i = 0;
	while (i < WALL_COUNT)
	{
		wall_c = ft_itoa(i);
		name = ft_strjoin(WALL_NAME, wall_c);
		free(wall_c);
		tmp = ft_strjoin(name, ".xpm");
		free(name);
		name = ft_strjoin(SPATH, tmp);
		free(tmp);
		printf("Creating wall named [%s]\n", name);
		(*sp()).walls[i].img = mlx_xpm_file_to_image((*win).mlx, name, &((*sp()).walls[i].width), &((*sp()).walls[i].height));
		(*sp()).walls[i].addr = mlx_get_data_addr((*sp()).walls[i].img, &((*sp()).walls[i].bits_per_pixel), &((*sp()).walls[i].line_length), &((*sp()).walls[i].endian));
		free(name);
		i++;
	}
	(*sp()).wall_48.img = mlx_xpm_file_to_image((*win).mlx, SPATH"Wall_48.xpm", &((*sp()).wall_48.width), &((*sp()).wall_48.height));
	(*sp()).wall_48.addr = mlx_get_data_addr((*sp()).wall_48.img, &((*sp()).wall_48.bits_per_pixel),  &((*sp()).wall_48.line_length), &((*sp()).wall_48.endian));

	(*sp()).wall_32.img = mlx_xpm_file_to_image((*win).mlx, SPATH"Wall_32.xpm", &((*sp()).wall_32.width), &((*sp()).wall_32.height));
	(*sp()).wall_32.addr = mlx_get_data_addr((*sp()).wall_32.img, &((*sp()).wall_32.bits_per_pixel),  &((*sp()).wall_32.line_length), &((*sp()).wall_32.endian));
	
	(*sp()).wall_16.img = mlx_xpm_file_to_image((*win).mlx, SPATH"Wall_16.xpm", &((*sp()).wall_16.width), &((*sp()).wall_16.height));
	(*sp()).wall_16.addr = mlx_get_data_addr((*sp()).wall_16.img, &((*sp()).wall_16.bits_per_pixel),  &((*sp()).wall_16.line_length), &((*sp()).wall_16.endian));
}

void	init_bees(t_win *win) {
	;
	(*sp()).bee_left.img = mlx_xpm_file_to_image((*win).mlx, SPATH"Bee_64_left.xpm", &((*sp()).bee_left.width), &((*sp()).bee_left.height));
	(*sp()).bee_left.addr = mlx_get_data_addr((*sp()).bee_left.img, &((*sp()).bee_left.bits_per_pixel),  &((*sp()).bee_left.line_length), &((*sp()).bee_left.endian));
	(*sp()).bee_right.img = mlx_xpm_file_to_image((*win).mlx, SPATH"Bee_64_right.xpm", &((*sp()).bee_right.width), &((*sp()).bee_right.height));
	(*sp()).bee_right.addr = mlx_get_data_addr((*sp()).bee_right.img, &((*sp()).bee_right.bits_per_pixel),  &((*sp()).bee_right.line_length), &((*sp()).bee_right.endian));

	(*sp()).bee_left_48.img = mlx_xpm_file_to_image((*win).mlx, SPATH"Bee_left_48.xpm", &((*sp()).bee_left_48.width), &((*sp()).bee_left_48.height));
	(*sp()).bee_left_48.addr = mlx_get_data_addr((*sp()).bee_left_48.img, &((*sp()).bee_left_48.bits_per_pixel),  &((*sp()).bee_left_48.line_length), &((*sp()).bee_left_48.endian));
	(*sp()).bee_right_48.img = mlx_xpm_file_to_image((*win).mlx, SPATH"Bee_right_48.xpm", &((*sp()).bee_right_48.width), &((*sp()).bee_right_48.height));
	(*sp()).bee_right_48.addr = mlx_get_data_addr((*sp()).bee_right_48.img, &((*sp()).bee_right_48.bits_per_pixel),  &((*sp()).bee_right_48.line_length), &((*sp()).bee_right_48.endian));

	(*sp()).bee_left_32.img = mlx_xpm_file_to_image((*win).mlx, SPATH"Bee_left_32.xpm", &((*sp()).bee_left_32.width), &((*sp()).bee_left_32.height));
	(*sp()).bee_left_32.addr = mlx_get_data_addr((*sp()).bee_left_32.img, &((*sp()).bee_left_32.bits_per_pixel),  &((*sp()).bee_left_32.line_length), &((*sp()).bee_left_32.endian));
	(*sp()).bee_right_32.img = mlx_xpm_file_to_image((*win).mlx, SPATH"Bee_right_32.xpm", &((*sp()).bee_right_32.width), &((*sp()).bee_right_32.height));
	(*sp()).bee_right_32.addr = mlx_get_data_addr((*sp()).bee_right_32.img, &((*sp()).bee_right_32.bits_per_pixel),  &((*sp()).bee_right_32.line_length), &((*sp()).bee_right_32.endian));

	(*sp()).bee_left_16.img = mlx_xpm_file_to_image((*win).mlx, SPATH"Bee_left_16.xpm", &((*sp()).bee_left_16.width), &((*sp()).bee_left_16.height));
	(*sp()).bee_left_16.addr = mlx_get_data_addr((*sp()).bee_left_16.img, &((*sp()).bee_left_16.bits_per_pixel),  &((*sp()).bee_left_16.line_length), &((*sp()).bee_left_16.endian));
	(*sp()).bee_right_16.img = mlx_xpm_file_to_image((*win).mlx, SPATH"Bee_right_16.xpm", &((*sp()).bee_right_16.width), &((*sp()).bee_right_16.height));
	(*sp()).bee_right_16.addr = mlx_get_data_addr((*sp()).bee_right_16.img, &((*sp()).bee_right_16.bits_per_pixel),  &((*sp()).bee_right_16.line_length), &((*sp()).bee_right_16.endian));
}

// void	init_walls1(t_win *win, int *s)
// {
// 	((*sp()).wall) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64|=|.xpm", s, s);
// 	((*sp()).wall1) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64|-.xpm", s, s);
// 	((*sp()).wall2) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64-.xpm", s, s);
// 	((*sp()).wall3) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64-|.xpm", s, s);
// 	((*sp()).wall4) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64|.xpm", s, s);
// 	((*sp()).wall5) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64(void).xpm", s, s);
// 	((*sp()).wall6) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64 |.xpm", s, s);
// 	((*sp()).wall7) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64|_.xpm", s, s);
// 	((*sp()).wall8) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_.xpm", s, s);
// 	((*sp()).wall9) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_|.xpm", s, s);
// 	((*sp()).wall10) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64||.xpm", s, s);
// }

// void	init_walls2(t_win *win, int *s)
// {
// 	((*sp()).wall11) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64=.xpm", s, s);
// 	((*sp()).wall12) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_corners.xpm", s, s);
// 	((*sp()).wall13) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64|-c.xpm", s, s);
// 	((*sp()).wall14) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64-|c.xpm", s, s);
// 	((*sp()).wall15) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_|c.xpm", s, s);
// 	((*sp()).wall16) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64|_c.xpm", s, s);
// 	((*sp()).wall17) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64tl.xpm", s, s);
// 	((*sp()).wall18) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64tr.xpm", s, s);
// 	((*sp()).wall19) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64br.xpm", s, s);
// 	((*sp()).wall20) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64bl.xpm", s, s);
// 	((*sp()).wall21) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_2t.xpm", s, s);
// }

// void	init_walls3(t_win *win, int *s)
// {
// 	((*sp()).wall22) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_2r.xpm", s, s);
// 	((*sp()).wall23) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_2b.xpm", s, s);
// 	((*sp()).wall24) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_2l.xpm", s, s);
// 	((*sp()).wall25) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_3tr.xpm", s, s);
// 	((*sp()).wall26) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_3br.xpm", s, s);
// 	((*sp()).wall27) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_3bl.xpm", s, s);
// 	((*sp()).wall28) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_3tl.xpm", s, s);
// 	((*sp()).wall29) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_end_t.xpm", s, s);
// 	((*sp()).wall30) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_end_r.xpm", s, s);
// 	((*sp()).wall31) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_end_b.xpm", s, s);
// 	((*sp()).wall32) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_end_l.xpm", s, s);
// }

// void	init_walls4(t_win *win, int *s)
// {
// 	((*sp()).wall33) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_lc_tl.xpm", s, s);
// 	((*sp()).wall34) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_lc_tr.xpm", s, s);
// 	((*sp()).wall35) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_lc_rt.xpm", s, s);
// 	((*sp()).wall36) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_lc_rb.xpm", s, s);
// 	((*sp()).wall37) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_lc_br.xpm", s, s);
// 	((*sp()).wall38) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_lc_bl.xpm", s, s);
// 	((*sp()).wall39) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_lc_lb.xpm", s, s);
// 	((*sp()).wall40) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_lc_lt.xpm", s, s);
// 	((*sp()).wall41) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_lc2_t.xpm", s, s);
// 	((*sp()).wall42) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_lc2_r.xpm", s, s);
// 	((*sp()).wall43) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_lc2_b.xpm", s, s);
// 	((*sp()).wall44) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Wall_64_lc2_l.xpm", s, s);
// }

// void	init_bees(t_win	*win, int s)
// {
// 	((*sp()).bee_left) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Bee_64_left.xpm", &s, &s);
// 	((*sp()).bee_right) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Bee_64_right.xpm", &s, &s);
// 	((*sp()).bee_left_48) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Bee_left_48.xpm", &s, &s);
// 	((*sp()).bee_right_48) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Bee_right_48.xpm", &s, &s);
// 	((*sp()).bee_left_32) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Bee_left_32.xpm", &s, &s);
// 	((*sp()).bee_right_32) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Bee_right_32.xpm", &s, &s);
// 	((*sp()).bee_left_16) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Bee_left_16.xpm", &s, &s);
// 	((*sp()).bee_right_16) = mlx_xpm_file_to_image((*win).mlx,
// 			SPATH"Bee_right_16.xpm", &s, &s);
// }
