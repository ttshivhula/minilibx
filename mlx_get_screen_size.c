/*
 * =====================================================================================
 *
 *       Filename:  mlx_get_screen_size.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  18-06-20 09:37:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Stan Verschuuren (), sverschu@student.codam.nl
 *   Organization:  Codam Coding College
 *
 * =====================================================================================
 */

#include "mlx_int.h"

int	mlx_get_screen_size(t_xvar *mlx_ptr, int *sizex, int *sizey)
{
	*sizex = DisplayWidth (mlx_ptr->display, mlx_ptr->screen);
	*sizey = DisplayHeight (mlx_ptr->display, mlx_ptr->screen);
	return (0);
}
