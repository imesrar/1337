/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 15:07:40 by imesrar           #+#    #+#             */
/*   Updated: 2018/10/11 15:51:15 by imesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*p;

	if (s)
	{
		if (((p = (char *)malloc(ft_strlen(s) + 1))) == NULL)
			return (NULL);
		i = 0;
		while (s[i])
		{
			p[i] = (*f)(s[i]);
			i++;
		}
		p[i] = '\0';
		return (p);
	}
	return (NULL);
}
