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

int     size_p(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\n')
    {
        i++;
       // printf("%d\n", i);
    }
    return (i);
}

char    *line_d(char *str)
{
    int i;
    
    i = 0;
    str = ft_strsub(str, i, size_p(str));
    //printf("[%s]\n", str);
    while (i < 4)
    {
        i++;
    }
    i++;
    //printf("[%s]\n", str);
    //s = ft_strchr(str, '\n');
    return (str);
}

char    *recup(const int fd, char *str)
{
    int ret;
    int g;
    char buf[BUF_SIZE + 1];

    g = 0;
    while ((ret = read(fd, buf, BUF_SIZE)))
    {
        buf[ret] = '\0';
        str = ft_strjoin(str, buf);
        g = ret + g;
    }
    str[g - 1] = '\0';
    if (close(fd) == -1)
        return(0);
    return (str);
}

int		get_next_line(const int fd, char **line)
{   
    static char *str;

    if (!str)
    {
        str = ft_strnew(0);
        str = recup(fd ,str);
    }
    //printf("%p\n", str);
    //printf("{%p}\n", line);
    str = line_d(str); 
    printf("%p\n", s);
    *line = &str;
    printf("{%p}\n", line);
     if (line)
         return (1);
    return (0);
}