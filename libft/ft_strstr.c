/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:21:49 by muamdah           #+#    #+#             */
/*   Updated: 2017/12/28 16:23:28 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *to_find)
{
	int i;
	int a;

	i = 0;
	if (to_find[0] == '\0')
		return ((char*)s1);
	while (s1[i])
	{
		a = 0;
		while (s1[i + a] == to_find[a])
		{
			a++;
			if (to_find[a] == '\0')
				return ((char*)s1 + i);
		}
		i++;
	}
	return (0);
}
