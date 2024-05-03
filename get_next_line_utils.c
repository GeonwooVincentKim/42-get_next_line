/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:27:03 by geonwkim          #+#    #+#             */
/*   Updated: 2024/05/04 00:02:59 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"get_next_line.h"

// static void	*ft_calloc(size_t n_items, size_t size);

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *) str);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newarray;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	newarray = malloc(sizeof(char) * (len + 1));
	if (!newarray)
		return (NULL);
	while (*s1)
		newarray[i++] = *s1++;
	while (*s2)
		newarray[i++] = *s2++;
	newarray[i] = 0;
	return (newarray);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*newarray;
	char	*tmparray;
	size_t	i;

	newarray = malloc(sizeof(char) * (len + 1));
	if (!newarray)
		return (0);
	tmparray = (char *)str + start;
	i = 0;
	while (*tmparray && i < len)
		newarray[i++] = *tmparray++;
	newarray[i] = 0;
	return (newarray);
}

// static void	*ft_calloc(size_t n_items, size_t size)
// {
// 	void	*p;
// 	size_t	size_bytes;

// 	if (n_items == 0 || size == 0)
// 	{
// 		n_items = 1;
// 		size = 1;
// 	}
// 	if (n_items > SIZE_MAX / size)
// 		return (NULL);
// 	size_bytes = n_items * size;
// 	p = malloc(size_bytes);
// 	if (p != NULL)
// 		ft_memset(p, 0, size_bytes);
// 	if (p == NULL)
// 		return (NULL);
// 	return (p);
// }
