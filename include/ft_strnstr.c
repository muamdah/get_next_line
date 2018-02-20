/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:08:35 by miclaude          #+#    #+#             */
/*   Updated: 2017/11/21 20:29:58 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1	, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (s2[i] == '\0')
		return ((char*)s1);
	while (s1[i])
	{
		while (s1[i] == s2[j] && i < n)
		{
			if (s2[j + 1] == '\0')
				return ((char*)s1 + k);
			i++;
			j++;
		}
		k++;
		i = k;
		j = 0;
	}
	return (NULL);
}
