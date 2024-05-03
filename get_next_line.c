/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:01:11 by geonwkim          #+#    #+#             */
/*   Updated: 2024/05/03 18:50:46 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Read data from the file and append it to partial content
static char	*read_from_file(int fd)
{
	int			read_bytes;
	char		*buffer_cup;
	static int	count;	

	count = 1;
	// printf("ft_calloc#[%d]---", count++);
	buffer_cup = ft_calloc(3 + 1, sizeof(char));
	if (!buffer_cup)
		return (NULL);
	read_bytes = read(fd, buffer_cup, BUFFER_SIZE);
	if (read_bytes <= 0)
		return (free(buffer_cup), NULL);
	return (buffer_cup);
}

// Get the next line from the file descriptor
// basin = たらい
char	*get_next_line(int fd)
{
	char	*basin_buffer;

	basin_buffer = read_from_file(fd);
	return (basin_buffer);
}

// Convert and print the newline character as ?
void	print_newline_helper(char *buffer)
{
	while (*buffer && *buffer != '\0')
	{
		if (*buffer == '\n')
			*buffer = '\\';
		// printf("%c", *buffer);
		buffer++;
	}
}
