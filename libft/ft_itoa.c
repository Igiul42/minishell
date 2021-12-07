/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalle-a <ldalle-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:54:43 by ldalle-a          #+#    #+#             */
/*   Updated: 2021/12/07 14:54:44 by ldalle-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	slen(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	if (len == 0)
		len = 1;
	return (len);
}

char	*ft_itoa(int c)
{
	char	*p;
	int		len;
	long	nbr;

	nbr = c;
	len = slen(c);
	p = (char *)malloc(len * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	p[len--] = '\0';
	if (nbr == 0)
	{
		p[0] = 48;
	}
	if (nbr < 0)
	{
		p[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		p[len--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (p);
}
