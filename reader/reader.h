/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavona <jlavona@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:31:34 by jlavona           #+#    #+#             */
/*   Updated: 2019/11/02 21:28:05 by jlavona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READER_H
# define READER_H
# include <fcntl.h>
# include <unistd.h>
# include "./libft/libft.h"
# define NUM_CHARS_IN_BLOCK_WITH_NEWLINE 21
# define NUM_CHARS_IN_BLOCK 20
# define MAX_NUM_BLOCKS 26

typedef struct		s_point
{
	unsigned char	x;
	unsigned char	y;
}					t_point;

typedef struct		s_tetri
{
	t_point			*shape;
	char			letter;
	struct s_tetri	*next;
}					t_tetri;

int					read_input(int fd);
int					save_tetri(char *block, char block_letter, t_list *list);
#endif
