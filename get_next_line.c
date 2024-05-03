/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:01:11 by geonwkim          #+#    #+#             */
/*   Updated: 2024/05/03 20:17:27 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Read data from the file and append it to partial content
static void	read_from_file(int fd, char *buffer_cup, char **str)
{
	int			count;
	char		*buffer_cup_tmp;

	if (!*str || !ft_strchr(*str, '\n'))
	{
		count = read(fd, buffer_cup, BUFFER_SIZE);
		while (count > 0)
		{
			buffer_cup_tmp[count] = 0;
			if (!*str)
				*str = ft_substr(buffer_cup, 0, count);
			else
			{
				buffer_cup_tmp = *str;
				*str = ft_strjoin(*str, buffer_cup);
				free(buffer_cup_tmp);
			}
			if (ft_strchr(buffer_cup, '\n'))
				break ;
			count = read(fd, buffer_cup, BUFFER_SIZE);
		}
	}
	free(buffer_cup);
}

// Get the next line from the file descriptor
// basin = たらい
char	*get_next_line(int fd)
{
	char		*basin_buffer;
	static char	*str;

	basin_buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!basin_buffer)
		return (0);
	if (BUFFER_SIZE < 1 || fd == -1 || read(fd, basin_buffer, 0) == -1)
	{
		free(basin_buffer);
		return (0);
	}
	read_from_file(fd, basin_buffer, &str);
	return (get_next_process(&str));
}

// Convert and print the newline character as ?
void	print_newline_helper(char *buffer)
{
	while (*buffer && *buffer != '\0')
	{
		if (*buffer == '\n')
			*buffer = '\\';
		buffer++;
	}
}
