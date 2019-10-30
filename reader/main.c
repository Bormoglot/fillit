/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavona <jlavona@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:22:26 by jlavona           #+#    #+#             */
/*   Updated: 2019/10/30 19:40:50 by jlavona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"

int main(int argc, char **argv)
{
	char    *file_path;
	int     fd;

	if (argc == 2)
	{
		ft_putendl("Success");
		file_path = argv[1];

		fd = open(file_path, O_RDONLY);
		if (fd != -1)
		{
			read_input(fd);
		}
		else
		{
			ft_putendl("Error");
			return (0);
		}
		if (close(fd) == -1)
		{
			ft_putendl("Error");
			return (0);
		}
		return (1);
	}
	else
	{
		ft_putendl("Error");
		return (0);
	}
}