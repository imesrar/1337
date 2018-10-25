/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 22:41:47 by imesrar           #+#    #+#             */
/*   Updated: 2018/10/12 22:41:51 by imesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		len;
	size_t	start;
	char	*s_p;

	if (s)
	{
		len = 0;
		while (s[len] && (s[len] == '\t' || s[len] == ' ' || s[len] == '\n'))
			len++;
		start = len;
		if (start == (size_t)ft_strlen(s))
			return (ft_strnew(1));
		len = ft_strlen(s);
		len--;
		while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
			len--;
		len++;
		if ((s_p = ft_strsub(s, start, len - start)))
			return (s_p);
		else
			return (NULL);
	}
	return (NULL);
}
