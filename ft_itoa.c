/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizsak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:41:58 by aizsak            #+#    #+#             */
/*   Updated: 2022/11/07 15:54:26 by aizsak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(long n)
{
	int	res;

	res = 0;
	if (n <= 0)
	{
		res++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		len;
	long	nb;

	nb = n;
	len = ft_numlen(nb);
	tab = malloc(len + 1);
	if (!tab)
		return (NULL);
	tab[len--] = 0;
	if (nb == 0)
		tab[0] = '0';
	if (nb < 0)
	{
		tab[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		tab[len--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (tab);
}
