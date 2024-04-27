/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:01:11 by geonwkim          #+#    #+#             */
/*   Updated: 2024/04/27 19:04:00 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int		read_bytes;
	char	*buffer_cup;
	
	buffer_cup = malloc(3 + 1 + sizeof(char));
	if (buffer_cup == NULL)
		return (NULL);
	
}
