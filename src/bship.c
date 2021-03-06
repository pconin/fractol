#include "fractol.h"

void	func_bship(t_mem *s)
{
	s->x = 0;
	while (++s->x < s->img_x)
	{
		s->y = 0;
		while (++s->y < s->img_y)
		{
			s->z_i = 0;
			s->z_r = 0;
			s->i = 0;
			s->c_r = s->x / s->zoom + s->x1;
			s->c_i = s->y / s->zoom + s->y1;
			while (s->z_r * s->z_r + s->z_i * s->z_i < 4 && s->i < s->iter)
			{
				s->tmp = s->z_r;
				s->z_r = s->z_r * s->z_r - s->z_i * s->z_i + s->c_r;
				s->z_i =  2 * fabs(s->z_i * s->tmp) + s->c_i;
				s->i++;
			}
			put_pixel_in_image(s->x, s->y, s->i, s);
		}
	}
	return;
}
void	func_bbird(t_mem *s)
{
	s->x = 0;
	while (++s->x < s->img_x)
	{
		s->y = 0;
		while (++s->y < s->img_y)
		{
			s->z_i = 0;
			s->z_r = 0;
			s->i = 0;
			s->c_r = s->x / s->zoom + s->x1;
			s->c_i = s->y / s->zoom + s->y1;
			while (s->z_r * s->z_r + s->z_i * s->z_i < 4 && s->i < s->iter)
			{
				s->tmp = s->z_r;
				s->z_r = s->z_r * s->z_r - s->z_i * s->z_i + s->c_r;
				s->z_i =  2 * fabs(s->z_i) * s->tmp + s->c_i;
				s->i++;
			}
			put_pixel_in_image(s->x, s->y, s->i, s);
		}
	}
	return;
}

void	func_cross(t_mem *s)
{
	s->x = 0;
	while (++s->x < s->img_x)
	{
		s->y = 0;
		while(++s->y < s->img_y)
		{
			s->z_i = 0;
			s->z_r = 0;
			s->i = 0;
			s->c_r = s->x / s->zoom + s->x1;
			s->c_i = s->y / s->zoom + s->y1;
			while (s->z_r * s->z_r + s->z_i * s->z_i < 4 && s->i < s->iter)
			{
				s->tmp = s->z_r;
				s->z_r = ((s->z_r * s->z_r) -
				(s->z_i * s->z_i * 3) * fabs(s->z_i)) + s->c_r;
				s->z_i = (s->tmp * s->tmp * 3 -
				(s->z_i * s->z_i)) * fabs(s->z_i) + s->c_i;
				s->i++;
			}
			put_pixel_in_image(s->x, s->y, s->i, s);
		}
	}
}
