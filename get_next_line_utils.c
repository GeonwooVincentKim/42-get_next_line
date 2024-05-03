/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:27:03 by geonwkim          #+#    #+#             */
/*   Updated: 2024/05/03 20:17:17 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"get_next_line.h"

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

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	newarray = (char *)malloc(sizeof(char) * (len + 1));
	if (!newarray)
		return (NULL);
	ft_strlcpy(newarray, s1, len + 1);
	ft_strlcat(newarray, s2, len + 1);
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
	size_t	len_s;

	if (!str)
		return (NULL);
	len_s = ft_strlen(str);
	if (len_s < start || len == 0)
		return (newarray = ft_calloc(1, 1));
	else if (len_s - start < len)
		len = len_s - start;
	newarray = (char *)malloc((len + 1));
	if (!newarray)
		return (NULL);
	ft_strlcpy(newarray, str + start, len + 1);
	return (newarray);
}
