/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 13:58:40 by muamdah           #+#    #+#             */
/*   Updated: 2018/01/18 09:06:34 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t d_len;
	size_t s_len;
	size_t res_len;

	d_len = ft_strlen(dest);
	s_len = ft_strlen((char*)src);
	res_len = 0;
	if (d_len >= size)
		return (size + s_len);
	while (src[res_len] && (d_len + res_len < size - 1))
	{
		dest[d_len + res_len] = (char)src[res_len];
		res_len++;
	}
	dest[d_len + res_len] = '\0';
	return (d_len + s_len);
}
