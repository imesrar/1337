/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:39:03 by imesrar           #+#    #+#             */
/*   Updated: 2018/10/08 13:39:10 by imesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*sdst;
	unsigned char	*ssrc;

	i = 0;
	sdst = (unsigned char *)dst;
	ssrc = (unsigned char *)src;
	while (i < n)
	{
		sdst[i] = ssrc[i];
		if (ssrc[i] == (unsigned char)c)
			return ((void *)&sdst[i + 1]);
		i++;
	}
	return (NULL);
}
