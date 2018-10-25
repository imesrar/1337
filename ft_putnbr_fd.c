/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 15:14:17 by imesrar           #+#    #+#             */
/*   Updated: 2018/10/15 15:19:14 by imesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int		m;

	m = n;
	if (m < 0)
	{
		ft_putchar_fd('-', fd);
		m *= -1;
	}
	if (m > 9)
	{
		ft_putnbr_fd(m / 10, fd);
		ft_putchar_fd((m % 10) + '0', fd);
	}
	else
		ft_putchar_fd(m + '0', fd);
}
