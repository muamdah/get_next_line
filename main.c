/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 14:01:54 by muamdah           #+#    #+#             */
/*   Updated: 2018/02/19 14:01:57 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include "get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
    int fd;
    char *line;
    int i;

    i = 0;
    line = NULL;
    if (argc != 2)
        return (0);
    fd = open(argv[1],O_RDONLY);
    if (fd == -1)
        return(0);
    while (get_next_line(fd, &line) == 1)
    {
        ft_putstr(line);
       //ft_putchar('i');
    }
    
    return (0);
}