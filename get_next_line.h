/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:19:30 by geonwkim          #+#    #+#             */
/*   Updated: 2024/05/03 16:49:54 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include	<unistd.h>
# include	<stdio.h>
# include	<stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

// get_next_line.c
char	*get_next_line(int fd);

// get_next_line_utils.c
void	*ft_calloc(size_t n_items, size_t size);
void	*ft_memset(void *ptr, int x, size_t n);

#endif
