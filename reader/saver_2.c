/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   saver_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavona <jlavona@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 20:27:08 by jlavona           #+#    #+#             */
/*   Updated: 2019/11/01 15:04:35 by jlavona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define POINTS_IN_SHAPE 4

typedef struct		s_point
{
	unsigned char	x;
	unsigned char	y;
}					t_point;

/*
** Shifts the coords to the upper-left (to the origin)
** Input and output:
** 		int array[8]
*/

t_point		*normalize_coords(t_point min_xy, t_point min_coords[])
{

}

/*
** Gets the minimum x and y coords in an array of 4 point structs.
** Returns a point struct.
*/

t_point		get_min_xy(t_point coords[])
{
	t_point	min_xy;
	int		min_x;
	int		min_y;
	int		i;

	min_x = coords[0].x;
	min_y = coords[0].y;
	i = 0;
	while (i < POINTS_IN_SHAPE)
	{
		if (coords[i].x < min_x)
			min_x = coords[i].x;
		if (coords[i].y < min_y)
			min_y = coords[i].y;
		++i;
	}
	min_xy.x = min_x;
	min_xy.y = min_y;
	return (min_xy);
}

/*
** Reads the first 18 chars of an array representing a block.
** Assumes a block is valid.
** Returns an array of 4 point structs.
*/

t_point		*get_coords(char *block)
{
	int		x_counter;
	int		y_counter;
	int		i;
	t_point	coords[POINTS_IN_SHAPE];
	int		coords_ix;

	i = 0;
	x_counter = 0;
	y_counter = 0;
	coords_ix = 0;
	while (i < NUM_CHARS_IN_BLOCK - 1)
	{
		if (block[i] == '\n')
		{
			++y_counter;
			x_counter = 0;
		}
		if (block[i] == '#')
		{
			coords[coords_ix].x = x_counter;
			coords[coords_ix].y = y_counter;
			++coords_ix;
		}
		++x_counter;
		++i;
	}
	return (coords);
}

int		save_tetri(char *block)
{

}