/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:21:49 by muamdah           #+#    #+#             */
/*   Updated: 2018/01/18 09:03:51 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	a;
	char	*to_find;

	to_find = (char*)s2;
	i = 0;
	if (to_find[0] == '\0')
		return ((char*)s1);
	while (s1[i])
	{
		a = 0;
		while (s1[i + a] == to_find[a] && (i + a) < n)
		{
			a++;
			if (to_find[a] == '\0')
				return ((char*)s1 + i);
		}
		i++;
	}
	return (NULL);
}
