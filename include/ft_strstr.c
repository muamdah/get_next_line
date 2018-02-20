/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:52:13 by miclaude          #+#    #+#             */
/*   Updated: 2017/11/20 16:05:20 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s2[k] != '\0')
		k++;
	if (k == 0)
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		while (s2[j] == s1[i + j])
		{
			if (j == k - 1)
				return ((char *)s1 + i);
			j++;
		}
		i++;
	}
	return (0);
}
