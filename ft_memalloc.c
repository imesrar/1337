/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 21:10:11 by imesrar           #+#    #+#             */
/*   Updated: 2018/10/12 21:22:39 by imesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;
	size_t	i;

	if (!(ptr = malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	while (i < size)
		((char *)ptr)[i++] = 0;
	return ((void *)ptr);
}
