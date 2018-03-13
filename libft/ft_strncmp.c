/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 13:53:01 by muamdah           #+#    #+#             */
/*   Updated: 2018/01/09 12:07:47 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			a;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	a = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] != '\0' || str2[i] != '\0') && (a < n || i < n))
	{
		if ((str1[i] > str2[a]) || (str1[i] < str2[a]))
			return (str1[i] - str2[a]);
		i++;
		a++;
	}
	return (0);
}
