/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 22:14:57 by imesrar           #+#    #+#             */
/*   Updated: 2018/10/12 22:15:00 by imesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;
	size_t	i;
	size_t	j;

	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2) + 1;
		i = 0;
		j = 0;
		if ((str = (char *)malloc(sizeof(*str) * len)))
		{
			while (s1[i])
			{
				str[i] = s1[i];
				i++;
			}
			while (s2[j])
				str[i++] = s2[j++];
			str[i] = '\0';
			return (str);
		}
	}
	return (NULL);
}
