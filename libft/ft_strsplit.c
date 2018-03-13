/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/01 18:47:00 by muamdah           #+#    #+#             */
/*   Updated: 2018/01/18 09:42:44 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_wd(char const *s, char c)
{
	int			i;
	int			b;

	i = 0;
	b = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			i++;
		b++;
		while (s[i] == c && s[i])
			i++;
	}
	return (b);
}

static int		ft_count_lt(char const *s, char c, int i, int *j)
{
	int			x;

	x = *j;
	while (s[x] && s[x] == c)
		x++;
	while (s[x] && s[x] != c)
	{
		i++;
		x++;
	}
	*j = x;
	return (i);
}

static char		*ft_printer(char const *s, char c, int *j)
{
	int			i;
	int			a;
	char		*w;

	i = *j;
	a = 0;
	w = (char*)malloc(sizeof(char) * (ft_count_lt(s, c, i, j) + 1));
	if (!w)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			w[a++] = s[i++];
		if (s[i] && s[i] == c)
			break ;
	}
	w[a] = '\0';
	return (w);
}

char			**ft_strsplit(char const *s, char c)
{
	int			i;
	int			a;
	int			j;
	char		**s2;

	a = 0;
	i = 0;
	j = 0;
	if (!s || !(s2 = (char **)malloc(sizeof(char*) * (ft_count_wd(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (a < ft_count_wd(s, c) && s[i] != c)
		{
			s2[a] = ft_printer(s, c, &j);
			a++;
			i++;
		}
		i++;
	}
	s2[a] = NULL;
	return (s2);
}
