/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavona <jlavona@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:31:34 by jlavona           #+#    #+#             */
/*   Updated: 2019/11/07 18:41:03 by jlavona          ###   ########.fr       */
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
# define POINTS_IN_SHAPE 4

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

t_tetri				*read_input(int fd);
int					save_tetri(char *block, char block_letter, t_tetri *list);
t_tetri				*ft_createlist(t_point const *shape, char letter);
int					ft_addnode(t_point *shape, char letter, t_tetri *last_node);
void				ft_deletelist(t_tetri *list_head);
void				print_tetri(t_point *shape, char block_letter);
void				ft_printlist(t_tetri *node);
#endif
