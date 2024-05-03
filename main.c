/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:56:38 by geonwkim          #+#    #+#             */
/*   Updated: 2024/05/03 16:11:53 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <fcntl.h>
// #include "get_next_line.h" 

// int main(void)
// {
//  int  fd;
//  char *line;
//  int  count;

//  count = 0;
//  fd = open("example.txt", O_RDONLY);
//  if (fd == -1)
//  {
//   printf("Error opening file");
//   return (1);
//  }
//  while (1)
//  {
//   line = get_next_line(fd);
//   if (line == NULL)
//    break ;
//   count++;
//   printf("[%d]:%s\n", count, line);
//   free(line);
//   line = NULL;
//  }
//  close(fd);
//  return (0);
// }