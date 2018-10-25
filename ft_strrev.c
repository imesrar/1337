/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 12:32:27 by imesrar           #+#    #+#             */
/*   Updated: 2018/10/17 02:52:07 by imesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		n;
	char	temp;

	i = 0;
	n = ft_strlen(str) - 1;
	while (i <= (n / 2))
	{
		temp = *(str + i);
		*(str + i) = *(str + n - i);
		*(str + n - i) = temp;
		i++;
	}
	return (str);
}
