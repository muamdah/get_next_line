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
    char *tab;
    int i;

    i = 0;
    if (argc == 2)
    {
        fd = open(argv[1],O_RDWR);
        if (fd == -1)
            return(0);      
            get_next_line(fd, &tab);
    }
    return (0);
}