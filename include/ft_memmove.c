/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 17:54:46 by miclaude          #+#    #+#             */
/*   Updated: 2017/11/20 14:11:54 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest1;
	const unsigned char	*src1;

	i = 0;
	dest1 = dest;
	src1 = src;
	if (dest < src)
	{
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	else if (dest > src)
	{
		while (n > 0)
		{
			n--;
			dest1[n] = src1[n];
		}
	}
	return (dest);
}
