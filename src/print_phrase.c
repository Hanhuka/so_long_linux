#include "../so_long.h"

void	print_phrase(t_win *win, char *str, int x_start, int y_start, int width, int height, int spacing, t_img *font) {

	for (int i = 0; str && str[i]; i++) {
		print_character(win, str[i], x_start + (i * (width + spacing)), y_start, width, height, font);
	}
}

void	print_character(t_win *win, char c, int x_start, int y_start, int width, int height, t_img *font) {
	// WIDTH = 9
	// HEIGHT = 7
	int start;
	if (width <= 0 || height <= 0)
	{
		printf("width or height < 0\n");
		return ;
	}
	// printf("character = [%c]\n", c);
	if (c >= 'a' && c <= 'z')
		start = 9 * 10 + (c - 'a') * 9;
	else if (c >= '0' && c <= '9')
		start = (c - '0') * 9;
	else
		return ;
	// printf("start = %d\n", start);
	for (int x = 0; x < width; x++)
	{
		for (int y = 0; y < height; y++)
		{
			// printf("putting pixel at x[%d]y[%d]\n", x_start + x, y_start + y);
			my_mlx_pixel_put(&win->frame, x_start + x, y_start + y, get_image_color(font, ((double)x / (double)width) * 9.0 + (double) start, ((double)y / (double)height) * 7.0));
		}
	}

}
