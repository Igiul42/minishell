/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalle-a <ldalle-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:53:48 by ldalle-a          #+#    #+#             */
/*   Updated: 2021/12/07 14:53:53 by ldalle-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		signe;
	long	x;

	signe = 1;
	x = 0;
	while (*str != '\0' && (*str == 32 || (*str >= 9 && *str <= 13)))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe = -1;
		str++;
	}
	while (*str != '\0' && *str >= 48 && *str <= 57)
	{
		x = (x * 10) + ((char)*str - '0');
		if (x > 4294967296)
		{
			if (signe > 0)
				return (-1);
			return (0);
		}
		str++;
	}
	return (x * signe);
}
