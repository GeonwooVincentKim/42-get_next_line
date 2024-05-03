/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:27:03 by geonwkim          #+#    #+#             */
/*   Updated: 2024/05/03 16:25:02 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"get_next_line.h"

void	*ft_calloc(size_t n_items, size_t size)
{
	void	*p;
	size_t	size_bytes;

	if (n_items == 0 || size == 0)
	{
		n_items = 1;
		size = 1;
	}
	if (n_items > SIZE_MAX / size)
		return (NULL);
	size_bytes = n_items * size;
	p = malloc(size_bytes);
	if (p != NULL)
		ft_memset(p, 0, size_bytes);
	if (p == NULL)
		return (NULL);
	return (p);
}

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*p;
	size_t			len_size;

	p = (unsigned char *) ptr;
	len_size = 0;
	while (len_size < n)
		p[len_size++] = x;
	return (ptr);
}
