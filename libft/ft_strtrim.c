/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/01 18:47:00 by muamdah           #+#    #+#             */
/*   Updated: 2018/01/18 09:00:03 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(char const *s)
{
	int		i;
	int		a;

	i = 0;
	a = 0;
	while ((s[i]) && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while ((s[i]) && (s[i] != ' ' || s[i] != '\n' || s[i] != '\t'))
	{
		a++;
		i++;
	}
	if (a == 0)
		return (0);
	i--;
	while (i != 0 && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
	{
		a--;
		i--;
	}
	return (a);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		a;
	char	*s2;
	int		s3;

	if (s == NULL)
		return (NULL);
	a = 0;
	i = 0;
	s3 = ft_count(s);
	if (s3 == 0)
		return (ft_strdup(""));
	s2 = (char*)malloc(sizeof(char) * (s3 + 1));
	if (!s2)
		return (NULL);
	while ((s[i]) && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (a < s3)
	{
		s2[a] = s[i];
		a++;
		i++;
	}
	s2[a] = '\0';
	return (s2);
}
