/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memshr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 11:26:44 by miclaude          #+#    #+#             */
/*   Updated: 2017/11/22 14:40:30 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	t;
	unsigned int	i;
	unsigned char	*s1;

	i = 0;
	s1 = (unsigned char*)s;
	t = (unsigned char)c;
	while (i < n)
	{
		if ((unsigned char)s1[i] == t)
			return (&s1[i]);
		i++;
	}
	return (0);
}
