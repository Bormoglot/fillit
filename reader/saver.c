/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   saver.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavona <jlavona@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 20:27:08 by jlavona           #+#    #+#             */
/*   Updated: 2019/10/31 21:44:09 by jlavona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
** Shifts the coords to the upper-left (to the origin)
** Input and output:
** 		int array[8]
*/

int normalize_coords(int coords[], int min_coords[])
{

}

/*
** Gets the minimum x and y coords in an int array[8] of coords.
** Returns and int array[2]: {min_x, min_y}.
*/

int	get_min_xy(int coords[])
{
	int	min_coords[2];
	int	min_x;
	int	min_y;
	int	i;

	min_x = coords[0];
	min_y = coords[1];
	while (i < 8)
	{
		if ((i + 1) % 2 != 0)
		{
			if (coords[i] < min_x)
				min_x = coords[i];
		}
		else
		{
			if (coords[i] < min_y)
				min_y = coords[i];
		}
		++i;
	}
	min_coords[0] = min_x;
	min_coords[1] = min_y;
	return (min_coords);
}

/*
** Reads the first 18 chars of an array representing a block.
** Returns an array of 8 ints, representing [x, y] coords of '#' in a block:
** {x1, y1, x2, y2, x3, y3, x4, y4}.
*/

int		get_coords(char *block)
{
	int	x_counter;
	int	y_counter;
	int	i;
	int	coords[8];
	int	coords_ix;

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
			coords[coords_ix] = x_counter;
			++coords_ix;
			coords[coords_ix] = y_counter;
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