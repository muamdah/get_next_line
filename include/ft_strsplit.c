/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:37:32 by miclaude          #+#    #+#             */
/*   Updated: 2017/12/17 19:15:34 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_l(char const *s, char c, int i)
{
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	ft_w(char const *s, char c)
{
	int i;
	int word;

	i = 0;
	word = 0;
	if (s[i] == '\0')
		return (0);
	if (s[0] != c)
		word++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			word++;
		i++;
	}
	return (word);
}

static char	*ft_print(char const *s, int i, char c)
{
	char	*str;
	int		l;

	l = 0;
	if (s[i])
		if (!(str = (char*)malloc(sizeof(str) * ft_l(s, c, i) - i + 1)))
			return (NULL);
	while (s[i] && s[i] != c)
		str[l++] = s[i++];
	str[l] = '\0';
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		w;

	i = 0;
	w = 0;
	if (!s)
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_w(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			tab[w] = ft_print(s, i, c);
			w++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	tab[w] = NULL;
	return (tab);
}
