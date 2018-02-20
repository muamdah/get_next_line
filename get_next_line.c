/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 14:59:26 by muamdah           #+#    #+#             */
/*   Updated: 2018/02/15 15:22:40 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "include/libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int   ft_l(char *s)
{
    static int i;
    int j;

    j = 0;
    if(!(s))
        return (0);
    while (s[i] != '\n')
    {
        ft_putchar('a');
        ft_putchar(s[i]);
        i++;
    }
    return (1);
}

int		get_next_line(const int fd, char **line)
{   
    int i;
    int ret;
    char buf[BUF_SIZE + 1];
    char **s;

    i = 0;
    // while ((ret = read(fd, buf, BUF_SIZE)))
    //     i++;
    // if (!(s = (char**)malloc(sizeof(char*) * i + 1)))
    //     s[i] = NULL;
    while ((ret = read(fd, buf, BUF_SIZE)))
    {
        buf[ret] = '\0';
        line[i++] = ft_strdup(buf);
    }
    i++;
    s[i] = NULL;
    while (ft_l(*line))
        line++;
    if (close(fd) == -1)
        return(0);
    return (0);
}