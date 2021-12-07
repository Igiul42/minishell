/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalle-a <ldalle-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:55:02 by ldalle-a          #+#    #+#             */
/*   Updated: 2021/12/07 14:55:04 by ldalle-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	val;

	i = 0;
	val = (unsigned char)c;
	while (i < n)
	{
		if (((unsigned char *)src)[i] == val)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			return (&((unsigned char *)dest)[i + 1]);
		}
		else
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (NULL);
}
