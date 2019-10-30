/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavona <jlavona@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:31:34 by jlavona           #+#    #+#             */
/*   Updated: 2019/10/30 21:11:24 by jlavona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READER_H
# define READER_H
# include <fcntl.h>
# include <unistd.h>
# include "./libft/libft.h"
# define NUM_CHARS_IN_BLOCK_WITH_NEWLINE 21
# define NUM_CHARS_IN_BLOCK 20

int	read_input(int fd);
#endif