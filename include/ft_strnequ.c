/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:20:12 by miclaude          #+#    #+#             */
/*   Updated: 2017/11/19 16:02:55 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 && s2)
	{
		while (i < n)
		{
			if (s1[i] != s2[i])
				return (0);
			else if (s1[i] == s2[i])
				i++;
		}
		return (1);
	}
	return (0);
}
