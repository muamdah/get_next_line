/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:50:46 by miclaude          #+#    #+#             */
/*   Updated: 2017/11/20 18:55:07 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;

	i = ft_strlen(s1);
	if (!(str = (char*)malloc(sizeof(*str) * (i + 1))))
		return (NULL);
	i = 0;
	str = ft_strcpy(str, s1);
	return (str);
}
